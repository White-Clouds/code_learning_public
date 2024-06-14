package hkxy.hadoop.test4_2;

import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.mapreduce.Partitioner;
import org.apache.hadoop.mapreduce.Reducer;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;
import org.apache.hadoop.util.GenericOptionsParser;

import java.io.DataInput;
import java.io.DataOutput;
import java.io.IOException;
import org.apache.hadoop.io.Writable;

public class bookFilter {

    public static class BookInfo implements Writable {
        private String bookName;
        private String publishDate;

        public BookInfo() {
        }

        public BookInfo(String bookName, String publishDate) {
            this.bookName = bookName;
            this.publishDate = publishDate;
        }

        public String getPublishDate() {
            return publishDate;
        }

        @Override
        public void write(DataOutput out) throws IOException {
            out.writeUTF(bookName);
            out.writeUTF(publishDate);
        }

        @Override
        public void readFields(DataInput in) throws IOException {
            bookName = in.readUTF();
            publishDate = in.readUTF();
        }

        @Override
        public String toString() {
            return bookName + "," + publishDate;
        }
    }

    public static class MyMap extends Mapper<Object, Text, Text, BookInfo> {
        public void map(Object key, Text value, Context context) throws IOException, InterruptedException {
            String line = value.toString();
            String[] arr = line.split(",");
            if (arr.length >= 5) {
                String bookName = arr[0];
                String publishDate = arr[4];
                String classification = arr[3];
                context.write(new Text(classification), new BookInfo(bookName, publishDate));
            }
        }
    }

    public static class MyReduce extends Reducer<Text, BookInfo, Text, BookInfo> {
        public void reduce(Text key, Iterable<BookInfo> values, Context context) throws IOException, InterruptedException {
            for (BookInfo val : values) {
                context.write(key, val);
            }
        }
    }

    public static class YearPartitioner extends Partitioner<Text, BookInfo> {
        @Override
        public int getPartition(Text key, BookInfo value, int numPartitions) {
            if (value.getPublishDate().startsWith("2017")) {
                return 0;
            } else {
                return 1 % numPartitions;
            }
        }
    }

    public static void main(String[] args) throws Exception {
        Configuration conf = new Configuration();
        String[] otherArgs = new GenericOptionsParser(conf, args).getRemainingArgs();
        if (otherArgs.length < 2) {
            System.err.println("必须输入读取文件路径和输出路径");
            System.exit(2);
        }
        Job job = Job.getInstance(conf, "book filter");
        job.setJarByClass(bookFilter.class);
        job.setMapperClass(MyMap.class);
        job.setReducerClass(MyReduce.class);
        job.setPartitionerClass(YearPartitioner.class);
        job.setMapOutputKeyClass(Text.class);
        job.setMapOutputValueClass(BookInfo.class);
        job.setOutputKeyClass(Text.class);
        job.setOutputValueClass(BookInfo.class);
        for (int i = 0; i < otherArgs.length - 1; i++) {
            FileInputFormat.addInputPath(job, new Path(otherArgs[i]));
        }
        FileOutputFormat.setOutputPath(job, new Path(otherArgs[otherArgs.length - 1]));
        System.exit(job.waitForCompletion(true) ? 0 : 1);
    }
}

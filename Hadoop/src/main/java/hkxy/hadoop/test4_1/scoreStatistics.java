package hkxy.hadoop.test4_1;

import org.apache.hadoop.conf.Configuration;
import org.apache.hadoop.fs.Path;
import org.apache.hadoop.io.Text;
import org.apache.hadoop.mapreduce.Job;
import org.apache.hadoop.mapreduce.Mapper;
import org.apache.hadoop.mapreduce.Reducer;
import org.apache.hadoop.mapreduce.lib.input.FileInputFormat;
import org.apache.hadoop.mapreduce.lib.output.FileOutputFormat;

import java.io.IOException;

public class scoreStatistics {

    public static void main(String[] args) throws Exception {
        if (args.length != 2) {
            System.err.println("用法：scoreStatistics <输入路径> <输出路径>");
            System.exit(-1);
        }

        Configuration conf = new Configuration();
        Job job = Job.getInstance(conf, "Max Grade");

        job.setJarByClass(scoreStatistics.class);
        job.setMapperClass(MaxGradeMapper.class);
        job.setReducerClass(MaxGradeReducer.class);

        job.setOutputKeyClass(Text.class);
        job.setOutputValueClass(Text.class);

        FileInputFormat.addInputPath(job, new Path(args[0]));
        FileOutputFormat.setOutputPath(job, new Path(args[1]));

        System.exit(job.waitForCompletion(true) ? 0 : 1);
    }

    public static class MaxGradeMapper extends Mapper<Object, Text, Text, Text> {

        private Text subject = new Text();
        private Text snoGrade = new Text();

        public void map(Object key, Text value, Context context) throws IOException, InterruptedException {
            String[] fields = value.toString().split(",");

            String sno = fields[0];
            String course = fields[1];
            String grade = fields[2];

            subject.set(course);
            snoGrade.set(sno + "," + grade);

            context.write(subject, snoGrade);
        }
    }

    public static class MaxGradeReducer extends Reducer<Text, Text, Text, Text> {

        private Text result = new Text();

        public void reduce(Text key, Iterable<Text> values, Context context) throws IOException, InterruptedException {
            String topSno = "";
            int maxGrade = Integer.MIN_VALUE;

            for (Text val : values) {
                String[] snoGrade = val.toString().split(",");
                String sno = snoGrade[0];
                int grade = Integer.parseInt(snoGrade[1]);

                if (grade > maxGrade) {
                    maxGrade = grade;
                    topSno = sno;
                }
            }

            result.set(topSno + "," + maxGrade);
            context.write(key, result);
        }
    }
}

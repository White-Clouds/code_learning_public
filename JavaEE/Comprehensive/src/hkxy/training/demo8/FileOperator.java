package hkxy.training.demo8;

import java.io.*;
import java.util.Scanner;

/**
 * 文件操作类，提供创建、删除、复制和执行文件的方法
 */
public class FileOperator {
    public static final String LINE_END_TAG = "\r\n";  // 行结束标记
    public static final String END_INPUT = "--END";  // 输入结束标记

    /**
     * 创建文件的方法
     *
     * @param scanner Scanner对象，用于获取用户输入
     */
    public void createFile(Scanner scanner) {
        System.out.println("请输入文件名：");
        String fileName = scanner.nextLine();
        File file = new File(fileName);
        if (file.exists()) {
            try {
                file.createNewFile();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        System.out.println("请输入文件内容，以--END结束：");
        String line = scanner.nextLine();

        // 使用BufferedWriter写入文件内容
        try (BufferedWriter bw = new BufferedWriter(new FileWriter(file))) {
            while (true) {
                if (END_INPUT.equals(line)) {
                    return;
                }
                bw.write(line.concat(LINE_END_TAG));
                line = scanner.nextLine();
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
        System.out.println("文件创建成功！");
    }

    /**
     * 删除文件的方法
     *
     * @param scanner Scanner对象，用于获取用户输入
     */
    public void delFile(Scanner scanner) {
        System.out.println("请输入想要删除的文件全路径：");
        String filePath = scanner.nextLine();
        File file = new File(filePath);
        if (file.exists() && file.isFile()) {
            file.delete();
            System.out.println("文件删除成功！删除文件：" + file.getAbsolutePath());
        } else {
            System.out.println("文件不存在！");
        }
    }

    /**
     * 复制文件的方法
     *
     * @param scanner Scanner对象，用于获取用户输入
     */
    public void copyFile(Scanner scanner) {
        System.out.println("请输入源文件的全路径：");
        String sourceFilePath = scanner.nextLine();
        System.out.println("请输入目标文件的全路径：");
        String targetFilePath = scanner.nextLine();

        File sourceFile = new File(sourceFilePath);
        File targetFile = new File(targetFilePath);

        if (!sourceFile.exists()) {
            System.out.println("源文件不存在！");
            return;
        }

        if (targetFile.exists()) {
            System.out.println("目标文件已存在！");
            return;
        }

        // 使用FileInputStream和FileOutputStream进行文件复制
        try (FileInputStream fis = new FileInputStream(sourceFile);
             FileOutputStream fos = new FileOutputStream(targetFile)) {

            byte[] buffer = new byte[1024];
            int length;

            while ((length = fis.read(buffer)) != -1) {
                fos.write(buffer, 0, length);
            }

            System.out.println("文件复制成功！");

        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    /**
     * 执行文件的方法
     *
     * @param scanner Scanner对象，用于获取用户输入
     */
    public void execFile(Scanner scanner) {
        System.out.println("请输入想要执行的执行文件：");
        String filePath = scanner.nextLine();
        File file = new File(filePath);
        if (!file.exists()) {
            System.out.println("执行文件不存在！");
            return;
        }
        if (!file.isFile()) {
            System.out.println("不是文件，无法进行执行！");
            return;
        }
        System.out.println("开始执行执行文件：");
        // 使用BufferedReader读取并打印文件内容
        try (BufferedReader br = new BufferedReader(new FileReader(file))) {
            String line = br.readLine();
            while (null != line && !"".equals(line)) {
                String[] infos = line.split(" ");
                switch (infos[0]) {
                    case "1":
                        createFileByBatch(infos);
                        break;
                    case "2":
                        delFileByBatch(infos);
                        break;
                    case "3":
                        copyFileByBatch(infos);
                        break;
                    default:
                        System.out.println("指令错误！");
                        break;
                }
                line = br.readLine();
            }
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
        System.out.println("执行文件结束！");
    }

    /**
     * 批量创建文件
     *
     * @param infos 文件信息
     */
    public void createFileByBatch(String[] infos) {
        File file = new File(infos[1]);
        if (file.exists()) {
            try {
                file.createNewFile();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        if (null == infos[2] || "".equals(infos[2])) {
            return;
        }
        try (FileOutputStream fos = new FileOutputStream(file)) {
            for (int i = 2; i < infos.length; i++) {
                if (END_INPUT.equals(infos[i])) {
                    System.out.println("文件创建内容插入结束！创建成功！");
                    return;
                }
                if (!LINE_END_TAG.equals(infos[i])) {
                    fos.write(infos[i].getBytes());
                    fos.write("".getBytes());
                } else {
                    fos.write(LINE_END_TAG.getBytes());
                }
            }
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
        System.out.println("创建文件：" + infos[1] + "成功！");
    }

    /**
     * 批量删除文件
     *
     * @param infos 文件信息
     */
    public void delFileByBatch(String[] infos) {
        File file = new File(infos[1]);
        if (!file.exists() || !file.isFile()) {
            System.out.println("文件不存在！");
        } else {
            file.delete();
            System.out.println("文件删除成功！");
        }
    }

    /**
     * 批量复制文件
     *
     * @param infos 文件信息
     */
    public void copyFileByBatch(String[] infos) {
        File file = new File(infos[1]);
        File newFile = new File(infos[2]);
        if (!file.exists() || !file.isFile()) {
            System.out.println("源文件不存在！");
            return;
        }
        if (!newFile.exists()) {
            try {
                newFile.createNewFile();
            } catch (IOException e) {
                e.printStackTrace();
            }
        }
        try (FileInputStream fis = new FileInputStream(file);
             FileOutputStream fos = new FileOutputStream(newFile)) {
            byte[] b = new byte[1024];
            while (fis.read(b) != -1) {
                fos.write(b);
            }
            System.out.println("文件:" + infos[1] + "复制成功，副本是：" + infos[2]);
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
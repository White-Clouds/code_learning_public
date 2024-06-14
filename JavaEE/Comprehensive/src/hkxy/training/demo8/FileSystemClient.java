package hkxy.training.demo8;

import java.util.Scanner;

public class FileSystemClient {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        FileOperator fo = new FileOperator();
        while (true) {
            System.out.println("1-创建文件  2-删除文件  3-复制文件  4-执行文件  exit-退出系统");
            switch (scan.nextLine()) {
                case "1":
                    fo.createFile(scan);
                    break;
                case "2":
                    fo.delFile(scan);
                    break;
                case "3":
                    fo.copyFile(scan);
                    break;
                case "4":
                    fo.execFile(scan);
                    break;
                case "exit":
                    System.exit(0);
                    break;
                default:
                    System.out.println("输入错误，请重新输入");
                    break;
            }
        }
    }
}

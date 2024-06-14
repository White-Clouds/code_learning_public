package hkxy.training.demo2;

import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("输入数列中数的个数：");
        int n = scanner.nextInt();
        int[] abc = new int[n]; //定义数组中数的个数n
        System.out.println("输入：");
        for (int i = 0; i < n; i++) { //利用n在输入结束时立即输出结果
            abc[i] = scanner.nextInt();
        }
        scanner.close();
        paixu(abc);
        System.out.println("排列：");
        printabc(abc);
    }

    static void paixu(int abc[]) { //排序
        int n = abc.length;
        for (int i = 0; i < n - 1; i++)
            for (int j = 0; j < n - i - 1; j++)
                if (abc[j] > abc[j + 1]) { //比较大小，最后从小到大排列
                    int tmp = abc[j]; //定义中间变量
                    abc[j] = abc[j + 1];
                    abc[j + 1] = tmp;
                }
    }

    static void printabc(int abc[]) { //输出
        int n = abc.length;
        for (int i = 0; i < n; ++i)
            System.out.print(abc[i] + " ");
        System.out.println();
    }
}

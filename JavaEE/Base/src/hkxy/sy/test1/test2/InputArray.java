package hkxy.sy.test1.test2;

public class InputArray {
    public static void main(String[] args) {
        int[] a = {100, 200, 300};
        System.out.println("数组a的长度" + a.length);//【代码1】// 输出数组a的长度
        System.out.println("数组a的引用" + a);//【代码2】// 输出数组a的引用
        int b[][] = {{1}, {1, 1}, {1, 2, 1}, {1, 3, 3, 1}, {1, 4, 6, 4, 1}};
        System.out.println("二维数组b的一维数组的个数" + b.length);//【代码3】// 输出二维数组b的一维数组的个数
        System.out.println(b[4][2]);
        b[4] = a;//【代码4】//将数组a的引用赋给b[4]
        System.out.println(b[4][2]);
    }
}

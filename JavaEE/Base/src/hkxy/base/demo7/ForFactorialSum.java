package hkxy.base.demo7;

public class ForFactorialSum {
    public static void main(String[] args) {
        double sum = 0.0;
        double factorial = 1.0;

        for (int n = 1; n <= 20; n++) {
            factorial *= n; // 计算n的阶乘
            sum += 1.0 / factorial; // 计算1/n!
        }

        System.out.println("前20项之和: " + sum);
    }
}

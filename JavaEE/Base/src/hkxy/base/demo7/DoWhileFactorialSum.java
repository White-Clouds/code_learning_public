package hkxy.base.demo7;

public class DoWhileFactorialSum {
    public static void main(String[] args) {
        double sum = 0.0;
        double factorial = 1.0;
        int n = 1;

        do {
            factorial *= n; // 计算n的阶乘
            sum += 1.0 / factorial; // 计算1/n!
            n++;
        } while (n <= 20);

        System.out.println("前20项之和: " + sum);
    }
}

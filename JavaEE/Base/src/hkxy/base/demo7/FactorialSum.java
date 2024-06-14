package hkxy.base.demo7;

public class FactorialSum {
    public static void main(String[] args) {
        // 使用 do-while 循环计算
        double sumDoWhile = 0.0;
        double factorialDoWhile = 1.0;
        int nDoWhile = 1;

        do {
            factorialDoWhile *= nDoWhile; // 计算n的阶乘
            sumDoWhile += 1.0 / factorialDoWhile; // 计算1/n!
            nDoWhile++;
        } while (nDoWhile <= 20);

        // 使用 for 循环计算
        double sumFor = 0.0;
        double factorialFor = 1.0;

        for (int nFor = 1; nFor <= 20; nFor++) {
            factorialFor *= nFor; // 计算n的阶乘
            sumFor += 1.0 / factorialFor; // 计算1/n!
        }

        System.out.println("使用 do-while 循环计算前20项之和: " + sumDoWhile);
        System.out.println("使用 for 循环计算前20项之和: " + sumFor);
    }
}

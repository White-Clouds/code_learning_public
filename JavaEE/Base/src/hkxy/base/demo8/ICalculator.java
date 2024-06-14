package hkxy.base.demo8;

import java.util.Scanner;

public interface ICalculator {
    boolean countData();

    int operateData(int firstData, int secondData, String sign);
}

class Calculator implements ICalculator {
    public boolean countData() {
        Scanner scanner = new Scanner(System.in);
        while (true) {
            System.out.println("请输入第一个整数：");
            int firstData = Integer.parseInt(scanner.nextLine());

            System.out.println("请输入操作符 (+, -, *, /)：");
            String sign = scanner.nextLine();

            System.out.println("请输入第二个整数：");
            int secondData = Integer.parseInt(scanner.nextLine());

            int result = operateData(firstData, secondData, sign);
            System.out.println("计算结果：" + result);

            System.out.println("是否继续计算？(Y/N)");
            String continueInput = scanner.nextLine();
            if (!continueInput.equalsIgnoreCase("Y")) {
                return true;
            }
        }
    }

    public int operateData(int firstData, int secondData, String sign) {
        int result = 0;
        switch (sign) {
            case "+":
                result = firstData + secondData;
                break;
            case "-":
                result = firstData - secondData;
                break;
            case "*":
                result = firstData * secondData;
                break;
            case "/":
                if (secondData != 0) {
                    result = firstData / secondData;
                } else {
                    System.out.println("除数不能为零");
                }
                break;
            default:
                System.out.println("无效的操作符");
        }
        return result;
    }
}
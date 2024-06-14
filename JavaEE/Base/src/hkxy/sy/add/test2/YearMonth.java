package hkxy.sy.add.test2;

import java.util.Scanner;

public class YearMonth {
    private int year;
    private int month;

    public YearMonth(int year, int month) {
        this.year = year;
        this.month = month;
    }

    public void calculateAndPrintInfo() {
        if (year < 0 || month < 1 || month > 12) {
            System.out.println("输入的年份或月份不合法");
            return;
        }

        String season; //季节
        int daysInMonth; //月天数
        int daysInMonth2; //2月天数
        int daysInQuarter; //季度天数

        switch (month) {
            case 3:
            case 4:
            case 5:
                season = "春季";
                break;
            case 6:
            case 7:
            case 8:
                season = "夏季";
                break;
            case 9:
            case 10:
            case 11:
                season = "秋季";
                break;
            default:
                season = "冬季";
                break;
        }

        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            // 判断是否为闰年
            switch (month) {
                case 2:
                    daysInMonth = 29;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    daysInMonth = 30;
                    break;
                default:
                    daysInMonth = 31;
                    break;
            }
        } else {
            switch (month) {
                case 2:
                    daysInMonth = 28;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    daysInMonth = 30;
                    break;
                default:
                    daysInMonth = 31;
                    break;
            }
        }

        switch (month) {
            case 1:
            case 2:
            case 12:
                if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
                    daysInMonth2 = 29;
                } else {
                    daysInMonth2 = 28;
                }
                daysInQuarter = daysInMonth2 + 31 + 31; // 第四季度的天数
                break;
            case 3:
            case 4:
            case 5:
                daysInQuarter = 31 + 30 + 31; // 第一季度的天数
                break;
            case 6:
            case 7:
            case 8:
                daysInQuarter = 30 + 31 + 31; // 第二季度的天数
                break;
            default:
                daysInQuarter = 30 + 31 + 30; // 第三季度的天数
                break;
        }

        System.out.println(year + "年" + month + "月属于" + season + "，本月有" + daysInMonth + "天，本季度共" + daysInQuarter + "天。");
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        boolean continueInput = true;

        while (continueInput) {
            System.out.print("请输入年份和月份（用空格分隔），输入-1 -1退出：");
            int year = scanner.nextInt();
            int month = scanner.nextInt();

            if (year == -1 && month == -1) {
                continueInput = false;
            } else {
                YearMonth yearMonth = new YearMonth(year, month);
                yearMonth.calculateAndPrintInfo();
            }
        }

        scanner.close();
    }
}

package hkxy.training.demo3;

import java.util.Random;
import java.util.Scanner;

public class GuessLetter {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Random rm = new Random();
        char letter = (char) (rm.nextInt(26) + 'a');
        int times = 10;
        char guessLetter;
        System.out.println("请输入一个小写字母：");
        while (times > 0) {
            guessLetter = scan.next().charAt(0);
            if (guessLetter == letter) {
                System.out.println("恭喜您，猜对了。实际字母是：" + letter);
                System.exit(0);
            }
            if (guessLetter > letter) {
                System.out.println("对不起，猜大了。");
            }
            if (guessLetter < letter) {
                System.out.println("对不起，猜小了。");
            }
            times--;
        }
        System.out.println("对不起，您的机会已经用完。该字母是：" + letter);
        scan.close();
        System.exit(0);
    }
}

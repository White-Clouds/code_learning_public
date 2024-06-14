package hkxy.training.demo3;

import java.util.Random;

public class RandomDemo {
    public static void main(String[] args) {
        Random rm = new Random();
        System.out.println(rm.nextInt(100));
        System.out.println(rm.nextInt(100));
        System.out.println(rm.nextInt());
        System.out.println(rm.nextBoolean());
        System.out.println(rm.nextDouble());
        System.out.println(rm.nextBoolean());
        System.out.println(rm.nextFloat());
        System.out.println("*********************************************");
        rm = new Random(47);
        System.out.println(rm.nextInt());
        System.out.println(rm.nextInt());
        System.out.println(rm.nextInt(100));
        System.out.println(rm.nextInt(100));
    }
}

package hkxy.training.demo2;

public class WhileDemo {
    public static void main(String[] args) {
        int i = 0;
        while (i < 11) {
            i++;
            if (0 == (i%2)) {
                System.out.println("**");
            } else {
                if (5 ==i )
                    System.out.println("$$$$$$$$$$$$$");
            }
            if (!(5 == i)) {
                System.out.println("##");
            }
        }
    }
}

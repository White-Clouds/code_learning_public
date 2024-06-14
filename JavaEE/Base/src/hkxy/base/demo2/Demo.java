package hkxy.base.demo2;

public class Demo {
    public static void main(String[] args) {
        int a[] = {1, 2, 3, 4, 5, 6, 7};
        for (int i = 1; i < 7; i++) {
            a[i] = a[i - 1];
            System.out.println(a[i]);
        }
    }
}

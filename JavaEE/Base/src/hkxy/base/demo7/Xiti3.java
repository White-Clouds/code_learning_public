package hkxy.base.demo7;

public class Xiti3 {
    public static void main(String[] args) {
        double sum=0,a=1,i=1;
        do {
            sum=sum+a;
            i++;
            a=(1.0/i)*a;
        }while(i<=20);
        System.out.println(sum);
        for(sum=0,i=1,a=1;i<=20;i++) {
            a=a*(1.0/i);
            sum=sum+a;
        }
        System.out.println(sum);
    }
}

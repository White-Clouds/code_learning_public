package hkxy.sy.add.test1;

public class Test1 {
    public static int FirstNumber=1;
    public int factorial(int n) {
        int factorialSum=1;
        for(int i=FirstNumber;i<=n;i++) {
            factorialSum=factorialSum*i;
        }
        return factorialSum;
    }
    public static void main(String args[]) {
        Test1 test1=new Test1();
        int sum=test1.factorial(10);
        System.out.println("10 factorial equals:"+sum);
    }
}

package hkxy.base.demo4;

public class Demo1 {
    // 定义一个公共静态整数FirstNumber，初始值为1
    public static int FirstNumber=1;
    public int factorial(int n) {
        // 定义一个整数factorialSum，初始值为1
        int factorialSum=1;
        // 从FirstNumber开始，到n结束，每次i自增1
        for(int i=FirstNumber;i<=n;i++) {
            // 每次循环，factorialSum乘以i
            factorialSum=factorialSum*i;
        }
        // 返回阶乘的结果
        return factorialSum;
    }

    public static void main(String[] args) {
        // 创建一个Demo1类的对象demo2
        Demo1 demo2=new Demo1();
        // 调用demo2对象的factorial方法，计算10的阶乘，并将结果赋值给sum
        int sum=demo2.factorial(10);
        // 输出10的阶乘结果
        System.out.println("10的阶乘等于:"+sum);
    }
}

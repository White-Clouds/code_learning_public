class Program
{
    static void Main(string[] args)
    {
        int n = 10;
        int result = Fibonacci(n);
        Console.WriteLine($"斐波那契数列的第{n}项是：{result}");
    }

    static int Fibonacci(int n)
    {
        if (n <= 2)
        {
            return 1;
        }
        else
        {
            return Fibonacci(n - 1) + Fibonacci(n - 2);
        }
    }
}

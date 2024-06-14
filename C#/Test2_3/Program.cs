class Program
{
    static void Main(string[] args)
    {
        int sum = 0;
        for (int i = 1; i <= 100; i++)
        {
            if (i % 10 != 3)
            {
                sum += i;
            }
        }
        Console.WriteLine($"1到100之间，不包括个位数为3的数的总和是：{sum}");
    }
}

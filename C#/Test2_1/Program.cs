class Program
{
    static void Main(string[] args)
    {
        int sum = 0; 
        for (int i = 1; i < 100; i++)
        {
            if (i % 2 != 0)
            {
                sum += i;
            }
        }
        Console.WriteLine($"1+3+5+7+...+99的求和结果为: {sum}");
    }
}

class Program
{
    static void Main(string[] args)
    {
        Console.Write("请输入一个整数：");
        string input = Console.ReadLine();
        if (int.TryParse(input, out int number))
        {
            if (number % 2 == 0)
            {
                Console.WriteLine($"{number} 是偶数。");
            }
            else
            {
                Console.WriteLine($"{number} 是奇数。");
            }
        }
        else
        {
            Console.WriteLine("输入不是一个有效的整数！");
        }
    }
}

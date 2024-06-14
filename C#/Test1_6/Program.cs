class Program
{
    static void Main(string[] args)
    {
        Console.Write("请输入一个字符串：");
        string input = Console.ReadLine();
        if (!string.IsNullOrEmpty(input))
        {
            char firstChar = input[0];
            if (char.IsLetter(firstChar))
            {
                Console.WriteLine("首字符是字母。");
            }
            else if (char.IsDigit(firstChar))
            {
                Console.WriteLine("首字符是数字。");
            }
            else
            {
                Console.WriteLine("首字符是其他类型的字符。");
            }
        }
        else
        {
            Console.WriteLine("没有输入或输入为空字符串！");
        }
    }
}

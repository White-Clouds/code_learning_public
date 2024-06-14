class Program
{
    static void Main(string[] args)
    {
        Console.Write("请输入第一个数：");
        double num1 = Convert.ToDouble(Console.ReadLine());

        Console.Write("请输入第二个数：");
        double num2 = Convert.ToDouble(Console.ReadLine());

        Console.Write("请输入运算符(+, -, *, /)：");
        string op = Console.ReadLine();

        double result = 0;
        bool isValidOperator = true;

        switch (op)
        {
            case "+":
                result = num1 + num2;
                break;
            case "-":
                result = num1 - num2;
                break;
            case "*":
                result = num1 * num2;
                break;
            case "/":
                if (num2 != 0)
                {
                    result = num1 / num2;
                }
                else
                {
                    isValidOperator = false;
                    Console.WriteLine("除数不能为0。");
                }
                break;
            default:
                isValidOperator = false;
                Console.WriteLine("未知的运算符。");
                break;
        }

        if (isValidOperator)
        {
            Console.WriteLine($"结果是：{result}");
        }
    }
}

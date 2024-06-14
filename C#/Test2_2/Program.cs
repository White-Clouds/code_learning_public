class Program
{
    static void Main(string[] args)
    {
        string[] months = {
            "January", "February", "March", "April",
            "May", "June", "July", "August",
            "September", "October", "November", "December"
        };

        while (true)
        {
            Console.WriteLine("请输入月份数，若输入0则退出：");
            string input = Console.ReadLine();
            if (int.TryParse(input, out int monthNumber))
            {
                if (monthNumber >= 1 && monthNumber <= 12)
                {
                    Console.WriteLine(months[monthNumber - 1]);
                }
                else if (monthNumber == 0)
                {
                    break;
                }
                else
                {
                    Console.WriteLine("输入信息不合法，请输入1到12之间的数字或者输入0退出。");
                }
            }
            else
            {
                Console.WriteLine("输入信息不合法，请输入1到12之间的数字或者输入0退出。");
            }
        }
    }
}

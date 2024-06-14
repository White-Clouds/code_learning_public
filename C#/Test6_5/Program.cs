namespace Test6_5
{
    class Program
    {
        static void Main(string[] args)
        {
            Dictionary<string, string> dic = new Dictionary<string, string>();
            dic.Add("1", "a");
            dic.Add("2", "b");
            dic.Add("3", "c");
            dic.Add("4", "d");
            dic.Add("5", "e");
            foreach (KeyValuePair<string, string> item in dic)
            {
                Console.WriteLine("键：" + item.Key + " 值：" + item.Value);
            }
        }
    }
}

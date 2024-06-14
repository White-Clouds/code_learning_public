namespace Test6_2
{
    class Test2
    {
        static void Main(string[] args)
        {
            Dictionary<int, string> dic = new Dictionary<int, string>();
            dic.Add(1, "张三");
            dic.Add(2, "李四");
            dic.Add(3, "王五");
            foreach (KeyValuePair<int, string> kv in dic)
            {
                Console.WriteLine(kv.Key + ":" + kv.Value);
            }
            Console.ReadKey();
        }
    }
}

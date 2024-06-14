namespace Test6_4
{
    class Program
    {
        static void Main(string[] args)
        {
            List<int> list = new List<int> { 1, 3, 5, 2, 4, 6 };
            list.Sort();
            foreach (var item in list)
            {
                Console.Write(item + " ");
            }
            Console.WriteLine();
            list.RemoveAt(4);
            foreach (var item in list)
            {
                Console.Write(item + " ");
            }
        }
    }
}

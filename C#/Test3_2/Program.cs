namespace Test3_2
{
    class Test2
    {
        static int x = 50;
        static int y = 200;
        public static void Method()
        {
            Console.WriteLine(x + y);
        }
    }
    class Program
    {
        public static void Main(string[] args)
        {
            Test2.Method();
        }
    }
}

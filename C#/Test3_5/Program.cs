namespace Test3_5
{
    using System;
    public class Singleton
    {
        private static Singleton instance = new Singleton();
        private Singleton() { }
        public static Singleton GetInstance()
        {
            return instance;
        }
        public void PrintMessage()
        {
            Console.WriteLine("这是一个单例实例。");
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Singleton singleton1 = Singleton.GetInstance();
            Singleton singleton2 = Singleton.GetInstance();
            if (singleton1 == singleton2)
            {
                Console.WriteLine("两个实例相同。");
            }
            else
            {
                Console.WriteLine("两个实例不同。");
            }
            singleton1.PrintMessage();
        }
    }
}

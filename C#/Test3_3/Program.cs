namespace Test3_3
{
    class Outer
    {
        public string name = "Outer";
        public class Nesting
        {
            public string name = "Nesting";
            void ShowName()
            {
                Console.WriteLine(name);
            }
        }
    }
    class Program
    {
        public static void Main(string[] args)
        {
            Outer.Nesting nesting = new Outer.Nesting();
            Console.WriteLine(nesting.name);
            Console.ReadKey();
        }
    }

}

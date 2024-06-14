public class Test02
{
    public static void Main(string[] args)
    {
        int x = 12;
        int y = 96;
        {
            Console.WriteLine("x is " + x);
            Console.WriteLine("y is " + y);
        }
        y = x;
        Console.WriteLine("x is " + x);
    }
}

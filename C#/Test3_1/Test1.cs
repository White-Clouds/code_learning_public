class A
{
    public int secret = 5;
}
class Test1
{
    public static void Main(string[] args)
    {
        A a = new A();
        Console.WriteLine(a.secret++);
        Console.ReadKey();
    }
}


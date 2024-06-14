public class A
{
    public virtual void MyMethod(int value)
    {
        Console.WriteLine($"Class A: {value + 10}");
    }
}

public class B : A
{
    public override void MyMethod(int value)
    {
        Console.WriteLine($"Class B: {value + 50}");
    }
}

public class Program
{
    public static void Main(string[] args)
    {
        A a = new A();
        a.MyMethod(10);

        B b = new B();
        b.MyMethod(10);
    }
}


class Animal
{
    public virtual void shout()
    {
        Console.WriteLine("动物叫！");
    }
}
class Dog : Animal
{
    public override void shout()
    {
        base.shout();
        Console.WriteLine("汪汪......");
    }
}
class Test03
{
    static void Main(string[] args)
    {
        Animal animal = new Dog();
        animal.shout();
        Console.ReadKey();
    }
}

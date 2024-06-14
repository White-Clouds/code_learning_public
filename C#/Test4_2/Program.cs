class Animal
{
    public virtual void shout()
    {
        Console.WriteLine("I’m a Animal");
    }
}
class Dog : Animal
{
    public sealed override void shout()
    {
        Console.WriteLine("I’m a Dog");
    }
}
class BlackDog : Dog
{
    public void newShout()
    {
        Console.WriteLine("I’m a BlackDog");
    }
}
class Test02
{
    static void Main(string[] args)
    {
        Dog dog = new Dog();
    }
}

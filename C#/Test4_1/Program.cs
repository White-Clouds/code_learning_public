
class Animal
{
}
class Dog : Animal
{
}
class Cat : Animal
{
}
class Test01
{
    static void Main(string[] args)
    {
        Animal animal = new Dog();
        Dog dog = animal as Dog;
        Console.ReadKey();
    }
}

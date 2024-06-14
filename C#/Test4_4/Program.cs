public class Student
{
    public string Name { get; set; }
    public int Age { get; set; }
    public Student(string name, int age)
    {
        Name = name;
        Age = age;
    }
    public virtual void Show()
    {
        Console.WriteLine($"Name: {Name}, Age: {Age}");
    }
}

public class Undergraduate : Student
{
    public string Degree { get; set; }

    public Undergraduate(string name, int age, string degree)
        : base(name, age)
    {
        Degree = degree;
    }

    public override void Show()
    {
        Console.WriteLine($"Name: {Name}, Age: {Age}, Degree: {Degree}");
    }
}

public class Program
{
    public static void Main(string[] args)
    {
        Student student = new Student("张三", 20);
        student.Show();

        Undergraduate undergraduate = new Undergraduate("李四", 22, "理学学士");
        undergraduate.Show();
    }
}


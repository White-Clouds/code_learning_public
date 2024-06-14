namespace Test3_4
{
    using System;
    class Student
    {
        private string name;
        private double score;
        public string Name
        {
            get { return name; }
            set { name = value; }
        }
        public double Score
        {
            get { return score; }
            set { score = value; }
        }
        public Student()
        {
            name = "Unknown";
            score = 0.0;
        }
        public Student(string name, double score)
        {
            this.name = name;
            this.score = score;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Student student1 = new Student();
            student1.Name = "Alice";
            student1.Score = 96.5;
            Student student2 = new Student("Bob", 85.0);
            Console.WriteLine("Student 1: Name - {0}, Score - {1}", student1.Name, student1.Score);
            Console.WriteLine("Student 2: Name - {0}, Score - {1}", student2.Name, student2.Score);
        }
    }

}

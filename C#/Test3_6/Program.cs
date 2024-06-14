namespace Test3_6
{
    using System;
    public class Circle
    {
        private double radius;
        public Circle(double radius)
        {
            this.radius = radius;
        }
        public double CalculateArea()
        {
            return Math.PI * radius * radius;
        }
        public double CalculatePerimeter()
        {
            return 2 * Math.PI * radius;
        }
    }
    class Program
    {
        static void Main(string[] args)
        {
            Circle circle = new Circle(5.0);
            double area = circle.CalculateArea();
            double perimeter = circle.CalculatePerimeter();
            Console.WriteLine("圆的面积为: " + area);
            Console.WriteLine("圆的周长为: " + perimeter);
        }
    }
}

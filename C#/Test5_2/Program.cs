namespace Test5_2
{
    interface Shape
    {
        double Area(double x);
    }
    class Square : Shape
    {
        public double Area(double x)
        {
            return x * x;
        }
    }
    class Circle : Shape
    {
        public double Area(double x)
        {
            return 3.14 * x * x;
        }
    }
    class Test05
    {
        static void Main(string[] args)
        {
            Square square = new Square();
            Circle circle = new Circle();
            Console.WriteLine("正方形的面积为：" + square.Area(2));
            Console.WriteLine("圆形的面积为：" + circle.Area(3));
            Console.ReadKey();
        }
    }
}

namespace Test5_3
{
    using System;

    abstract class Vehicle
    {
        protected int weight;
        protected int speed;

        public Vehicle(int weight, int speed)
        {
            this.weight = weight;
            this.speed = speed;
        }

        public abstract void Introduction();
    }

    class Car : Vehicle
    {
        private string brand;

        public Car(int weight, int speed, string brand) : base(weight, speed)
        {
            this.brand = brand;
        }

        public override void Introduction()
        {
            Console.WriteLine($"这是{brand}。重量：{weight}kg。速度：{speed}km/h");
        }
    }

    class Ship : Vehicle
    {
        private string name;

        public Ship(int weight, int speed, string name) : base(weight, speed)
        {
            this.name = name;
        }

        public override void Introduction()
        {
            Console.WriteLine($"这是{name}。重量：{weight}kg。速度：{speed} 节。");
        }
    }

    class Airplane : Vehicle
    {
        private string model;

        public Airplane(int weight, int speed, string model) : base(weight, speed)
        {
            this.model = model;
        }

        public override void Introduction()
        {
            Console.WriteLine($"这是{model}。重量：{weight}kg，速度{speed}km/h。");
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            Car car = new Car(1500, 200, "丰田汽车");
            Ship ship = new Ship(100000, 40, "泰坦尼克号");
            Airplane airplane = new Airplane(50000, 900, "波音747");

            car.Introduction();
            ship.Introduction();
            airplane.Introduction();
        }
    }
}

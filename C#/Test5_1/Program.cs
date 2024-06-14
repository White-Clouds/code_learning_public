namespace Test5_1
{
   interface Animal{
        void breathe();
        void run();
        void eat();
    }
    class Dog:Animal{
        public void breathe(){
            Console.WriteLine("会呼吸");
            }
        public void eat(){	
            Console.WriteLine("会吃饭");
            }

        public void run()
        {
            throw new NotImplementedException();
        }
    }
    class Program{ 
        static void Main(string[] args){
            Dog dog = new Dog();
            dog.breathe();
            dog.eat();
            Console.ReadKey();
            }
        }
}

package hkxy.sy.add.test4;

public class DemoTest {
    public static void main(String[] args) {
        // 创建对象
        Head personHead = new Head("Brown", 2, "Brown");
        Hand leftHand = new Hand(5, "Fair");
        Hand rightHand = new Hand(5, "Fair");
        Shoe leftShoe = new Shoe("Nike", 10, "Black");
        Shoe rightShoe = new Shoe("Nike", 10, "Black");
        Coat coat = new Coat("Winter Coat", "Blue", 42);
        Car car = new Car("Toyota", "Camry", 2023, "Silver", 2.5);

        Person person = new Person("John", 30);
        person.wearShoes(leftShoe, rightShoe);
        person.wearCoat(coat);
        person.driveCar(car);
    }
}

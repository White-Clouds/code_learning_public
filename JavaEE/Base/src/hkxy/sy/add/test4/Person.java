package hkxy.sy.add.test4;

public class Person {
    private String name;
    private int age;
    private Head head;
    private Hand leftHand;
    private Hand rightHand;
    private Shoe leftShoe;
    private Shoe rightShoe;
    private Coat coat;
    private Car car;

    public Person() {
        // 无参构造函数
    }

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }

    public void wearShoes(Shoe leftShoe, Shoe rightShoe) {
        this.leftShoe = leftShoe;
        this.rightShoe = rightShoe;
    }

    public void wearCoat(Coat coat) {
        this.coat = coat;
    }

    public void driveCar(Car car) {
        this.car = car;
    }
}

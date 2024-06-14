package hkxy.sy.add.test4;

public class Car {
    private String make;
    private String model;
    private int year;
    private String color;
    private double engineSize;

    public Car() {
        // 无参构造函数
    }

    public Car(String make, String model, int year, String color, double engineSize) {
        this.make = make;
        this.model = model;
        this.year = year;
        this.color = color;
        this.engineSize = engineSize;
    }
}

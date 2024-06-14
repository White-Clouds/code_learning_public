package hkxy.sy.add.test3;

public class Vehicle {
    private static String brand;
    private String color;
    private double weight;
    private double length;
    private double height;
    private String engineNumber;
    private double fuelTankCapacity;
    private double remainingFuel;
    private double speed;
    private double travelTime;

    // 10个构造函数
    public Vehicle() {
        // 无参构造函数
    }

    public Vehicle(String brand) {
        this.brand = brand;
    }

    public Vehicle(String brand, String engineNumber) {
        this.brand = brand;
        this.engineNumber = engineNumber;
    }

    public Vehicle(String brand, String engineNumber, String color) {
        this.brand = brand;
        this.engineNumber = engineNumber;
        this.color = color;
    }

    public Vehicle(String brand, String engineNumber, String color, double weight) {
        this.brand = brand;
        this.engineNumber = engineNumber;
        this.color = color;
        this.weight = weight;
    }

    public Vehicle(String brand, String engineNumber, String color, double weight, double length) {
        this.brand = brand;
        this.engineNumber = engineNumber;
        this.color = color;
        this.weight = weight;
        this.length = length;
    }

    public Vehicle(String brand, String engineNumber, String color, double weight, double length, double height) {
        this.brand = brand;
        this.engineNumber = engineNumber;
        this.color = color;
        this.weight = weight;
        this.length = length;
        this.height = height;
    }

    public Vehicle(String brand, String engineNumber, String color, double weight, double length, double height, double fuelTankCapacity) {
        this.brand = brand;
        this.engineNumber = engineNumber;
        this.color = color;
        this.weight = weight;
        this.length = length;
        this.height = height;
        this.fuelTankCapacity = fuelTankCapacity;
    }

    public Vehicle(String brand, String engineNumber, String color, double weight, double length, double height, double fuelTankCapacity, double remainingFuel) {
        this.brand = brand;
        this.engineNumber = engineNumber;
        this.color = color;
        this.weight = weight;
        this.length = length;
        this.height = height;
        this.fuelTankCapacity = fuelTankCapacity;
        this.remainingFuel = remainingFuel;
    }

    public Vehicle(String brand, String engineNumber, String color, double weight, double length, double height, double fuelTankCapacity, double remainingFuel, double speed) {
        this.brand = brand;
        this.engineNumber = engineNumber;
        this.color = color;
        this.weight = weight;
        this.length = length;
        this.height = height;
        this.fuelTankCapacity = fuelTankCapacity;
        this.remainingFuel = remainingFuel;
        this.speed = speed;
    }

    public Vehicle(String brand, String engineNumber, String color, double weight, double length, double height, double fuelTankCapacity, double remainingFuel, double speed, double travelTime) {
        this.brand = brand;
        this.engineNumber = engineNumber;
        this.color = color;
        this.weight = weight;
        this.length = length;
        this.height = height;
        this.fuelTankCapacity = fuelTankCapacity;
        this.remainingFuel = remainingFuel;
        this.speed = speed;
        this.travelTime = travelTime;
    }

    // 修改车身颜色
    public void modifyColor(String newColor) {
        this.color = newColor;
    }

    // 修改汽车品牌名
    public void modifyBrand(String newBrand) {
        brand = newBrand;
    }

    // 修改油箱剩余油量
    public void modifyRemainingFuel(double newSpeed, double newTravelTime) {
        // 自定义公式，根据车速和行驶时间来修改剩余油量
        this.remainingFuel -= (newSpeed * newTravelTime) / 100; // 举例：每100公里消耗的油量
    }

    // 输出车辆当前状态信息
    public void printVehicleInfo() {
        System.out.println("汽车品牌是：" + brand + "，发动机号：" + engineNumber + "，油箱剩余油量：" + remainingFuel + "，本次行驶时长：" + travelTime);
    }

    public static void main(String[] args) {
        // 创建10个不同的汽车对象，分别用不同构造函数创建
        Vehicle vehicle1 = new Vehicle();
        Vehicle vehicle2 = new Vehicle("Toyota");
        Vehicle vehicle3 = new Vehicle("Honda", "12345");
        Vehicle vehicle4 = new Vehicle("Ford", "67890", "Red");
        Vehicle vehicle5 = new Vehicle("Chevrolet", "11111", "Blue", 1500.0);
        Vehicle vehicle6 = new Vehicle("Nissan", "22222", "Silver", 2000.0, 180.0);
        Vehicle vehicle7 = new Vehicle("BMW", "33333", "Black", 2500.0, 190.0, 60.0);
        Vehicle vehicle8 = new Vehicle("Mercedes", "44444", "White", 2700.0, 200.0, 70.0, 70.0);
        Vehicle vehicle9 = new Vehicle("Audi", "55555", "Green", 3000.0, 210.0, 75.0, 80.0, 60.0);
        Vehicle vehicle10 = new Vehicle("Volkswagen", "66666", "Gray", 3200.0, 220.0, 80.0, 90.0, 50.0, 120.0);

        // 调用函数来修改车辆信息
        vehicle1.modifyColor("Yellow");
        vehicle2.modifyBrand("Kia");
        vehicle3.modifyRemainingFuel(60.0, 2.5);
        vehicle4.printVehicleInfo();
    }
}

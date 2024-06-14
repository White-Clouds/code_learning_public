package hkxy.sy.add.test4;

public class Shoe {
    private String brand;
    private int size;
    private String color;
    private boolean isLaced;
    private boolean isClean;

    public Shoe() {
        // 无参构造函数
    }

    public Shoe(String brand, int size, String color) {
        this.brand = brand;
        this.size = size;
        this.color = color;
    }
}

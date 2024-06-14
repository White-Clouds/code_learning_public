package hkxy.training.demo4;

public class Wolfdog2 {
    String name;
    int age;
    String color;

    public Wolfdog2() {

    }

    public void bark() {
        System.out.println("Wolfdog bark.");
    }

    public String barkReturn(String name) {
        System.out.println("Wolfdog bark. Named " + name);
        return name;
    }

    public static void main(String[] args) {
        Wolfdog2 dog = new Wolfdog2();
        dog.bark();
        String name1 = "teddy";
        String name2 = dog.barkReturn(name1);
        System.out.println(name2);
    }
}

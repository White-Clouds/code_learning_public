package hkxy.training.demo6;

public class Spy extends Person implements SpySkills,Driver,Teacher {
    @Override
    public void teach() {
        System.out.println("Teaching Geography ...");
    }
    @Override
    public void driveCar() {
        System.out.println("Driving for escape ...");
    }
    @Override
    public void stealInfo() {
        System.out.println("Stealing Infomations ...");
    }
    @Override
    public void crackingPasswords() {
        System.out.println("Cracking Passwords ...");
    }
    public void userComputer() {
        System.out.println("Operating computer ...");
    }
}

package hkxy.sy.add.test5;

public class ParentDemo {
    public static void main(String[] args) {
        // 创建Parent对象
        Parent parent = new Parent("张三", 23, "男", "1234567890", 123456789);

        // 访问成员变量和方法
        System.out.println("姓名: " + parent.getName());
        System.out.println("年龄: " + parent.getAge());
        System.out.println("性别: " + parent.getGender());

        // 通过方法设置受保护和包访问权限的成员变量
        parent.setIDNo("9876543210");
        parent.setPhoneNumber(987654321);

        System.out.println("身份证号码: " + parent.getIDNo());
        System.out.println("手机号码: " + parent.getPhoneNumber());
    }
}

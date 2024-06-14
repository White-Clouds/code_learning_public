package hkxy.sy.add.test5;

public class Parent {
    // 成员变量
    public String name;           // 姓名
    int age;                      // 年龄
    public String gender;         // 性别
    protected String IDNo;       // 身份证号码
    int phoneNumber;              // 手机号码

    // 构造函数
    public Parent() {
    }

    public Parent(String name, int age, String gender, String IDNo, int phoneNumber) {
        this.name = name;
        this.age = age;
        this.gender = gender;
        this.IDNo = IDNo;
        this.phoneNumber = phoneNumber;
    }

    // 设置/获取姓名
    public void setName(String name) {
        this.name = name;
    }

    public String getName() {
        return name;
    }

    // 设置/获取年龄
    void setAge(int age) {
        this.age = age;
    }

    int getAge() {
        return age;
    }

    // 设置/获取性别
    public void setGender(String gender) {
        this.gender = gender;
    }

    public String getGender() {
        return gender;
    }

    // 设置/获取身份证号码
    protected void setIDNo(String IDNo) {
        this.IDNo = IDNo;
    }

    protected String getIDNo() {
        return IDNo;
    }

    // 设置/获取手机号码
    void setPhoneNumber(int phoneNumber) {
        this.phoneNumber = phoneNumber;
    }

    int getPhoneNumber() {
        return phoneNumber;
    }
}

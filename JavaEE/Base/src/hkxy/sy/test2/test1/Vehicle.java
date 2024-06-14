package hkxy.sy.test2.test1;

public class Vehicle {
    double speed;//【代码1】//声明double型变量speed,刻画速度
    int power;//【代码2】//声明int型变量power,刻画功率

    void speedUp(int s) {
        speed = s + speed;//【代码3】//将参数s的值与成员变量speed的和赋值给成员变量speed
    }

    void speedDown(int d) {
        speed = speed - d;//【代码4】//将成员变量speed与参数d的差赋值给成员变量speed
    }

    void setPower(int p) {
        power = p;//【代码5】//将参数p的值赋值给成员变量power
    }

    int getPower() {
        return power;//【代码6】//返回成员变量power的值
    }

    double getSpeed() {
        return speed;
    }
}

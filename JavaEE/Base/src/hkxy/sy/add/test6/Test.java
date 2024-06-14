package hkxy.sy.add.test6;

public class Test {
    public static void main(String[] args) {
        // 创建父类对象
        SuperClassA superObj = new SuperClassA(10, "strProt", 1.0f, "strPri");
        System.out.println("intPub: " + superObj.intPub);
        System.out.println("strProt: " + superObj.strProt);
        System.out.println("varF: " + superObj.varF);

        superObj.show("调用SuperClassA中的show方法");

        // 创建子类对象
        SubClassA subObj = new SubClassA(20);
        System.out.println("SubClassA中的intPub: " + subObj.intPub);
        System.out.println("SubClassA中的strProt: " + subObj.strProt);
        System.out.println("SubClassA中的varF: " + subObj.varF);

        subObj.show("调用SubClassA中的show方法");
        subObj.showSubStr("调用SubClassA中的showSubStr方法");
    }
}

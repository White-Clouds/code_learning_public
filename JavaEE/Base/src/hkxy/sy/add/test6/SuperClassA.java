package hkxy.sy.add.test6;

public class SuperClassA {
    public int intPub;
    protected String strProt;
    float varF;
    private String strPri;

    public SuperClassA() {
    }

    public SuperClassA(int intPub, String strProt, float varF, String strPri) {
        this.intPub = intPub;
        this.strProt = strProt;
        this.varF = varF;
        this.strPri = strPri;
    }

    public SuperClassA getSuperClassA() {
        return this;
    }

    protected void setStrProt(String str) {
        this.strProt = str;
    }

    void show(String msg) {
        System.out.println(msg);
    }

    private void setStrPri(String strPri) {
        this.strPri = strPri;
    }
}

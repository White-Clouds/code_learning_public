package hkxy.sy.add.test6;

public class SubClassA extends SuperClassA {
    protected String strProt;
    float varF;
    private String strPri;
    float subF;

    public SubClassA(int intPub) {
        super(intPub, "strProt in SuperClassA", 0.0f, "strPri in SuperClassA");
    }

    public SubClassA(int intPub, String strProt, float varF, String strPri, float subF) {
        super(intPub, strProt, varF, strPri);
        this.strProt = strProt;
        this.varF = varF;
        this.strPri = strPri;
        this.subF = subF;
    }

    public SuperClassA getSuperClassA() {
        return super.getSuperClassA();
    }

    protected void setStrProt(String str) {
        super.setStrProt(str);
    }

    void showSubStr(String msg) {
        System.out.println(msg);
    }

    private void setStrPri(String strPri) {
        this.strPri = strPri;
    }
}

package hkxy.sy.add.test4;

public class Coat {
    private String type;
    private String color;
    private int size;
    private boolean isButtoned;
    private boolean isWarm;

    public Coat() {
        // 无参构造函数
    }

    public Coat(String type, String color, int size) {
        this.type = type;
        this.color = color;
        this.size = size;
    }
}

package hkxy.sy.add.test4;

public class Hand {
    private int fingerCount;
    private String skinColor;
    private boolean hasThumb;
    private boolean hasNails;
    private boolean isGloved;

    public Hand() {
        // 无参构造函数
    }

    public Hand(int fingerCount, String skinColor) {
        this.fingerCount = fingerCount;
        this.skinColor = skinColor;
    }
}

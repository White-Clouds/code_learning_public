package hkxy.training.demo5;

class FreshwaterFishes extends Fishes {
    private String freshWater;
    public String getFreshWater() {
        return freshWater;
    }
    public void setFreshWater(String freshWater) {
        this.freshWater = freshWater;
    }
    @Override
    public String toString() {
        return "[fins= " + super.getFins()+ ", gill= " + super.getGill() + " ,freshWater=" + freshWater + "]";
    }
}
package hkxy.training.demo5;

class Crucian extends FreshwaterFishes {
    private String crucian;
    public String getCrucian() {
        return crucian;
    }
    public void setCrucian(String crucian) {
        this.crucian = crucian;
    }
    @Override
    public String toString() {
        return "[fins= " + super.getFins()+ ", gill= " + super.getGill() + ",freshWater=" + super.getFreshWater() + " ,crucian=" + crucian + "]";
    }
}

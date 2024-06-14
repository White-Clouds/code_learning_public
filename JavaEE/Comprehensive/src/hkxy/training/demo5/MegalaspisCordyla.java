package hkxy.training.demo5;

class MegalaspisCordyla extends AbyssalFishes {
    private String megalaspisCordyla;
    public String getMegalaspisCordyla() {
        return megalaspisCordyla;
    }
    public void setMegalaspisCordyla(String megalaspisCordyla) {
        this.megalaspisCordyla = megalaspisCordyla;
    }
    @Override
    public String toString() {
        return "[fins= " + super.getFins()+ ", gill= " + super.getGill() + ",abyssalSea=" + super.getAbyssalSea() + " ,megalaspisCordyla=" + megalaspisCordyla + "]";
    }
}

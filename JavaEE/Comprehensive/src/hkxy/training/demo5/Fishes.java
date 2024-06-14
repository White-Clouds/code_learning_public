package hkxy.training.demo5;

class Fishes {
    private String fins;
    private String gill;
    public Fishes () {

    }
    public Fishes (String fins, String gill) {
        this.fins = fins;
        this.gill = gill;
    }
    public String getFins() {
        return fins;
    }
    public void setFins(String fins) {
        this.fins = fins;
    }
    public void setGill(String gill) {
        this.gill = gill;
    }
    public String getGill() {
        return gill;
    }
    @Override
    public String toString() {
        return "[fins=" + fins + ", gill=" + gill + "]";
    }
}

package hkxy.training.demo5;

class AbyssalFishes extends Fishes {
    private String abyssalSea;
    public String getAbyssalSea() {
        return abyssalSea;
    }
    public void setAabyssalSea(String abyssalSea) {
        this.abyssalSea = abyssalSea;
    }
    @Override
    public String toString() {
        return "[fins= " + super.getFins()+ ", gill= " + super.getGill() + " ,abyssalSea=" + abyssalSea + "]";
    }
}

package hkxy.training.demo5;

public class FishDemo {
    public static void main(String[] args) {
        Fishes fishes = new Fishes();
        fishes.setFins("fishes fins");
        fishes.setGill("fishes gills");
        System.out.println("fishes =" + fishes.toString());
        Fishes freshwaterFishes = new FreshwaterFishes();
        freshwaterFishes.setFins("freshwater fins");
        freshwaterFishes.setGill("freshwater gills");
        System.out.println("freshwaterFishes =" + freshwaterFishes);
        //freshwaterFishes.setFreshWater("freshwater");
        FreshwaterFishes freshwaterFishes2 = null;
        if (freshwaterFishes instanceof FreshwaterFishes) {
            freshwaterFishes2 = (FreshwaterFishes) freshwaterFishes;
        }
        freshwaterFishes2.setFreshWater("freshwater");
        System.out.println("freshwaterFishes2 = " + freshwaterFishes2);
        Fishes abyssalSea = new AbyssalFishes();
        Fishes crucian = new Crucian();
        crucian.setFins("crucian fins");
        crucian.setGill("crucian gills");
        System.out.println("crucian =" + crucian.toString());
        //crucian.setFreshWater("freshwater");
        if (crucian instanceof FreshwaterFishes) {
            FreshwaterFishes crucian2 = (FreshwaterFishes) crucian;
            crucian2.setFreshWater("crucian freshwater");
            System.out.println("crucian2 =" + crucian2);
            //crucian2.setCrucian("crucian");
            if (crucian2 instanceof Crucian) {
                Crucian crucian3 = (Crucian) crucian2;
                crucian3.setCrucian("crucian");
                System.out.println("crucian3 =" + crucian3);
            }
        }
        if (crucian instanceof Crucian) {
            Crucian crucian2 = (Crucian) crucian;
            crucian2.setFreshWater("crucian freshwater");
            crucian2.setCrucian("crucian");
            System.out.println("crucian2 =" + crucian2);
        }
        Fishes megalaspisCordyla = new MegalaspisCordyla();
    }
}

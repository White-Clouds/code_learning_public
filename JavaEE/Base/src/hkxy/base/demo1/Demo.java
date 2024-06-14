package hkxy.base.demo1;
import java.util.ArrayList;
import java.util.Iterator;

public class Demo {
    public static void main(String[] args) {
        ArrayList<String> List=new ArrayList<>();
        List.add("同学甲");
        List.add("同学乙");
        List.add("同学丙");
        Iterator<String> it =List.iterator();
        while(it.hasNext()){
            String name=(String)it.next();
            System.out.println(name);
        }
        for(int i=0;i<List.size();i++){
            String name=List.get(i);
            System.out.println(name);
        }
    }
}

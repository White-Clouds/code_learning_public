package hkxy.training.demo3;

public class StringSplitDemo {
    public static void main(String[] args) {
        String str = "Hello David, welcome to China!";
        String[] strs = str.split(" ");
        int count = 0;
        for (String s : strs) {
            System.out.println("分隔后的第"+ ++count +"个字符是："+ s);
        }
        String ss = "Hi Tom!";
        count = 0;
        char[] cArr = ss.toCharArray();
        for (char c:cArr) {
            System.out.println("分隔后的第"+ ++count +"个字符是："+ c +" ");
        }
        System.out.println("字符串从0到索引为6的字串是：" + str.substring(0,6));
        System.out.println("字符串从第一个0到第一个t的子串是："+str.substring(str.indexOf("o"), str.lastIndexOf("t")));
        System.out.println("替换字符串从第一个0到第一个t的字串中的所有的e为下划线："+str.substring(str.indexOf("o"), str.lastIndexOf("t")).replace("e", "_"));
    }
}

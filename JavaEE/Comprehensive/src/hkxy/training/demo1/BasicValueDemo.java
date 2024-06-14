package hkxy.training.demo1;

public class BasicValueDemo {
    public static void main(String[] args) {
        //整型类型
        System.out.println("byte类型的最大值：" + Byte.MAX_VALUE + "：最小值：" + Byte.MIN_VALUE);
        System.out.println("short类型的最大值：" + Short.MAX_VALUE + "：最小值：" + Short.MIN_VALUE);
        System.out.println("int类型的最大值：" + Integer.MAX_VALUE + "：最小值：" + Integer.MIN_VALUE);
        System.out.println("long类型的最大值：" + Long.MAX_VALUE + "：最小值：" + Long.MIN_VALUE);

        //浮点类型
        System.out.println("float类型的最大值：" + Float.MAX_VALUE + "：最小值：" + Float.MIN_VALUE);
        System.out.println("double类型的最大值：" + Double.MAX_VALUE + "：最小值：" + Double.MIN_VALUE);

        //布尔类型
        System.out.println("boolean类型的true：" + Boolean.TRUE + "：false：" + Boolean.FALSE);

        //char类型
        System.out.println("char类型的最大值：" + (int)(Character.MAX_VALUE) + "：最小值：" + (int)(Character.MIN_VALUE));
    }
}

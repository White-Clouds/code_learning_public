package hkxy.training.demo1;

public class IPConvert {
    public static long ip2Long(String strIp) {
        //首先对IP进行分隔
        String[]ip = strIp.split("\\.");
        return (Long.parseLong(ip[0]) <<24) + (Long.parseLong(ip[1]) << 16) + (Long.parseLong(ip[2]) << 8) + Long.parseLong(ip[3]);
    }
    public static String long2IP(long longIp) {
        StringBuilder sb = new StringBuilder("");
        //右移24位
        sb.append(String.valueOf((longIp >>> 24)));
        sb.append(".");
        //右移16位
        sb.append(String.valueOf((longIp & 0x00FFFFFF) >>> 16));
        sb.append(".");
        //右移8位
        sb.append(String.valueOf((longIp & 0x0000FFFF) >>> 8));
        sb.append(".");
        //将高24位置0
        sb.append(String.valueOf((longIp & 0x000000FF)));
        return sb.toString();
    }
    public static void main(String[] args) {
        System.out.println(ip2Long("219.239.110.138"));
        System.out.println(long2IP(3121201111L));
    }
}

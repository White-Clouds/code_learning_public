package hkxy.sy.test6.test1;
import java.sql.*;
import java.util.Random;
import java.util.Vector;

public class RandomGetRecord {
    public static void main(String[] args) {
        int wantRecordAmount = 10;  //随机抽取的记录数目
        Random random =new Random();
        try{
            Class.forName("com.mysql.cj.jdbc.Driver");//加载JDBC-ODBC桥接器
        }
        catch(ClassNotFoundException e) {
            System.out.print(e);
        }
        Connection con;
        Statement sql;
        ResultSet rs;
        try {
            String url = "jdbc:mysql://127.0.0.1:3306/shop_java";
            String username = "root";
            String password = "123456";
            con = DriverManager.getConnection(url, username, password);
            sql=con.createStatement(ResultSet.TYPE_SCROLL_SENSITIVE, ResultSet.CONCUR_READ_ONLY);
            rs = sql.executeQuery("SELECT * FROM goods");//sql调用.executeQuery方法查询goods表中的全部记录
            rs.last();                                       //将rs的游标移到rs的最后一行
            int count=rs.getRow();
            Vector<Integer> vector=new Vector<Integer>();
            for(int i=1;i<=count;i++) {
                vector.add(new Integer(i));
            }
            int itemAmount=Math.min(wantRecordAmount,count);
            System.out.println("随机抽取"+itemAmount+"条记录.");
            double sum =0, n = itemAmount;
            while(itemAmount>0) {
                int randomIndex = random.nextInt(vector.size());
                int index=(vector.elementAt(randomIndex)).intValue();
                rs.absolute(index);//将rs的游标游标移到index
                String number = rs.getString(1);
                String name = rs.getString(2);
                java.util.Date date=rs.getDate(3);
                double price=rs.getDouble(4);
                sum = sum+price;
                itemAmount--;
                vector.removeElementAt(randomIndex);
            }
            con.close();
            double aver = sum/n;
            System.out.println("均价:"+aver+"元");
        }
        catch(SQLException e) {
            System.out.println(""+e);
        }
    }
}

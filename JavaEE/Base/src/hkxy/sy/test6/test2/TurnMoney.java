package hkxy.sy.test6.test2;
import java.sql.*;

public class TurnMoney {
    public static void main(String args[]){
        Connection con = null;
        Statement sql;
        ResultSet rs;
        try { Class.forName("com.mysql.cj.jdbc.Driver");
        }
        catch(ClassNotFoundException e){
            System.out.println(""+e);
        }
        try{ double n = 100;
            con = DriverManager.getConnection("jdbc:mysql://127.0.0.1:3306/bank","root","123456");
            con.setAutoCommit(false);//【代码1】关闭自动提交模式
            sql = con.createStatement();
            rs = sql.executeQuery("SELECT * FROM card1 WHERE name='zhangsan'");
            rs.next();
            double amountOne = rs.getDouble("amount");
            System.out.println("转账操作之前zhangsan的钱款数额:"+amountOne);
            rs = sql.executeQuery("SELECT * FROM card2 WHERE name='xidanShop'");
            rs.next();
            double amountTwo = rs.getDouble("amount");
            System.out.println("转账操作之前xidanShop的钱款数额:"+amountTwo);
            amountOne = amountOne-n;
            amountTwo = amountTwo+n;
            sql.executeUpdate("UPDATE card1 SET amount ="+amountOne+" WHERE name ='zhangsan'");
            sql.executeUpdate("UPDATE card2 SET amount ="+amountTwo+" WHERE name ='xidanShop'");
            con.commit(); //开始事务处理,如果发生异常直接执行catch块
            con.setAutoCommit(true);//【代码2】恢复自动提交模式
            rs = sql.executeQuery("SELECT * FROM card1 WHERE name='zhangsan'");
            rs.next();
            amountOne = rs.getDouble("amount");
            System.out.println("转账操作之后zhangsan的钱款数额:"+amountOne);
            rs = sql.executeQuery("SELECT * FROM card2 WHERE name='xidanShop'");
            rs.next();
            amountTwo = rs.getDouble("amount");
            System.out.println("转账操作之后xidanShop的钱款数额:"+amountTwo);
            con.close();
        }
        catch(SQLException e){
            try{ //【代码3】撤消事务所做的操作
                con.rollback();
            }
            catch(SQLException exp){}
            System.out.println(e.toString());
        }
    }
}

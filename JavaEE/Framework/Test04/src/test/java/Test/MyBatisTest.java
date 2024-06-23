package Test;

import com.itheima.dao.IStudentMapper;
import com.itheima.pojo.IStudent;
import com.itheima.utils.MyBatisUtils;
import org.apache.ibatis.session.SqlSession;
import org.junit.Test;

import java.util.List;

public class MyBatisTest {
    @Test
    public void updateIStudentTest() {
        // 1.通过工具类获取SqlSession对象
        SqlSession session = MyBatisUtils.getSession();
        IStudentMapper mapper = session.getMapper(IStudentMapper.class);
        // 2.使用IStudentMapper对象将id为4的学生姓名修改为李雷，年龄修改为21
        IStudent student = new IStudent();
        student.setId(4);
        student.setName("李雷");
        student.setAge(21);
        mapper.updateStudent(student);
        // 3.提交事务
        session.commit();
        // 4.使用IStudentMapper对象查询id为1的学生的信息
        IStudent studentout = mapper.selectStudent(4);
        System.out.println(studentout.toString());
        // 5.关闭SqlSession
        session.close();
    }

    @Test
    public void findIStudentByCidTest() {
        // 1.通过工具类获取SqlSession对象
        SqlSession session = MyBatisUtils.getSession();
        IStudentMapper mapper = session.getMapper(IStudentMapper.class);
        // 2.使用IStudentMapper对象查询cid为2的所有学生的信息
        List<IStudent> students = mapper.selectStudentwithclass(2);
        for (IStudent student : students) {
            System.out.println(student.toString());
        }
        // 3.关闭SqlSession
        session.close();
    }
}


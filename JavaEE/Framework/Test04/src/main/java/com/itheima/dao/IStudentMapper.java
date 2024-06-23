package com.itheima.dao;

import com.itheima.pojo.IStudent;
import org.apache.ibatis.annotations.Select;
import org.apache.ibatis.annotations.Update;

import java.util.List;

public interface IStudentMapper {
    @Select("select * from s_student where id = #{id}")
    IStudent selectStudent(int id);

    @Select("select * from s_student where cid = #{cid}")
    List<IStudent> selectStudentwithclass(int cid);

    @Update("update s_student set name = #{name}, age = #{age} where id = #{id}")
    void updateStudent(IStudent student);
}


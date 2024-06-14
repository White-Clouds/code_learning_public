#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Date {
public:
    void SetDate()                            //设置年月日
    {
        cout << "请输入出生年份" << endl;
        cin >> year;
        cout << "请输入出生月份" << endl;
        cin >> month;
        cout << "请输入出生日" << endl;
        cin >> day;
    }

    int GetYear()                            //获取年份
    {
        return year;
    }

    int GetMonth()                            //获取月份
    {
        return month;
    }

    int GetDay()                            //获取日
    {
        return day;
    }

private:
    int year;
    int month;
    int day;
};

//定义学生类，包含学生的学号、姓名、出生年月日
class Student {
public:
    void SetStuValues(Date &birthday)        //设置学生的学号、姓名
    {
        cout << "请输入学生的学号" << endl;
        cin >> num;
        cout << "请输入学生的姓名" << endl;
        cin >> name;
        birthday.SetDate();
    }

    void SetNum()                            //设置学生的学号
    {
        cin >> num;
    }

    int GetNum()                            //获取学生的学号
    {
        return num;
    }

    void SetName()                            //设置学生的姓名
    {
        cin >> name;
    }

    string GetName()                        //获取学生的姓名
    {
        return name;
    }

    void SetBirthday(Date &birthday)        //设置年月日
    {
        birthday.SetDate();
    }

    int GetBirYear(Date &birthday)            //获得年
    {
        return birthday.GetYear();
    }

    int GetBirMonth(Date &birthday)        //获得月
    {
        return birthday.GetMonth();
    }

    int GetBirDay(Date &birthday)            //获得日
    {
        return birthday.GetDay();
    }

    //1.输入学生记录
    void InputStudent(Date &birthday) {
        char choice;
        cout << "输入学生记录" << endl;
        ofstream outfile("student.txt", ios::app);
        if (!outfile) {
            cout << "文件打开失败" << endl;
            exit(0);
        }
        SetStuValues(birthday);
        outfile << GetNum() << " " << GetName() << " " << birthday.GetYear() << " " << birthday.GetMonth() << " "
                << birthday.GetDay() << endl;
        cout << "是否继续输入学生信息 输入y（继续）或者n（停止）";
        cin >> choice;
        if (choice == 'y') {
            InputStudent(birthday);
        }
        outfile.close();
        system("pause");
    }

    //2.浏览全部学生记录
    void OutputStudent() {
        int count = 0;
        int year;
        int month;
        int day;
        ifstream infile("student.txt", ios::in);
        if (!infile) {
            cout << "文件打开失败" << endl;
        }
        while (!infile.eof()) {
            infile >> num >> name >> year >> month >> day;
            cout << num << " " << name << " " << year << " " << month << " " << day << endl;
            infile.get();
            if (infile.peek() == '\n') break;
        }
        infile.close();
        system("pause");
    }

    //3.按学号查找学生记录
    void FindByNum() {
        int count = 0;
        int year;
        int month;
        int day;
        int findnum;
        bool find = false;
        cout << "请输入要查找学生的学号";
        cin >> findnum;
        ifstream infile("student.txt", ios::in);
        if (!infile) {
            cout << "文件打开失败" << endl;
        }
        while (!infile.eof()) {
            infile >> num >> name >> year >> month >> day;
            if (num == findnum) {
                cout << num << " " << name << " " << year << " " << month << " " << day << endl;
                find = true;
            }
            infile.get();
            if (infile.peek() == '\n')break;
        }
        if (!find) {
            cout << "查无此人" << endl;
        }
        infile.close();
        system("pause");
    }

    //4.按学号删除学生记录
    void DeleteByNum() {
        int count = 0;
        int year;
        int month;
        int day;
        int findnum;
        bool find = false;
        cout << "请输入要删除学生的学号";
        cin >> findnum;
        ifstream infile("student.txt", ios::in);
        if (!infile) {
            cout << "文件打开失败" << endl;
        }
        ofstream outfile("studentcopy.txt", ios::app);
        if (!outfile) {
            cout << "文件打开失败" << endl;
            exit(0);
        }
        while (!infile.eof()) {
            infile >> num >> name >> year >> month >> day;
            if (num != findnum) {
                outfile << num << " " << name << " " << year << " " << month << " " << day << endl;
            } else {
                cout << num << " " << name << " " << year << " " << month << " " << day << endl;
                find = true;
                cout << "已删除该学生" << endl;
            }
            infile.get();
            if (infile.peek() == '\n')break;
        }
        if (!find) {
            cout << "查无此人" << endl;
        }
        infile.close();
        outfile.close();
        remove("student.txt");                //删除文件
        rename("studentcopy.txt", "student.txt");
    }

    //5.按学号修改学生的姓名
    void AlterNameByNum() {
        int count = 0;
        int year;
        int month;
        int day;
        int findnum;
        string altername;
        bool find = false;
        cout << "请输入要修改学生的学号";
        cin >> findnum;
        cout << "请输入要修改学生的姓名";
        cin >> altername;
        ifstream infile("student.txt", ios::in);
        if (!infile) {
            cout << "文件打开失败" << endl;
        }
        ofstream outfile("studentcopy.txt", ios::app);
        if (!outfile) {
            cout << "文件打开失败" << endl;
            exit(0);
        }
        while (!infile.eof()) {
            infile >> num >> name >> year >> month >> day;
            if (num != findnum) {
                outfile << num << " " << name << " " << year << " " << month << " " << day << endl;
            } else {
                outfile << num << " " << altername << " " << year << " " << month << " " << day << endl;
                find = true;
                cout << "已修改该学生" << endl;
            }
            infile.get();
            if (infile.peek() == '\n')break;
        }
        if (!find) {
            cout << "查无此人" << endl;
        }
        infile.close();
        outfile.close();
        remove("student.txt");                //删除文件
        rename("studentcopy.txt", "student.txt");
    }

private:
    int num;
    string name;
    Date birthday;
};

void MainShow() {
    cout << "\t\t * * * 学生信息系统 * * * " << endl;
    cout << "\t\t * * * 1.输入学生记录 * * " << endl;
    cout << "\t\t * * * 2.浏览全部学生记录 * * * " << endl;
    cout << "\t\t * * * 3.按学号查找学生记录 * * * " << endl;
    cout << "\t\t * * * 4.按学号删除学生记录 * * * " << endl;
    cout << "\t\t * * * 5.按学号修改学生记录 * * * " << endl;
    cout << "\t\t * * * 6.退出系统 * * * " << endl;
}

void Select() {
    int num;
    Student stu;
    Date birthday;
    cout << "请选择功能" << endl;
    cin >> num;
    switch (num) {
        case 1:
            stu.InputStudent(birthday);
            MainShow();
            Select();
            break;
        case 2:
            stu.OutputStudent();
            MainShow();
            Select();
            break;
        case 3:
            stu.FindByNum();
            MainShow();
            Select();
            break;
        case 4:
            stu.DeleteByNum();
            MainShow();
            Select();
            break;
        case 5:
            stu.AlterNameByNum();
            MainShow();
            Select();
            break;
        case 6:
            cout << "系统结束，谢谢再见" << endl;
            exit(0);
            break;
    }
}

int main() {
    MainShow();
    Select();
    return 0;
}

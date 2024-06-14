#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Date {
public:
    void SetDate()                            //����������
    {
        cout << "������������" << endl;
        cin >> year;
        cout << "����������·�" << endl;
        cin >> month;
        cout << "�����������" << endl;
        cin >> day;
    }

    int GetYear()                            //��ȡ���
    {
        return year;
    }

    int GetMonth()                            //��ȡ�·�
    {
        return month;
    }

    int GetDay()                            //��ȡ��
    {
        return day;
    }

private:
    int year;
    int month;
    int day;
};

//����ѧ���࣬����ѧ����ѧ�š�����������������
class Student {
public:
    void SetStuValues(Date &birthday)        //����ѧ����ѧ�š�����
    {
        cout << "������ѧ����ѧ��" << endl;
        cin >> num;
        cout << "������ѧ��������" << endl;
        cin >> name;
        birthday.SetDate();
    }

    void SetNum()                            //����ѧ����ѧ��
    {
        cin >> num;
    }

    int GetNum()                            //��ȡѧ����ѧ��
    {
        return num;
    }

    void SetName()                            //����ѧ��������
    {
        cin >> name;
    }

    string GetName()                        //��ȡѧ��������
    {
        return name;
    }

    void SetBirthday(Date &birthday)        //����������
    {
        birthday.SetDate();
    }

    int GetBirYear(Date &birthday)            //�����
    {
        return birthday.GetYear();
    }

    int GetBirMonth(Date &birthday)        //�����
    {
        return birthday.GetMonth();
    }

    int GetBirDay(Date &birthday)            //�����
    {
        return birthday.GetDay();
    }

    //1.����ѧ����¼
    void InputStudent(Date &birthday) {
        char choice;
        cout << "����ѧ����¼" << endl;
        ofstream outfile("student.txt", ios::app);
        if (!outfile) {
            cout << "�ļ���ʧ��" << endl;
            exit(0);
        }
        SetStuValues(birthday);
        outfile << GetNum() << " " << GetName() << " " << birthday.GetYear() << " " << birthday.GetMonth() << " "
                << birthday.GetDay() << endl;
        cout << "�Ƿ��������ѧ����Ϣ ����y������������n��ֹͣ��";
        cin >> choice;
        if (choice == 'y') {
            InputStudent(birthday);
        }
        outfile.close();
        system("pause");
    }

    //2.���ȫ��ѧ����¼
    void OutputStudent() {
        int count = 0;
        int year;
        int month;
        int day;
        ifstream infile("student.txt", ios::in);
        if (!infile) {
            cout << "�ļ���ʧ��" << endl;
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

    //3.��ѧ�Ų���ѧ����¼
    void FindByNum() {
        int count = 0;
        int year;
        int month;
        int day;
        int findnum;
        bool find = false;
        cout << "������Ҫ����ѧ����ѧ��";
        cin >> findnum;
        ifstream infile("student.txt", ios::in);
        if (!infile) {
            cout << "�ļ���ʧ��" << endl;
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
            cout << "���޴���" << endl;
        }
        infile.close();
        system("pause");
    }

    //4.��ѧ��ɾ��ѧ����¼
    void DeleteByNum() {
        int count = 0;
        int year;
        int month;
        int day;
        int findnum;
        bool find = false;
        cout << "������Ҫɾ��ѧ����ѧ��";
        cin >> findnum;
        ifstream infile("student.txt", ios::in);
        if (!infile) {
            cout << "�ļ���ʧ��" << endl;
        }
        ofstream outfile("studentcopy.txt", ios::app);
        if (!outfile) {
            cout << "�ļ���ʧ��" << endl;
            exit(0);
        }
        while (!infile.eof()) {
            infile >> num >> name >> year >> month >> day;
            if (num != findnum) {
                outfile << num << " " << name << " " << year << " " << month << " " << day << endl;
            } else {
                cout << num << " " << name << " " << year << " " << month << " " << day << endl;
                find = true;
                cout << "��ɾ����ѧ��" << endl;
            }
            infile.get();
            if (infile.peek() == '\n')break;
        }
        if (!find) {
            cout << "���޴���" << endl;
        }
        infile.close();
        outfile.close();
        remove("student.txt");                //ɾ���ļ�
        rename("studentcopy.txt", "student.txt");
    }

    //5.��ѧ���޸�ѧ��������
    void AlterNameByNum() {
        int count = 0;
        int year;
        int month;
        int day;
        int findnum;
        string altername;
        bool find = false;
        cout << "������Ҫ�޸�ѧ����ѧ��";
        cin >> findnum;
        cout << "������Ҫ�޸�ѧ��������";
        cin >> altername;
        ifstream infile("student.txt", ios::in);
        if (!infile) {
            cout << "�ļ���ʧ��" << endl;
        }
        ofstream outfile("studentcopy.txt", ios::app);
        if (!outfile) {
            cout << "�ļ���ʧ��" << endl;
            exit(0);
        }
        while (!infile.eof()) {
            infile >> num >> name >> year >> month >> day;
            if (num != findnum) {
                outfile << num << " " << name << " " << year << " " << month << " " << day << endl;
            } else {
                outfile << num << " " << altername << " " << year << " " << month << " " << day << endl;
                find = true;
                cout << "���޸ĸ�ѧ��" << endl;
            }
            infile.get();
            if (infile.peek() == '\n')break;
        }
        if (!find) {
            cout << "���޴���" << endl;
        }
        infile.close();
        outfile.close();
        remove("student.txt");                //ɾ���ļ�
        rename("studentcopy.txt", "student.txt");
    }

private:
    int num;
    string name;
    Date birthday;
};

void MainShow() {
    cout << "\t\t * * * ѧ����Ϣϵͳ * * * " << endl;
    cout << "\t\t * * * 1.����ѧ����¼ * * " << endl;
    cout << "\t\t * * * 2.���ȫ��ѧ����¼ * * * " << endl;
    cout << "\t\t * * * 3.��ѧ�Ų���ѧ����¼ * * * " << endl;
    cout << "\t\t * * * 4.��ѧ��ɾ��ѧ����¼ * * * " << endl;
    cout << "\t\t * * * 5.��ѧ���޸�ѧ����¼ * * * " << endl;
    cout << "\t\t * * * 6.�˳�ϵͳ * * * " << endl;
}

void Select() {
    int num;
    Student stu;
    Date birthday;
    cout << "��ѡ����" << endl;
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
            cout << "ϵͳ������лл�ټ�" << endl;
            exit(0);
            break;
    }
}

int main() {
    MainShow();
    Select();
    return 0;
}

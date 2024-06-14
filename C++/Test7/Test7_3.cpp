#include <iostream>
#include <string>

using namespace std;

class Person {
public:
    Person(string, int);

    void display();

protected:
    string name;
    int age;
};

Person::Person(string n, int a) {
    name = n;
    age = a;
}

void Person::display() {
    cout << "name:" << name << ",age:" << age << endl;
}

class Student : public Person {
public:
    Student(string, int, int);

    void display();

private:
    int num;
};

Student::Student(string nam, int ag, int nu) : Person(nam, ag), num(nu) {}

void Student::display() {
    cout << "name:" << name << ",age:" << age << ",num:" << num << endl;
}

int main() {
    Person person("张三", 18);
    Student student("李四", 20, 10001);
    Person *p1 = &person;
    Person *p2 = &student;
    p1->display();
    p2->display();
    return 0;
}

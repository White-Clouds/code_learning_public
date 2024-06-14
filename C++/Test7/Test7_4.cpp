#include <iostream>

using namespace std;

class Person {
public:
    ~Person();
};

Person::~Person() {
    cout << "调用父类析构函数" << endl;
}

class Student : public Person {
public:
    ~Student();
};

Student::~Student() {
    cout << "调用子类析构函数" << endl;
}

int main() {
    Person *p1 = new Person();
    Person *p2 = new Student();
    delete p1;
    delete p2;
    return 0;
}

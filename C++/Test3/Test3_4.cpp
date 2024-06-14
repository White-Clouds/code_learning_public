#include<string>
#include<iostream>

using namespace std;

class Worker {
public:
    void set(int n, string name1, float s);

    inline void show();

private:
    int num;
    string name;
    float salary;
};

void Worker::set(int n, string name1, float s) {
    num = n;
    name = name1;
    salary = s;
}

void Worker::show() {
    cout << "num:" << num << endl;
    cout << "name:" << name << endl;
    cout << "salary:" << salary << endl;
}

int main() {
    Worker work1, work2;
    work1.set(1, "张三", 4000);
    work2.set(2, "李四", 4800);
    work1.show();
    work2.show();
    return 0;
}

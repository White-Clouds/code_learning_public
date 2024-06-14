#include <string>
#include <iostream>

using namespace std;

class Worker {
public:
    void set(int n, string name1, float s);

    void show();

    Worker();

private:
    int num;
    string name;
    float salary;
};

Worker::Worker() {
    cout << "Object is being created" << endl;
}

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
    Worker work1;
    work1.set(1, "ÕÅÈý", 4000);
    work1.show();
    return 0;
}

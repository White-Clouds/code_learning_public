#include <string>
#include <iostream>

using namespace std;

class Worker {
public:
    Worker(int n, string name1, float s);

    void show();

private:
    int num;
    string name;
    float salary;
};

Worker::Worker(int n, string name1, float s) {
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
    Worker work1(1, "ÕÅÈý", 4000);
    work1.show();
    return 0;
}

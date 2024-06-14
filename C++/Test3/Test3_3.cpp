#include<string>
#include <iostream>

using namespace std;

class Worker {
public:
    int num;
    string name;
    float salary;

    void show() {
        cout << "num:" << num << endl;
        cout << "name:" << name << endl;
        cout << "salary:" << salary << endl;
    }
};

int main() {
    Worker work1;
    Worker &work2 = work1;
    work2.num = 1;
    work2.name = "ÕÅÈý";
    work2.salary = 4000;
    work1.show();
    return 0;
}

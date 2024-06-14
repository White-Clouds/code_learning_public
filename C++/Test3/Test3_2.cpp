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
    Worker work1, *p;
    p = &work1;
    p->num = 1;
    p->name = "ÕÅÈý";
    p->salary = 4000;
    p->show();
    return 0;
}

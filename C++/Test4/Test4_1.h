#include <string>
#include <iostream>

using namespace std;

class Worker {
public:
    void set(int n, string name1, float s);

    void show();

private:
    int num;
    string name;
    float salary;
};

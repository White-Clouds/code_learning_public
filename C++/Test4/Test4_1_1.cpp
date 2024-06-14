#include "Test4_1.h"
#include <string>
#include <iostream>

using namespace std;

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

#include "Test4_1.h"
#include <iostream>

using namespace std;

int main() {
    Worker work1, work2;
    work1.set(1, "张三", 4000);
    work2.set(2, "李四", 4800);
    work1.show();
    work2.show();
    return 0;
}

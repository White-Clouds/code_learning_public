#include <iostream>

using namespace std;

int main() {
    int i, count = 0, j, sum = 0;
    for (i = 1; i <= 10; i++) {
        cout << "请输入第" << i << "个数据";
        cin >> j;
        if (j <= 0)
            continue;
        count++;
        sum += j;
    }
    if (count) {
        cout << "正整数的个数" << count << " 平均值:" << 1.0 * sum / count << endl;
    } else {
        cout << "输入数据中无正整数" << endl;
    }
    return 0;
}

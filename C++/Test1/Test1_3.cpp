#include <iostream>

using namespace std;

int main() {
    int i, count = 0, j, sum = 0;
    for (i = 1; i <= 10; i++) {
        cout << "�������" << i << "������";
        cin >> j;
        if (j <= 0)
            continue;
        count++;
        sum += j;
    }
    if (count) {
        cout << "�������ĸ���" << count << " ƽ��ֵ:" << 1.0 * sum / count << endl;
    } else {
        cout << "������������������" << endl;
    }
    return 0;
}

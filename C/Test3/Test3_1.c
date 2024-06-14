#include <stdio.h>

void main() {
    int y, m, d, days = 0;
    printf("请输入年，月，日:");
    scanf("%d%d%d", &y, &m, &d);
    switch (m - 1) {
        case 11:
            days = days + 30;
        case 10:
            days = days + 31;
        case 9:
            days = days + 30;
        case 8:
            days = days + 31;
        case 7:
            days = days + 31;
        case 6:
            days = days + 30;
        case 5:
            days = days + 31;
        case 4:
            days = days + 30;
        case 3:
            days = days + 31;
        case 2:
            if (y % 400 == 0 || y % 4 == 0 && y % 100 != 0) days = days + 29;
            else days = days + 28;
        case 1:
            days = days + 31;
    }
    days = days + d;
    printf("这是%d年的第%d天\n", y, days);
}

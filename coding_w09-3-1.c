#include <stdio.h>
int main() {
    int i = 1;
    do {
        if (i == 6) {
            i++;
            continue;
        }
        printf("%d ", i);
        i++;
    } while (i <= 10);
    return 0;
}
 /*ใช้ for, while, และ do-while แต่มีเงื่อนไขเดียวกันคือ
ข้ามการพิมพ์เมื่อ i == 6

ผลลัพธ์สุดท้ายเหมือนกันทุกกรณี:*/
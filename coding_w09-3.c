#include <stdio.h>
int main() {
    int i = 1;
    while (i <= 10) {
        if (i == 6) {
            i++;          
            continue;
        }
        printf("%d ", i);
        i++;
    }
    return 0;
}


 /*ใช้ for, while, และ do-while แต่มีเงื่อนไขเดียวกันคือ
ข้ามการพิมพ์เมื่อ i == 6

ผลลัพธ์สุดท้ายเหมือนกันทุกกรณี:*/
 /*ต้องเพิ่มค่า i ก่อน continue ไม่งั้นจะติดลูป*/



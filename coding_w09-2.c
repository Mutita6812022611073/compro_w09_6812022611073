#include <stdio.h>

int main() {
    int sum, p, x, y;
    sum = 0;
    for (x = 1, y = 1; x * y <= 15; x++, y += 2)
    {
        p = x * y;
        sum = sum + p;
        printf("%d * %d = %d\n", x, y, p);
    }
    printf("summation of x * y = %d\n", sum);
    return 0;
}

/*loop ครั้งที่ 1: x=1, y=1 p=1 sum=1
loop ครั้งที่ 2: x=2, y=3 p=6 sum=7
loop ครั้งที่ 3: x=3, y=5 p=15 sum=22
loop ครั้งที่ 4: x=4, y=7 p=28 (เงื่อนไข xy=28 > 15 ไม่ทำแล้ว)*/
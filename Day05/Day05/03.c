#include <stdio.h>

//���迬���� ����
//<, >, <=, >=

int main(void)
{
    int num1 = 2, num2 = 4;
    int r1, r2, r3, r4;

    r1 = num1 > num2; //
    r2 = num1 < num2;
    r3 = num1 >= num2;
    r4 = num1 <= num2;

    printf("r1 = %d\n", r1);
    printf("r2 = %d\n", r2);
    printf("r3 = %d\n", r3);
    printf("r4 = %d\n", r4);

    return 0;
}
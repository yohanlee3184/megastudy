#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include <stdio.h>

int main_03()
{
    int input1 = 0;

    printf("두 자리 자연수를 입력하세요: ");
    scanf("%d", &input1);
    printf("%d를 뒤집으면 %d%d입니다.\n", input1, input1 % 10, input1 / 10);
   
 
    return 0;
}
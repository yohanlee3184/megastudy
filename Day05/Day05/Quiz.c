#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 

#include <stdio.h>

int main_03()
{
    int input1 = 0;

    printf("�� �ڸ� �ڿ����� �Է��ϼ���: ");
    scanf("%d", &input1);
    printf("%d�� �������� %d%d�Դϴ�.\n", input1, input1 % 10, input1 / 10);
   
 
    return 0;
}
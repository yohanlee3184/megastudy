#include <stdio.h>

int main_02(void)
{

	int num1 = 20; // 0001 0100
	int num2 = 16; // 0001 0000
	int num3 = 2147483647; // 0111 1111 1111 1111 1111 1111 1111 1111

	int r1, r2, r3, r4, r5;

	r1 = num1 << 1;
	printf("%d�� ��Ʈ ���� 1 ����Ʈ ������ ��� %d\n", num1, r1);

	r2 = num1 >> 1;
	printf("%d�� ��Ʈ ������ 1 ����Ʈ ������ ��� %d", num1, r2);

	r3 = num3 << 1;
	printf("%d�� ��Ʈ ���� ���� 1 ����Ʈ ������ ��� %d.\n", num3, r3);
	return 0;
}

/* �ֻ��� ��Ʈ�� 1�̸� ������
1 000 0001 +
1 000 0011 +
1 000 0100 +

������ 1

0000 0001 -> 1111 1110 -> +1 -> 1111 1111 = -1 (2�� ������)
0000 0001 -> (~) 1111 1110 -> +1 -> 1111 1111 = -1

������ 2 ->

0000 0010 -> (~) 1111 1101 -> +1 -> 1111 1110 = -2

1) �������� 2������ ��ȯ�ϰ�
2) ���� (Not)
3) +1

3 -1 = 3 + (-1)

0000 0011 = 3
1111 1111 = -1

0000 0001 -> 1111 1110 -> +1 -> 1111 1111

*/

// -- &, |, ^, ~
/*
// -- &�� ������
0000 1010
0001 0001

0000 0000
// -- |�� ������
0000 1010
0000 1001

0000 1011


// -- ^�� ��Ÿ�� ������

0000 0100
0000 0101

0000 0001


// -- ~ ���� (not)

1111 1110 
0000 0001

*/
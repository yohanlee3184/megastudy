#include <stdio.h>

int main_02(void)

{

	int num = 0;
	printf("���ڸ� �Է��ϼ���. : ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {//num % 2 �� ������ 0�� 1 ����-> ���� 1ȸ ���� ����, �������� ������
		
		printf("%d�� ¦���Դϴ�.\n\n", num);

	}
	else {
		
		printf("%d�� Ȧ���Դϴ�.\n\n", num);

	}
	return 0;
}






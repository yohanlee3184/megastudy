#include <stdio.h>

int main_03(void)

{/*
	char a = 'a';
	char A = 'A';
	char z = 'z';
	char Z = 'Z';
	// �ҹ����� ������ 97 122 �빮�ڴ� 65 90
	printf("�ҹ���%c ~ %c�� ASCII�� %d ~ %d", a, z, a, z);

	printf("�빮��%c ~ %c�� ASCII�� %d ~ %d", A, Z, A, Z) ;
	*/


	char input_ch = 0;
	printf("ASCII �ڵ带 �Է��ϼ���. : ");
	
	scanf_s("%d", &input_ch);

	if (97 <= input_ch && input_ch<= 122) 
	

	{
		printf("���� %d�� �ҹ��� %c �Դϴ�.\n\n", input_ch, input_ch);

	}
	else if (input_ch<=90 && input_ch>=65) {
		printf("���� %d�� �빮�� %c �Դϴ�.\n\n", input_ch, input_ch);
	
	}
	else{
		printf("%d�� ������ ASCII ������ ���ԵǾ� ���� �ʽ��ϴ�.\n", input_ch);
	
	}

	printf("�Է��Ͻ� ���� %c �Դϴ�. \n\n", input_ch);


	return 0;
}
//--- MS C������ ��� ---------------
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
//--------------------------------
#include <stdio.h>
/*swic(����/��){


case ��1:
// ����/�� == ��1 ����
break;

case ��2:
//����/�� == ��2 ����
break;

......
default:
//���� case �������� �����ϴ� (==) ������ ���� ��

}

if(����/�� == ��1) {
// ����/�� == ��1 ����
} else if (��/��==��2 ����)
else


}

*/



int main_05(void)
{
	int num;

	printf("�� �� �Ŵ��� �����Ͻðڽ��ϱ�? \n");
	printf("\t(1) ¥���\n");
	printf("\t(2) ������\n");
	printf("\t(3) «��\n");
	printf("��ȣ����");

	scanf("%d", &num);

	printf("----------------------------------------\n");

	switch (num) {

	case 1:
		printf("¥����� 5000�� �Դϴ�.");

		break;

	case 2:
		printf("�������� 20000�� �Դϴ�.");

		break;

	case 3:
			printf("«���� 6000�� �Դϴ�.");

			break;
		
	default:
		printf("���� �Ŵ��Դϴ�.");

	}

	printf("\n\n");

	return 0;
}
//--- MS C������ ��� ---------------
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
//--------------------------------
#include<stdio.h>

int main_auiz1(void) {
	srand(time(NULL)); // -- ������ �ʱ�ȭ
	int result = rand() % 100 + 1;// ������ �����ϱ� (1 ~ 100)
		int chance = 10; // 10������ �����
	int answer = 0; // ����ڰ� �Է��ϴ� ��

	
	while (1) {

		chance--;
		printf("���ڸ� ������� : ");
		scanf("%d", &answer);

		//������ ���� ���
		if (result == answer) {
			printf("������ ������ϴ�.");
			break;
		}

		else if (answer < result) {

			printf("\nup!\n\n");
			printf("%d ���� ��ȸ�� ���ҽ��ϴ�. \n\n", chance);


		}
		else if (answer > result) {

				printf("\ndown!\n\n");
				printf("%d ���� ��ȸ�� ���ҽ��ϴ�. \n\n", chance);
				

		}

		//chance (��ȸ)�� �� �� ��� break;
		if (chance == 0) {
			printf("\n���� %d �Դϴ�!, �����ϼ̽��ϴ�. \n", result);
			break;
		}
	
	}

	return 0;
}
#include <stdio.h>

int main(void)

{
	int floor = 0;
	char command = 0;
	
	while (1) {

		printf("������ �Է����ּ���. (Ȧ��) : ");
		scanf_s("%d", &floor, sizeof(floor));

		if (floor % 2 == 0)  {

			printf("������ Ȧ���̾�� �մϴ�, �Է��� �� %d\n", floor);

		}
		else if (floor < 5)  {

			printf("������ 5�̻��̾�� �մϴ�, �Է��� �� %d\n", floor);

		}
		else {
			for (int i = 1; i <= floor; i++) {

				for (int j = 1; j <= i; j++) {
					printf("*");
				}
				
				printf("\n");
			}

			for (int i = 1; i <= floor; i++) {

				for (int j = 1; j <= floor - i; j++) {
					printf(" ");

				}
				for (int c = 1; c <= i; c++) {
					printf("*");
				}

				printf("\n");
			}

			for (int i = 1; i <= floor; i++) {

				for (int j = 1; j <= floor - i; j++) {
					printf(" ");

				}

				for (int c = 1; c <= i; c++) {
					printf("*");
				}

				for (int a = 2; a <= i; a++) {
					printf("*");//1�������� 2 <=1 �̶� �н��ϰ� 2������ 2=2 �̴ϱ� �� �� *��� �Ȱ�
				}

				for (int b = 1; b <= floor - i; b++) {
					printf(" ");
				}

				printf("\n");

			}

					for (int i = 1; i <= floor; i++) {

						for (int j = 1; j <= floor - i; j++) {
							printf(" ");

						}

						for (int k = 0; k < i * 2 - 1; k++) {
							printf("*");
						}

						printf("\n"); // ���� int i = 0 �� �����Ѵ�

					}
			
			printf("�Ƕ�̵带 �ٽ� �׸��ðڽ��ϱ�? (Y / N)");
			scanf_s(" %c", &command, sizeof(command));
			
			// ���� ���� %c
			if (command == 'N')break;
		}

	}
	
	/*
	* 
	for (int k = 1; k < i * 2 + 1; k++) {
					printf("*");
				}
				
				*/

/*
	printf("������ �Է����ּ���. (Ȧ��) : ");
	scanf_s("%d", &input, sizeof(input));

	switch (input) {
	case 1:
		goto ONE;
		break;
	case 2:
		goto TWO;
		break;
	default:
		goto EXIT;
	}

ONE:
	printf("1�Դϴ�.\n");
	goto EXIT;

TWO:
	printf("2�Դϴ�.\n");
	goto EXIT;

EXIT:
	printf("Exit");

	*/
	
	/*printf("������ �Է����ּ���. (Ȧ��) : ");
	scanf_s("%d", &input, sizeof(input));
	if (input % 2 == 0) {

		printf("������ Ȧ���̾�� �մϴ�, �Է��� �� %d\n", input);
		
		printf("������ �Է����ּ���. (Ȧ��) : ");
		
		scanf_s("%d", &input, sizeof(input));
	}
	else if (input < 5) {

		printf("������ 5�̻��̾�� �մϴ�, �Է��� �� %d\n", input);
		
		printf("������ �Է����ּ���. (Ȧ��) : ");
		
		scanf_s("%d", &input, sizeof(input));
	}
	*/
	
	return 0;

}






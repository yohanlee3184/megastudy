#include <stdio.h>

int main(void)

{
	int floor = 0;
	char command = 0;
	
	while (1) {

		printf("층수를 입력해주세요. (홀수) : ");
		scanf_s("%d", &floor, sizeof(floor));

		if (floor % 2 == 0)  {

			printf("층수는 홀수이어야 합니다, 입력한 수 %d\n", floor);

		}
		else if (floor < 5)  {

			printf("층수는 5이상이어야 합니다, 입력한 수 %d\n", floor);

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
					printf("*");//1층에서는 2 <=1 이라서 패스하고 2층부터 2=2 이니까 한 번 *찍게 된것
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

						printf("\n"); // 보통 int i = 0 로 시작한다

					}
			
			printf("피라미드를 다시 그리시겠습니까? (Y / N)");
			scanf_s(" %c", &command, sizeof(command));
			
			// 엔터 포함 %c
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
	printf("층수를 입력해주세요. (홀수) : ");
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
	printf("1입니다.\n");
	goto EXIT;

TWO:
	printf("2입니다.\n");
	goto EXIT;

EXIT:
	printf("Exit");

	*/
	
	/*printf("층수를 입력해주세요. (홀수) : ");
	scanf_s("%d", &input, sizeof(input));
	if (input % 2 == 0) {

		printf("층수는 홀수이어야 합니다, 입력한 수 %d\n", input);
		
		printf("층수를 입력해주세요. (홀수) : ");
		
		scanf_s("%d", &input, sizeof(input));
	}
	else if (input < 5) {

		printf("층수는 5이상이어야 합니다, 입력한 수 %d\n", input);
		
		printf("층수를 입력해주세요. (홀수) : ");
		
		scanf_s("%d", &input, sizeof(input));
	}
	*/
	
	return 0;

}






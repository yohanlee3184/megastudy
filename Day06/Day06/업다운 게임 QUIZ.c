//--- MS C에서만 사용 ---------------
#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif 
//--------------------------------
#include<stdio.h>

int main_auiz1(void) {
	srand(time(NULL)); // -- 랜덤값 초기화
	int result = rand() % 100 + 1;// 랜덤값 생성하기 (1 ~ 100)
		int chance = 10; // 10번내에 맞춰라
	int answer = 0; // 사용자가 입력하는 값

	
	while (1) {

		chance--;
		printf("숫자를 맞춰봐라 : ");
		scanf("%d", &answer);

		//정답을 맞춘 경우
		if (result == answer) {
			printf("정답을 맞췄습니다.");
			break;
		}

		else if (answer < result) {

			printf("\nup!\n\n");
			printf("%d 번의 기회가 남았습니다. \n\n", chance);


		}
		else if (answer > result) {

				printf("\ndown!\n\n");
				printf("%d 번의 기회가 남았습니다. \n\n", chance);
				

		}

		//chance (기회)를 다 쓴 경우 break;
		if (chance == 0) {
			printf("\n답은 %d 입니다!, 실패하셨습니다. \n", result);
			break;
		}
	
	}

	return 0;
}
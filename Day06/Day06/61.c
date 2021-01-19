#include <stdio.h>

int main_02(void)

{

	int num = 0;
	printf("숫자를 입력하세요. : ");
	scanf_s("%d", &num);

	if (num % 2 == 0) {//num % 2 를 가지고 0과 1 구분-> 연산 1회 생략 가능, 가독성은 떨어짐
		
		printf("%d는 짝수입니다.\n\n", num);

	}
	else {
		
		printf("%d는 홀수입니다.\n\n", num);

	}
	return 0;
}






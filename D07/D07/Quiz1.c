#include <stdio.h>
int main_03 (void)

{ 
	int max = 0;
	int sum = 0;

	printf("최댓값을 입력해주시오. : ");
	scanf_s("%d", &max, sizeof(max));

	for (int i = 1; i<=max   ; i++)

	{
		printf("%d ", i);
	
	}

	printf("\n");

	for (int i = max; i>=1; i--)
	{
		printf("%d ", i);	
	}
	
	
	for (int i = 1; i <= max; i++){
	
		if (i % 2 == 1) {
			
			sum = sum + i;
			}
		}
	printf("\n");

	printf("1부터 %d까지의 숫자들의 합은 %d입니다.", max, sum);
	

	return 0;

}
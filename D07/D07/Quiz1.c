#include <stdio.h>
int main_03 (void)

{ 
	int max = 0;
	int sum = 0;

	printf("�ִ��� �Է����ֽÿ�. : ");
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

	printf("1���� %d������ ���ڵ��� ���� %d�Դϴ�.", max, sum);
	

	return 0;

}
#include <stdio.h>

int main_01(void)

{
	printf("\n=======������=======\n");
	for (int x = 1; x <= 9; x++) 
	{
		
		for (int y = 1; y <= 9; y++) {

			printf(" %d x %d=%d\t ", x, y, x * y);
		}

		printf("\n");
	}
	return 0;
}
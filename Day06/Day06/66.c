#include <stdio.h>

//while, for, do while
//while ( ���� ) { ���౸�� }
//for (�Ҵ� ; ����; ����) { ���౸�� }
// do { ���� ���� } while ( ���� );

int main_07(void)
{
/*
{
	int i = 0;

	while (i < 10) {
		printf("i=%d\n", i);
		
		i++;
	}

	printf("\n\n");
	// i ==10

	i = 0;

	// do while �� ����
	do {
		printf("i=%d\n", i);
		i++;

	} while (i < 10);

	//for �� ����
	
	printf("\n\n");
	//    1       2      4
	for (i = 0; i < 10; i++)
	{
		//    3
		printf("i=%d\n", i);
		
	
	}
	//���� ����
	int b = 0;
	for (; ;) {
		if (b >= 10)break;
		printf("b=%d");
		b++;
		
	}
	*/

int i = 0;

for (; i <= 100; i++) {

	printf("i=%d\n", i);
	if (i == 51) break;

}
//continue
for (i = 0; i <= 100; i++) {

	if (i >= 30 && i <= 50) continue;
	printf("i=%d\n", i); 
}

printf("i�� �������� %d �Դϴ�. \n", i);

	return 0;
}
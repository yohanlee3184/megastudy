#include <stdio.h>

int main(void)
{
	// a+b
	//a+=b a+=1;
	//== --

	int a = 10;


	printf("%d\n", ++a); // 11 ����� �س��� ����� ���� ���� ��
	printf("%d\n", a++); // 11
	printf("%d\n", a); // 12

	/*
	a++; // a=a+1 (11) +=
	++a; // a=a+1 (12) +=
	--a; // a= a-1 (11)-=
	a--; // a=a-1 (10) -=
	*/



	return 0;
}

//0 1 00 01 11 000 001 011 101 
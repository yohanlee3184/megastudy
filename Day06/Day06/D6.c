#include <stdio.h>

/*���� ���
* if ~ else (if else if)
* 
* switch

���ǽ� �̶�� ���� ��� ���� true , faule (1,0)

if (���ǽ�/condition) {
//���� �� ���� �ȴ�

}else {
//���� �ƴҶ� ����

}



if (���ǽ�a){
//a��

} else if (���ǽ�b){
//b��

}else if(���ǽĤ�){
//c��

}...else {
// ���ǽ� ���� ����

}


*/

int main_01(void)

{

	char num1 = 10, num2 = 9;


	//!(true) = faule;
	
	if (!(num1 < num2))
	{

		printf("%d�� %d���� Ů�ϴ�.", num1, num2);
	}
		
	else {
		printf("%d�� %d���� �۽��ϴ�.", num1, num2);
	}
		
	










	return 0;
}
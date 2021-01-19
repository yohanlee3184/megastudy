#include <stdio.h>

/*조건 제어문
* if ~ else (if else if)
* 
* switch

조건식 이라는 것은 결과 값이 true , faule (1,0)

if (조건식/condition) {
//참일 때 실행 된다

}else {
//참이 아닐때 실행

}



if (조건식a){
//a참

} else if (조건식b){
//b참

}else if(조건식ㅊ){
//c참

}...else {
// 조건식 전부 거짓

}


*/

int main_01(void)

{

	char num1 = 10, num2 = 9;


	//!(true) = faule;
	
	if (!(num1 < num2))
	{

		printf("%d는 %d보다 큽니다.", num1, num2);
	}
		
	else {
		printf("%d는 %d보다 작습니다.", num1, num2);
	}
		
	










	return 0;
}
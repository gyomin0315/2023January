// elseif.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int num;
	printf("정수를 입력하시오 :");
	scanf("%d", &num);

	if (num < 0) printf("음수입니다.");
	else if (num > 0) printf("양수입니다.");
	else printf("0입니다.");

	return 0;

}
*/
//출력 결과
/*
정수를 입력하시오 :10
양수입니다.
*/
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int num;

	printf("정수를 입력하시오:");

	scanf("%d", &num);

	if (num) printf("참입니다."); // if(num)처럼 if문을 사용할 수 도 있음 ! if 문 안에 들어가는 조건문은 0이라면 거짓, 나머지 숫자는 모두 참임 .
	else printf("거짓입니다.");

	return 0;
}
*/
// 출력 결과
/*
정수를 입력하시오:0
거짓입니다.
*/

// calculator.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	double x1, x2;
	char op;
	double result = 0;

	printf("식을 입력하시오:");
	scanf("%lf %c %lf", &x1, &op, &x2);

	if (op == '+') result = x1 + x2;
	else if (op == '-') result = x1 - x2;
	else if (op == '*') result = x1 * x2;
	else if (op == '/') result = x1 / x2;
	else 
	{
		printf("식을 잘못 입력하였습니다.");
		return 1; // return 0이 아닌 다른값 이면 프로그램의 비정상적인 종료를 의미 !
	}
	printf("%lf %c %lf = %lf", x1, op, x2, result);

	return 0;


}
*/
// 출력 결과
/*
식을 입력하시오:13.1 * 6.7
13.100000 * 6.700000 = 87.770000
*/
/*
위 프로그램에서 나눗셈을 할때, x2가 0이 되면 inf가 나와버림. 그래서 else if 안의 조건문을
else if(op == '/' && x2!=0)와 같이 바꿔주면 훨씬 프로그램이 완성도 있음. 
*/

// menu.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int menu;

	printf("1. 파일 열기\n");
	printf("2. 파일 편집\n");
	printf("3. 파일 저장\n");
	printf("선택 :");

	scanf("%d", & menu);

	switch (menu) // switch 문 : 괄호 안의 menu를 받아서, 그 menu에 맞춰서 case문을 실행함.
	{
	case 1:
		printf("파일 열기 메뉴를 선택하셨습니다.");
		break; // case문 끝나고 반드시 break; 해줘야함. break;안하게 되면, switch 안을 못빠져나가고 밑에 있는 case 다 실행해버림. 

	case 2:
		printf("파일 편집 메뉴를 선택하셨습니다.");
		break;
	case 3:
		printf("파일 저장 메뉴를 선택하셨습니다.");
		break;
	default :                             // default문은 써도 되고 안써도 되고 menu가 1,2,3 다 아닐때 default 실행.
		printf("잘못 입력하셨습니다.");
		break;


	}


	return 0;


}
*/
//출력 결과
/*
1. 파일 열기
2. 파일 편집
3. 파일 저장
선택 :2
파일 편집 메뉴를 선택하셨습니다.
*/

// switch.c 2


#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	char menu;
	printf("1. 파일 열기\n");
	printf("2. 파일 편집\n");
	printf("3. 파일 닫기\n");
	printf("선택 :");

	scanf("%c", &menu);

	switch (menu)
	{
	case '1': // menu가 char형이니까 case 1: 이 아닌, case '1': 이 되야함. 
		printf("파일 열기 메뉴를 선택하셨습니다.");
		break;
	case '2':
		printf("파일 편집 메뉴를 선택하셨습니다.");
		break;
	case '3':
		printf("파일 닫기 메뉴를 선택하셨습니다.");
		break;
	default :
		printf("잘못 선택하셨습니다.");
		break;


	}
	return 0;


}
//출력 결과
/*
1. 파일 열기
2. 파일 편집
3. 파일 닫기
선택 :2
파일 편집 메뉴를 선택하셨습니다.
*/


/*
switch ()안에는 정수형, 문자형 이렇게만 들어갈 수 있음.실수형 못들어감 !
case 쓸때 case 쓴 후 꼭 공백을 하나 주고 써야함.case1 이러면 안됨.
default는 꼭 써줘야하는건 아님.But, 온다면 문장의 맨 끝에 와야한다.
case 가 끝날때는, 아래있는 case를 차례로 전부 실행시키고 싶은게 아니라면, case문 마다 break; 써줘야함.
default는 break; 써줘도 되고 안 써줘도 무방.
*/
















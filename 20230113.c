/*
#include <stdio.h>

int main(void)
{
	char c;
	int i;
	float f;
	double d;

	c = 'A';
	i = 10;
	f = 3.14;
	d = 3.14;

	printf("%c %d %.2f %.3lf", c, i, f, d); // %lf를 써주는 경우는 scanf에서 double형일때만 무조건 쓰는거고, printf에서는 그냥 %f만 써줘도 무방.


	return 0;

}
*/
//출력 결과
/*
A 10 3.14 3.140
*/
/*
[변수명 작성법]
변수의 이름은 항상 영문자, 숫자, _를 사용해야함. 첫 글자로는 반드시 숫자가 아닌 영문자, _ 가 와야함.
즉, 첫글자로는 숫자 사용할 수 없다.
C언어는 ASCII 코드 사용하기 때문에, 한글 사용도 안됨.
_를 첫번째로 사용하는건, 시스템 변수에서 주로 그렇게 쓰기 때문에 지양하는 것이 좋음.
또, 대문자 영어는 주로 상수를 표현할때 사용된다.
결과적으로, 변수명은 소문자 영어로 시작하는게 베스트.
*/

// sizeof.c
/*
#include <stdio.h>
int main(void)
{
	printf("자료형 char 의 크기:%d\n", sizeof (char));
	printf("자료형 short 의 크기:%d\n", sizeof(short));
	printf("자료형 int의 크기:%d\n", sizeof(int));
	printf("자료형 long의 크기:%d\n", sizeof(long));
	printf("자료형 float의 크기:%d\n", sizeof(float));
	printf("자료형 double의 크기:%d\n", sizeof(double));
	return 0;

}
*/
// 출력 결과
/*
자료형 char 의 크기:1
자료형 short 의 크기:2
자료형 int의 크기:4
자료형 long의 크기:4
자료형 float의 크기:4
자료형 double의 크기:8
*/
// 각각 byte단위.
/*
[sizeof 연산자]

- sizeof 변수명 / sizeof(변수명) / sizeof(자료형)

- sizeof 자료형 형태는 안됨.

=> 변수 또는 해당 자료형이 메모리상에서 몇 바이트를 차지하는지 확인 할 수 있음.

sizeof는 연산자지 절대 함수가 아님 !
*/
/*
#include <stdio.h>
int main(void)
{
	short x = -7;
	unsigned short y = 65529; // unsigned를 붙여주게 되면 양수만 취급하겠다는 뜻.

	printf("x=%5d, %08x\n", x, x); // short형 변수는 출력 시 4byte로 변환된다. 컴퓨터가 정수는 4byte, 실수는 8byte로 출력하려고 함. 그 결과, short도 출력시 4byte로 나옴.

	printf("y=%5d, %08x\n", y, y);

	return 0;


}
*/
// 출력 결과
/*
* x=   -7, fffffff9
y=65529, 0000fff9

*/

/*

컴퓨터에서 data를 처리하는 기본 단위는 byte임. 그래서 +7 표현 할때도 111(2) 가 아닌 00000111(2) 로 표현하는게 가장 좋음.
음의 정수는 2의 보수 표현 방식 사용. 이진수를 봤을 때,MSB가 0이면 양수, 1이면 음수라고 판단.
8진수 표현에서는 3bit씩 자르되, 3으로 나누어 떨어지지 않으면 가장 bit의 자릿수가 큰곳 맨 앞에 음수라면 1을, 양수라면 0을 붙임.

데이터형 크기 유효 범위
char 1byte : -128~127
short 2byte : -32768~32767
int 4byte : -2147483648 ~ 2147483647
unsigned 는 양쪽 범위의 숫자 2개 더하면 됨.

1의 보수나 부호화 크기 표현 방식을 쓰지 않는 이유는, 절댓값이 같고, 부호가 다른 두 수를 더해도 0이 나오지 않고, 0을 표현하는 가짓수가 2개가 되기 때문.

*/
/*
#include <stdio.h>
int main(void)
{
	char n = 128; // 표현 가능한 범위 넘어섰음.
	unsigned char red = 300; // 표현 가능한 범위 넘어섰음.

	printf("n = %d\n", n);
	printf("red = %d\n", red);

	return 0;

}
*/
//출력 결과
/*
* n = -128
red = 44

*/
// n같은 경우, MSB가 1이니까 음수인 줄 알고, -1하고 0과 1 서로 바꿔줬더니, 1000 0000이 되서 -128됨.
// red같은 경우, 300 -> 0001 0010 1100이 되는데, 1byte니까 0010 1100만 남음.

// 현재 문자를 입력받아서 ASCII 코드로 현재 기준 전의 문자, 후의 문자 출력.
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char c;
	printf("문자를 입력하시오 :");
	scanf("%c", &c);

	char prev_c = c - 1;
	char next_c = c + 1;

	printf("prev_c = %c, %d\n", prev_c, prev_c);
	printf("c = %c, %d\n", c, c);
	printf("next_c = %c, %d\n", next_c, next_c);

	return 0;
}
*/
//출력 결과
/*
문자를 입력하시오 :b
prev_c = a, 97
c = b, 98
next_c = c, 99
*/
/*
#include <stdio.h>
int main(void)
{
	float rate1 = 9.876543210987654;
	double rate2 = 9.876543210987654;

	printf("float rate1 = %.15f\n", rate1);
	printf("double rate2 = %.15lf\n", rate2);

	return 0;

}
*/
//출력 결과
/*
float rate1 = 9.876543045043945
double rate2 = 9.876543210987654
*/

/*
위 프로그램(및 출력 결과)에서 참값, 근사값, 오차는 ?

- rate1: 참값: 9.876543210987654, 근삿값 : 9.876543045043945, 오차 : 0.000000165943709

- rate2 : 참값 : 9.876543210987654, 근삿값 : 9.876543210987654, 오차 : 0

float 4byte 보다 double 8byte를 썼을 때 더 정확하다는 것 알 수 있음.
*/
/*
#include <stdio.h>
int main(void)
{
	printf("sizeof(\'x\') = %d\n", sizeof('x'));
	printf("sizeof(0.25F) = %d\n", sizeof(0.25F));
	printf("sizeof(.5) = %d\n", sizeof(.5));
	printf("sizeof(\"x\")=%d", sizeof("xbcd"));

	return 0;
}
*/
//출력 결과
/*
sizeof('x') = 4
sizeof(0.25F) = 4
sizeof(.5) = 8
sizeof("x")=2
*/
/*
sizeof('x')는 x가 char형이라는 선언이 없었다면, 컴퓨터는 이걸 ASCII 코드로 인식해서 4byte 정수형 인걸로 처리함.
sizeof(0.25F)는 0.25가 4byte float형이라는 의미로 F를 붙여줌. 그래서 4byte.
sizeof(.5)는 컴퓨터 기본적으로 소수는 8byte double형이라고 생각한다고 했음. 그래서 8byte 나옴.
sizeof("x")에서 x는 문자열임. 기본 문자 x 1byte에 NULL 문자 1byte 합쳐져서 총 2byte 나옴.
sizeof("xabc")를 보게되면 문자가 총 4개라 4byte, NULL문자 1byte 합쳐져서 총 5byte 나오는거 확인 할 수 있음.
*/

// 임금 계산기

#define _CRT_SECURE_NO_WARNINGS     // scanf 사용을 위해서 필요

#include <stdio.h>
#define HOURLY_WAGE 8350

int main(void)
{
	int working_hours,wage;

	printf("몇시간 일했나요?");
	scanf("%d", &working_hours);

	wage = HOURLY_WAGE * working_hours;

	printf("시간당 급여 : %6d\n", HOURLY_WAGE);

	printf("총 급여 : %6d", wage);

	return 0;


}
//출력 결과
/*
몇시간 일했나요?10
시간당 급여 :   8350
총 급여 :  83500
*/
/*
#include<stdio.h>
int main(void)
{
	int a; // 정수형 4 byte짜리 메모리를 잡고 a라는 이름으로 선언해준다.
	float b; // 실수형 4byte짜리 메모리를 잡고 b라는 이름으로 선언해준다.
	char c; // 문자형 1byte짜리 메모리를 잡고 c라는 이름으로 선언해준다.
	// 컴파일을 하라고 버튼을 누를때 메모리를 잡는다. 처음에는 쓰레기값이 있고, 값이 할당이 되면 할당된 수가 쓰레기값을 치우고 들어간다.
	double d; // 실수형 8byte. 똑같은 값을 넣어도 float보다 정밀도가 높고, 메모리 더 잡아먹음.


	// a,b,c값 선언
	a = 10;
	b = 4.13;
	c = 'A';
	d = 4.13;

	printf("%d %x %X\n", a, a, a); // a를 10진수, 16진수(각 소문자, 대문자)로 print
	printf("%f %e %.1f %.9f %10.3f\n", b, b, b, b, b); // b를 부동소수점, 지수 표기로 print. 이때 기본 소수점 이하 6자리까지 출력. 나머지는 소수점 첫번째, 9번째까지 표기, 마지막은 10칸 잡고 소수점 3번째까지 표기.
	printf("%c %d\n", c, c); // c를 문자로 출력, ASCII 코드로 출력.
	printf("%.9f", d);

	return 0;

}
*/
//출력 결과
/*
10 a A
4.130000 4.130000e+00 4.1 4.130000114      4.130
A 65
4.130000000
*/

// float형으로 선언한 b는 소수점 9번째자리 까지 봤을때 오차가 있지만, double형으로 선언한 d는 오차가 없음. 
/*
기본 자료형(Data Type)
void : 값이 없음
char : 문자형 / 1byte
int : 정수형 / 2 or 4 byte
float : 실수형 / 4byte
double : 실수형 / 8byte


[문자 코드]
-ASCII 코드 : C언어 에서 사용. 영어대소문자, 아라비아숫자, 특수기호 등에 대한 약속 / 7bit로 표현(128개 문자에 대한 약속이 가능.) 그래서 한글을 변수명으로 사용할 수 없음.
-UNI 코드 : Python, Java에서 사용. ASCII 코드를 포함. 모든 나라에서 사용하는 문자들에 대한 약속. 16bit로 표현(65536개 문자에 대한 약속이 가능하다.) cf.한글이 제일 portion 많음.

ASCII 코드는
A : 65   / a : 97  / 0 : 48
*/
/*
#include <stdio.h>
int main(void)
{
	printf("%d %d %d %d", 'A', 'a', '0', 0); // A , a , 문자 0, 숫자 0 의 ASCII 코드.
	return 0;
}
*/
// 출력 결과
/*
65 97 48 0
*/
/*
#include <stdio.h>
int main(void)
{
	int a = 987;
	float b = 34.5;

	printf("%d\n", a);
	printf("%5d\n", a); // 5칸을 잡고, 잡는 순간 오른쪽 정렬
	printf("%-5d\n", a); // 왼쪽 정렬 하려면 -붙임. 
	printf("%f\n", b); // 기본 소수점 6번째자리까지 표현 
	printf("%.2f\n", b); // 소수점 2번째 자리까지 표현
	printf("%6.2f\n", b); // 6칸 잡고, 소수점 2번째 자리까지 표현. 자리 잡았으면 기본 오른쪽 정렬
	
	return 0;
}
*/
// 출력 결과
/*
987
  987
987
34.500000
34.50
 34.50
 */
/*
#define _CRT_SECURE_NO_WARNINGS // scanf 관련 컴파일 에러를 무시하기 위한 문장
#include <stdio.h>
int main(void)
{
	int age; // 나이를 저장하기 위한 int 자료형 변수 age
	float height; // 키를 저장하기 위한 float 자료형 변수 height
	float weight; // 몸무게를 저장하기 위한 float형 자료형 변수 weight

	printf("나이, 키, 몸무게를 순서대로 쓰시오.");
	scanf("%d %f %f", &age, &height, &weight); // 3개의 변수에 순서대로 들어간다. 
	// scanf 써줄때 뒤에는 반드시 주소를 의미하는 & 들어가야함. 그래야 scanf로 읽어들여서 그 주소에 집어넣을 수 있음.
	// &는 뒤의 변수의 주솟값을 의미 !
	printf("나이  : %5d\n", age);
	printf("키  : %5.1f\n", height);
	printf("몸무게  : %5.1f\n", weight);

	printf("%p %p %p", &age, &height, &weight);

	return 0;


}
*/
//출력 결과
/*
나이, 키, 몸무게를 순서대로 쓰시오.26 170 69
나이  :    26
키  : 170.0
몸무게  :  69.0
000000BEC87BFB74 000000BEC87BFB94 000000BEC87BFBB4
*/

//문제)
// 1. 국어, 영어, 수학 점수(정수,float형, double형)를 입력 받은 후 총점과 평균을 출력하는 프로그램을 작성.
// 2. 변의 길이를 입력받은 후, 정사각형, 사다리꼴, 원의 둘레 및 면적 구하는 프로그램 작성.

// 1-1
/*
#define _CRT_SECURE_NO_WARNINGS // scanf 관련 컴파일 에러를 무시하기 위한 문장
#include <stdio.h>

int main(void)
{
	int korean, math, english;
	float average;

	

	printf("국어, 수학, 영어 점수를 입력하시오 : ");
	scanf("%d%d%d", &korean, &math, &english);

	average = (korean + math + english) / 3;

	printf("총점 : %d\n", korean + math + english);
	printf("평균 : %.1f\n", average);

	return 0;
	
	
}
*/
// 출력 결과
/*
국어, 수학, 영어 점수를 입력하시오 : 43 37 81
총점 : 161
평균 : 53.0
*/

// 1-2
/*
#define _CRT_SECURE_NO_WARNINGS // scanf 관련 컴파일 에러를 무시하기 위한 문장
#include <stdio.h>

int main(void)
{
	float korean, math, english;
	float average;

	printf("국어, 수학, 영어 점수를 입력하시오 : ");
	scanf("%f%f%f", &korean, &math, &english);

	average = (korean + math + english) / 3;

	printf("총점 : %f\n", korean + math + english);
	printf("평균 : %.1f\n", average);

	return 0;


}
*/
// 출력 결과
/*
국어, 수학, 영어 점수를 입력하시오 : 10.5 70.8 80.4
총점 : 161.700012
평균 : 53.9
*/

// 1-3
/*
#define _CRT_SECURE_NO_WARNINGS // scanf 관련 컴파일 에러를 무시하기 위한 문장
#include <stdio.h>

int main(void)
{
	double korean, math, english;
	double average;

	printf("국어, 수학, 영어 점수를 입력하시오 : ");
	scanf("%lf%lf%lf", &korean, &math, &english); // printf 같은 경우 자료형이 double형일 때 그냥 %lf 대신 %f를 써도 됬지만, scanf는 반드시 자료형이 double 형일 때는 %lf로 써줘야함. 

	average = (korean + math + english) / 3;

	printf("총점 : %f\n", korean + math + english);
	printf("평균 : %.1f\n", average);

	return 0;


}
*/
//출력 결과
/*
국어, 수학, 영어 점수를 입력하시오 : 10.5 70.8 80.4
총점 : 161.700000 // 앞에서 float형을 썼을때는 총점에서 오차가 있었는데, double형 쓰니 사라짐. 
평균 : 53.9
*/

// 2-1
/*
#define _CRT_SECURE_NO_WARNINGS // scanf 관련 컴파일 에러를 무시하기 위한 문장
#include <stdio.h>
int main(void)
{
	float length;
	printf("정사각형의 한 변의 길이를 입력하시오 :");
	scanf("%f", &length);

	printf("정사각형의 둘레의 길이는 : %f", 4 * length);

	return 0;
}
*/
//출력 결과
/*
정사각형의 한 변의 길이를 입력하시오 :10.3
정사각형의 둘레의 길이는 : 41.200001
*/

// 2-2
/*
#define _CRT_SECURE_NO_WARNINGS // scanf 관련 컴파일 에러를 무시하기 위한 문장
#include <stdio.h>

int main(void)
{
	double top, bottom, height;
	printf("윗변, 아랫변, 높이를 순서대로 작성하시오 :");
	scanf("%lf%lf%lf", &top, &bottom, &height);

	double result = (top + bottom) * height / 2;

	printf("사다리꼴의 면적은 : %lf", result);
	return 0;
}
*/
//출력 결과
/*
윗변, 아랫변, 높이를 순서대로 작성하시오 :10.1 9.75 16.8
사다리꼴의 면적은 : 166.740000
*/

// 2-3
#define _CRT_SECURE_NO_WARNINGS // scanf 관련 컴파일 에러를 무시하기 위한 문장
#include <stdio.h>
int main(void)
{
	float PI = 3.14;
	double radius;

	printf("원의 반지름의 길이를 쓰시오 :");
	scanf("%lf", &radius);

	printf("원의 둘레의 길이는 : %.3lf\n", 2 * PI * radius);
	printf("원의 넓이는 : %.3lf", radius * radius * PI);

	return 0;
}
//출력 결과
/*
원의 반지름의 길이를 쓰시오 :0.5
원의 둘레의 길이는 : 3.140
원의 넓이는 : 0.785
*/



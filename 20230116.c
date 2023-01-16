/*
앞에서 double 형 변수에 int형 계산의 결과를 넣는건 double형에 넣기 전에 이미 int형 계산이 됬기 때문에, int형 정수가 double에 들어갔던 거 였음.
*/

// precede.c
/*
#include <stdio.h>

int main(void)
{
	int x = 5, y = 1, z = 15;
	int result;

	result = ++x * 2; // (++x)*2로 계산된다. x는 증가되어 6이 된다. 전위형 증감식은 식에서 가장 먼저 증감됨.
	printf("result = %d\n", result);

	result = x + 1 > 0; // (x+1)>0로 계산된다. 참/거짓 판별 문장이니까 결과값은 0or1
	printf("result = %d\n", result);

	result = x << y; // x<<y를 먼저 계산한 다음, result에 넣어줌. 왼쪽으로 shift니까 곱셈임.
	printf("result = %d\n", result);

	result = (x + y) / 2; // 식 우선순위가 혼동되면 ()로 묶어줄 수 도 있음.
	printf("result = %d\n", result);

	result = x = y; // 대입 연산자는 좌 <--우로 결합되므로, result = (x=y)로 계산.
	printf("result = %d\n", result);
	
	return 0;
}
*/
//출력 결과
/*
result = 12
result = 1
result = 12
result = 3
result = 1
*/

/*
증감 연산자
int a = 5, b;

[참고] 증감연산자

int a = 5, b;

(1) b = a++ + a++; // b의 값은? __10___ a의 값은? __7___ 

(2) b = a++ + ++a; // b의 값은? __12___ a의 값은? __7___ 

(3) b = ++a + a++; // b의 값은? __12___ a의 값은? __7___ 

(4) b = ++a + ++a; // b의 값은? __14___ a의 값은? __7___ 



// ++a에서 ++은 항상 가장먼저 처리해야하는거임. 

가감연산자

(5) b = a-- + a--; // b의 값은? __10___ a의 값은? __3___ 

(6) b = a-- + --a; // b의 값은? __8___ a의 값은? __3___ 

(7) b = --a + a--; // b의 값은? ___8__ a의 값은? __3___ 

(8) b = --a + --a; // b의 값은? __6___ a의 값은? _3_

// 항상 식에서 증감연산자가 있을때, 전위형이라면 식의 계산중 가장 먼저 수행하고, 후위형이라면 가장 나중에 수행한다고 생각하면 됨.

*/
/*

#include <stdio.h>

int main(void)
{
	int a = 5;
	a++; // 이런 식으로 단독으로 사용될때는 a++, ++a가 동일하다.

	printf("%d\n",a++); // printf에서는 a가 후위형이면, a의 원래값을 우선 넣어준 후에, 그 다음에 증감 연산을 수행한다.
	printf("%d\n", ++a); // 여기서는 a가 전위형. 우선 a를 증가시킨 후에 그 증가된 값을 출력.
	printf("%d", a);

	return 0;
}
*/
//출력 결과
/*
6
8
8
*/

/*

피연산자의 형 변환
단순히 int형 계산을 하고 double형 변수에 넣어보는게 아니라, int형과 double형의 계산을 같이한다면 어떻게 될까 ?
0.35 * 정수형이 있을떄, 0.35는 실수형임.컴퓨터에서 실수형은 기본적으로 double로 처리.
실수는 8byte고, 정수형은 4byte.이렇게는 계산 못해서, 정수형을 double형으로 만듬.

형 변환에는 2가지 종류 있음.
1. 암시적인 형 변환
산술 연산에서 암시적인 형 변환이 일어나는 상황

i).피연산자중 하나가 double형이면, 나머지를 double로 자동 형 변환한다.
하나가 double형이면, 연산할때 나머지도 8byte로 바뀜.서로 동일해야 어떤 연산이라도 처리 가능.
ii) float와 정수형을 연산하면 정수형을 float로 형 변환한다.
둘다 똑같은 4byte지만, 안의 이진수의 원리가 서로 다름.같은 4byte지만, 실수가 더 정밀도 높아서 정수가 실수형으로 바뀜.
iii) char나 short는 연산 시 int형으로 변환한다. (정수의 승격)
둘다 연산시에는 자동으로 4byte 정수형으로 승격시킴.

2. 명시적인 형 변환
- 수식 앞에()를 쓰고, 안에 데이터형을 써준다.
ex) (double) 0;  (int)(income* tax);  (double)(x + y) / 2;

*/

// if.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int score;
	printf("점수를 입력하시오:");
	scanf("%d", &score);

	if (score < 70) printf("재시험!\n");

	printf("다음에 봅시다.");
	return 0;

}
*/
//출력 결과
/*
점수를 입력하시오:60
재시험!
다음에 봅시다.
*/

// if문의 괄호 안에는 반드시 참/거짓을 판별할 수 있는 문장이 들어가야함. 또, if문 뒤에는 세미콜론 없음.
// 또, if문은 else문 없이 혼자 쓰일 수 있음.
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int num, abs;

	printf("정수를 입력하시오:");
	scanf("%d", &num);

	if (num < 0)
	{
		abs = -num;
	}
	else
	{
		abs = num;
	}

	printf("%d의 절댓값 : %d",num, abs);

	return 0;

}
//출력 결과
/*
정수를 입력하시오:-30
-30의 절댓값 : 30
*/

// if문 쓸 때, 만약 if문 안에 문장이 한줄밖에 없다면, {}없이 그냥 옆에 쓰거나 밑줄에 써도 괜찮은데,
// 만약 if문 안에 문장이 여러개가 있다면, 반드시 {}를 써줘야함 !

















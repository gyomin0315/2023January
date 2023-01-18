// for.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int i, num;

	for (i = 0; i < 5; i++)
	{
		printf("%d", i);
	}
	printf("\n");

	// for문에서 i=0로 초기화(1번) -> i가 5보다 작은지 아닌지 봄 -> 작다면 for문 안쪽을 실행, 크다면 for문 빠져나옴.(3번) -> i++ 증감식 실행(4번) -> 다시 i가 5보다 작은지 큰지 확인(5번) ...

	printf("정수?");
	scanf("%d", &num);

	for (i = num; i > 0; i--)
	{
		printf("%d", i);

	}
	return 0;

}
*/
//출력 결과
/*
01234
정수?10
10987654321
*/

// for문 가운데 문은 조건문임. 즉. for(i=num;i;i--) 라고 썼어도, 조건문에서 0은 거짓이니까 10 9 8 7 6 5 4 3 2 1 까지 똑같이 나올것임.
// for(초기식 ; 조건식 ; 증감식)
/*
for문 정리

- for (초기식; 조건식; 증감식) 문장; < -문장이 한문장 일때는 대괄호 안써도 괜찮음.
	- for (초기식; 조건식; 증감식) { 문장s } < -문장이 여러개 일때는 반드시 대괄호 써줘야함.
	- for (; ;) 이 형태는 반드시 존재해야 함. < -세미콜론은 반드시 존재해야함.
	- for (;;)->무한 루프
	- for (초기식 여러개 가능(없어도 됨.); 조건식은 반드시 있으면 하나만 있어야 함.(없어도 됨); 증감식은 여러 개 가능(없어도 됨.))
	- 조건식은 반드시 참 / 거짓을 판별할 수 있는 문장이여야 한다.또, 조건식은 쓴다면 반드시 하나만 써야함.나머지는 여러개 가능 !

	- for (가; 나; 다); 라;
	=> 가 -> 나(참)->라->다 -> 나(참) -> 라 -> 다 -> 나(거짓) -> for문 탈출

	*/

// while.c
// 위에 있는 for 문을 while문으로 바꿔보면. 
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int i, num;

	i = 0;
	while (i < 5)
	{
		printf("%d",i);
		i++;
	}
	printf("\n");

	printf("정수?");
	scanf("%d", &num);

	i = num;
	while (i > 0)
	{
		printf("%d", i);
		i--;
	}

	return 0;

}
//출력 결과
*/
/*
01234
정수?10
10987654321
*/

//for문을 while문으로 바꿀때, 보통 for문 안의 초기식은 while문 바로 위에 써주고, 조건식은 while()괄호 안에, 증감식은 while의 가장 나중에 써줌.

// sum.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int num;
	int sum = 0;
	int i;

	printf("정수 5개를 입력하시오:");

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num);
		sum += num;

		
	}
	printf("전체 합은 : %d", sum);

	return 0;

}
*/
// 출력 결과
/*
정수 5개를 입력하시오:10 20 30 40 50
전체 합은 : 150
*/

// sum_while.c
// 위의 프로그램 while 문으로 바꾸면?
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int num;
	int sum = 0; // sum은 반드시 초기화 행줘야함. sum += num 맨처음에 할때, sum이라는 4byte 기억장소 안에는 쓰레기값 있는데, 이 쓰레기값이랑 num이랑 더해줄 수가 없음. 오류 남.


	printf("정수 5개 입력하시오 :");

	int i = 0;
	while (i < 5)
	{
		scanf("%d", &num);
		sum += num;
		i++;
	}
	printf("총합은 : %d", sum);
	return 0;
}
// 출력 결과
/*
정수 5개 입력하시오 :10 20 30 40 50
총합은 : 150
*/








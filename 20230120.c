// for( ; ; ) 와 while(1)은 무한루프를 뜻한다. 

// calculator.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	double x,y;
	char op;
	double result = 0;
	char yesno = 'Y'; // 계속 계산을 할지 나타내는 변수. 반드시 'Y'로 초기화 해야한다.

	while (yesno == 'Y' || yesno == 'y')
	{
		printf("수식?");
		scanf("%lf%c%lf", &x, &op, &y);

		if (op == '+')
			result = x + y;
		else if (op == '-')
			result = x - y;
		else if (op == '*')
			result = x * y;
		else if (op == '/')
			result = x / y;
		
		//else if (op == '%%')
		//	result = x % y;
		 
		// 나머지 연산은 실수에서는 사용할 수 없고, 반드시 데이터형이 정수여야함 ! 

		else
		{
			printf("식을 잘못 입력했습니다.");
			return 1;
		}
		printf("%lf %c %lf = %lf\n", x, op, y, result);

		printf("계속 하시겠습니까? (Y/N):");
		scanf(" %c", &yesno); // 2번째로 scanf받는거니까 반드시 %c앞에 공백 넣어줘야함 !!!

	}
	
	return 0;

}
*/
//출력 결과
/*
수식?10+20
10.000000 + 20.000000 = 30.000000
계속 하시겠습니까? (Y/N):y
수식?10-20
10.000000 - 20.000000 = -10.000000
계속 하시겠습니까? (Y/N):n

*/

//cf.
// scanf(" %c",&yesno); 는 scanf("%*c%c", &yesno); 와 같이 쓸 수도 있음.

// do while.c
/*
#define  _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

int main(void)
{
	int x;

	printf("정수?");
	scanf("%d", &x);

	do
	{
		printf("%d ", x);
		x /= 2;

	} while (x > 0);
	
	return 0;

}
*/
//출력 결과
/*
정수?10
10 5 2 1
*/
/*
do while과 while의 차이점은, while은 조건식을 가장 먼저 보고 조건에 맞지 않는다면, while문을 그대로 빠져나오지만, 
do while은 처음 한번은 무조건 실행하고, 실행 후에 조건식을 본다. 

do while의 마지막 while()에 반드시 세미콜론 써줘야 함 !
*/

// 위 do while문을 while 문으로
/*
#define  _CRT_SECURE_NO_WARNINGS    // Visual Studio 2019에서 scanf 사용 시 필요
#include <stdio.h>

int main(void)
{
	int num;

	printf("정수? :");
	scanf("%d", &num);

	printf("%d ", num); // do while을 while로 바꿀 때, do while은 조건 상관 없이 무조건 첨 한번은 실행하니까 while문 전에 한번 실행해줘야 완전히 같음.

	num /= 2;

	while (num > 0)
	{
		printf("%d ", num);
		num /= 2;
	}

	return 0;


}
*/
//출력 결과
/*
정수 ? : 10
10 5 2 1
*/

// 위 do while문을 for문으로
#define  _CRT_SECURE_NO_WARNINGS    // Visual Studio 2019에서 scanf 사용 시 필요
#include <stdio.h>

int main(void)
{
	int num;
	printf("정수? :");
	scanf("%d", &num);

	printf("%d ", num);
	num /= 2;

	for (; num > 0; num /= 2) // 초기식 안써줬음. 위에서 /2된 num값이 알아서 초기값으로 들어갈 것임.
		printf("%d ", num);

	return 0;

}
//출력 결과
/*
정수? :10
10 5 2 1
*/
//odd_sum.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int num, sum = 0;

	while (1)
	{
		printf("정수?: (음수 입력시 종료.)");
		scanf("%d", &num);

		if (num < 0) break;

		else if (num % 2 == 0) continue;

		else
		{
			sum += num;
		}

	}

	printf("입력 한 수 중 홀수의 총합은 : %d", sum);
	return 0;


}
*/
//출력 결과
/*
정수?: (음수 입력시 종료.)10
정수?: (음수 입력시 종료.)20
정수?: (음수 입력시 종료.)13
정수?: (음수 입력시 종료.)17
정수?: (음수 입력시 종료.)-7
입력 한 수 중 홀수의 총합은 : 30
*/

// goto.c
/*
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 10; i > 0; i--)
	{
		if (i % 7 == 0)
			goto quit;
		printf("%d ", i);
	}

	quit:
		{
			printf("\ni %% 7이 0인 숫자에 다다랐음.");
		}

		return 0;

	


}
*/
// quit할때 세미콜론이 아닌 콜론 쓰는거에 유의
// goto는 잘 안쓰는게 좋음. 결정적일 떄 하나번 쓰는거임. 왜냐하면, 어디론가 보내고나서 아래로 다시 쭉 컴퓨터가 계산해야하기 때문.
// 계속해서 중첩되는 반복문이 있을때, goto를 쓰게되면 한번에 빠져나올 수 있음. break 쓰게 되면 계속 break를 써줘야함.(반복문이 여러번 중첩되어 있으면 break;를 여러번 써야함 !)
/*
[사용자 정의 함수]
- main() 함수 외에 사용자가 정의하는 함수
- 함수명은 변수명 작성법과 동일함.
*/

// hi.c
/*
#include <stdio.h>

void hi(void)
{
	printf("Hi !\n");
}

void bye() // 매개변수가 void라면 생략 가능 !
{
	printf("Bye !\n");

}

int main(void)
{
	hi(); // 이런식으로 사용자 정의 함수를 호출할 수 있음.
	bye();
	hi();
	bye();
	bye();
	return 0;

}
*/
//출력 결과
/*
Hi !
Bye !
Hi !
Bye !
Bye !

*/

/*
컴퓨터 자체가 필요로 하는 함수 (main함수) 가 아니라면 대체로 사용자 정의 함수임.
또, 뒤에 ()가 있으면 거의 다 함수.
컴파일 순서
1. main에서 가장 먼저 시작 ! 맨 위에서 아래로 스캔하면서 컴파일러가 hi, bye함수를 인지.
2. main 안에서 사용자 정의 함수 만나면 다시 위로 올라가서 실행 후, main안의 그 다음줄로 넘어감.
3. 위로 갔다가 아래로 갔다가 하는 식으로, main함수 안에서 사용자 정의 함수를 호출. 
*/

// hi.c (2)
/*
#include <stdio.h>

void hi()
{
	printf("Hi !\n");
}
void bye()
{
	printf("Bye !\n");
}

int main(void)
{
	printf("%d %d\n", hi, bye); // 사용자 정의 함수 hi, bye의 주소를 10진수로
	printf("%u %u\n", hi, bye); 
	printf("%p %p\n", hi, bye);
	hi();
	bye();
	hi();
	bye();
	hi();
	return 0;


}
*/
// 출력 결과
/*
-564784187 -564784182
3730183109 3730183114
00007FF7DE5613C5 00007FF7DE5613CA
Hi !
Bye !
Hi !
Bye !
Hi !
*/

// hi.c (3)
#include <stdio.h>

void hi(void); // 함수 원형 부분.
void bye(void); 

int main(void)
{
	hi();
	bye();
	hi();
	bye();
	return 0;


}

void hi(void)
{
	printf("HI !\n");
}
void bye(void)
{
	printf("Bye !\n");
}
// 출력 결과
/*
HI !
Bye !
HI !
Bye !

*/

/*
함수 원형 부분 추가.
컴파일러는 위에서 아래로 쭉 스캔하는 식으로 처리하기 때문에,
먼저 함수 원형 부분을 선언해 주지 않으면, main함수에서 hi()가 뭔지를 몰라서 에러남.
그래서 함수원형으로 먼저 정의를 해주는거임.윗부분은 함수 원형, 아랫부분은 함수 구현이라고 함. 함수 원형이 중요 !
가장 처음에 사용자 정의함수를 먼저 써주는건 C++, JAVA에서 많이 씀. main이 위로 올라오는건 C밖에 없음.
함수 원형에 반드시 세미콜론 있어야함 !
*/


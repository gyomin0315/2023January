// break.c
/*
#include <stdio.h>

int main(void)
{
	for (int i = 10; i > 0; i--) // i>0 이 거짓이 되면 for루프 탈출(루프 탈출 조건 1)
	{
		if (!(i % 7))      // i % 7 = 1 이 되면 break; 실행해서 for루프를 아예 탈출 해버리게 됨. (루프 탈출 조건 1)
			break;
		printf("%d ", i);
	}
	return 0;

}
*/
// 출력 결과
/*
10 9 8
*/

// menu.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int menu;

	while (1) // 무한 루프
	{

		

		printf("0. 종료\n");
		printf("1. 파일 열기\n");
		printf("2. 파일 편집\n");
		printf("3. 파일 저장\n");
		printf("선택:");
		scanf("%d", &menu);

		if (menu == 0)
		{
			printf("종료 !");
			break;
		}

		switch (menu)
		{
		case 1:
			printf("파일 열기 메뉴를 선택하셨습니다.\n");
			break;
		case 2:
			printf("파일 편집 메뉴를 선택하셨습니다.\n");
			break;
		case 3:
			printf("파일 편집 메뉴를 선택하셨습니다.\n");
			break;

		}

	}

	return 0;
}
*/
// 출력 결과
/*
0. 종료
1. 파일 열기
2. 파일 편집
3. 파일 저장
선택:2
파일 편집 메뉴를 선택하셨습니다.
0. 종료
1. 파일 열기
2. 파일 편집
3. 파일 저장
선택:3
파일 편집 메뉴를 선택하셨습니다.
0. 종료
1. 파일 열기
2. 파일 편집
3. 파일 저장
선택:0
종료 !
*/

// continue.c

#include <stdio.h>

int main(void)
{
	int i;

	for (i = 10; i > 0; i--)
	{
		if (!(i % 3))
			continue;
		printf("%d ", i);

	}
	return 0;
}
// 출력 결과
/*
10 8 7 5 4 2 1
*/

// continue 문장을 만나면 for문에서는 증감식 부분으로 이동하고, while문에서는 조건식 부분으로 이동한다. do while도 마찬가지로 조건식 부분을 ㅗ이동
// i % 3이 0 일때 continue 문장을 만나서, 아래있는 printf를 실행하지 않고, 그대로 증감식으로 가는 프로그램임.
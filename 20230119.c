// nested_for.c
/*
#define  _CRT_SECURE_NO_WARNINGS        // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int width, height;
	char ch;
	int i, j;

	printf("직사각형의 폭과 높이?");
	scanf("%d%d", &width, &height);
	printf("문자는?");
	scanf(" %c", &ch); // %c앞에 반드시 공백이 하나 있어야함. 앞에서 직사각형의 폭과 높이를 받고나서 엔터 키 쳤을텐데, 그 엔터키가 문자로써 문자를 scan해야 할 곳으로 들어가버림.
	// 그래서 이 스페이스나 엔터 문자를 무시해라 라는 의미로 %c앞에 공백을 줬음. scanf에서 앞서 문자를 입력 받았으면 반드시 그래야함.
	// scanf에서 빈칸은 공백 문자 무시하라는 의미.


	for (i = 0; i < height; i++)
	{ 
	
		for (j = 0; j < width; j++)
		
			printf("%c", ch);

		printf("\n");
		
	}
	

	return 0;


}
*/
//출력 결과
/*
직사각형의 폭과 높이?10 20
문자는?a
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa

*/

// nested_for.c를 while 문으로 수정.
/*
#define  _CRT_SECURE_NO_WARNINGS        // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int width, height;
	int i, j;
	char ch;

	printf("폭과 높이를 쓰시오 :");
	scanf("%d %d", &width, &height);
	printf("문자는?:");
	scanf(" %c", &ch);

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			printf("%c", ch);
			j++;

		}
		printf("\n");
		i++;
	}



	return 0;

}
//출력 결과
/*
* 직사각형의 폭과 높이?10 20
문자는?a
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa


*/
// i=0, j=0 초기식 위치에 주의 ! 초기식은 웬만하면 while문 바로 위에 써주는게 좋음.

// while.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int i, num;
	printf("정수를 입력하시오 :");
	scanf("%d", &num);

	i = 1;
	while (i < num)
	{
		printf("%d ", i);
		i += 2;
	}

	return 0;

}
*/
//출력 결과
/*
정수를 입력하시오 :10
1 3 5 7 9
*/

// while을 for로

#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int i, num;
	printf("정수를 입력하시오 :");
	scanf("%d", &num);

	for (i = 1; i < num; i += 2)
	{
		printf("%d ", i);

	}

	return 0;
}
//출력 결과
/*
정수를 입력하시오 :10
1 3 5 7 9
*/



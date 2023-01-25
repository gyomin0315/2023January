// max.c
/*
#include <stdio.h>

int get_max(int x, int y, int z)
{
	int max = x > y ? x : y;
	max = max > z ? max : z;

	return max;


}


int main(void)
{
	//get_max(10,20); <- 인자의 개수가 부족하면 컴파일 에러. 프로그램 실행 안됨 !
	//get_max(10,20,30,40) <- 인자의 개수가 너무 많으면 컴파일 경고. 프로그램이 실행은 됨 !

	double max;

	max = get_max(12.34, 0.5, 7.9);
	printf("max = %lf", max);
	return 0;


}
*/
//출력 결과
/*
max = 12.000000
*/

// 12.34가 결과로 나와야하는데, 매개변수가 int형이여서 정수부분만 받음. 인자와 매개변수 자료형 서로 웬만하면 맞아야 함 !

// max.c 함수 선언 형식으로.
/*
#include <stdio.h>

double get_max(double x, double y, double z);

int main(void)
{
	printf("max = %lf", get_max(12.34,0.5,7.9));

	return 0;

}

double get_max(double x, double y, double z)
{
	double max = x > y ? x : y;
	max = z > max ? z : max;

	return max;


}
*/
// 출력 결과
/*
max = 12.340000
*/


// local.c
/*

#include <stdio.h>

void double_it(int num)
{
	num *= 2;
}

int double_this(int num)
{
	return num *= 2;
}

int main(void)
{
	int x = 10;
	double_it(x); // 함수 호출 후에도 x는 변하지 않음... return 받은게 없으니까.
	printf("double_it   호출 후 x = %d\n", x);
	x = double_this(x); // double_this의 return값을 x에 저장했음.
	printf("double_this   호출 후 x = %d\n", x);
	return 0;

}
*/
// 출력 결과
/*
double_it   호출 후 x = 10
double_this   호출 후 x = 20

*/
// num이라는 지역 변수는 다른 변수를 사용해서 가져오지 않으면, 사용자 정의 함수가 끝날때 값이 그대로 소멸해버림.

// global.c
/*

#include <stdio.h>

void print_count(void);
void increment(void);
void decrement(void);

int count; // 데이터 영역에 저장되는 전역 변수. 초기화 해주지 않으면 0으로 초기화 된다. 또, 프로그램이 끝날때가 되서야 소멸한다.

int main(void)
{
	int i;
	count = 0;
	print_count();
	for (i = 0; i < 5; i++)
	{
		increment();
	}
	print_count();
	for (i = 0; i < 5; i++)
	{
		decrement();
	}
	print_count();
	return 0;

}

void print_count(void)
{
	printf("%d\n", count);
}

void increment(void)
{
	count++;

}

void decrement(void)
{
	count--;
}
*/
//출력 결과
/*
0
5
0

*/
/*
보통 중괄호 안에있는건 지역변수임. 만약 중괄호 안에 없다면 , 전역변수(global 변수)임. 이 전역 변수는 어디에서든 들어갈 수 있고, 어디든지 들어 갈 수 있음.
또, 이 전역변수는 데이터영역으로 메모리에 저장됨. 항상 깔끔하게 0으로 청소된다. 아까 있었던 static은 정적 변수.
*/


// << 배열 / 포인터>> //
/*

#include <stdio.h>

int main(void)
{
	int m[4] = { 2,4,5,8 };
	printf("%d %d %d %d", m[0], m[1], m[2], m[3]);
	return 0;


}
*/
//출력 결과
/*
2 4 5 8
*/
/*
#include <stdio.h>


int main(void)
{
	char m[5] = { 'a','b','c','d','a' };
	int i, num = 0;
	for (i = 0; i < 5; i++)
	{
		if (m[i] == 'a') num++;
	}

	printf("\'a\'의 갯수는 : %d", num);
	return 0;
}
*/
// 출력 결과
/*
'a'의 갯수는 : 2
*/

#include <stdio.h>

int main(void)
{
	int s[5] = { 5,3,6,2,4 };
	int i, max = 0;

	for (i = 0; i < 5; i++)
	{
		if (s[i] > max) max = s[i];

	}
	printf("가장 큰 수는 : %d", max);



}
//출력 결과
/*
가장 큰 수는 : 6
*/





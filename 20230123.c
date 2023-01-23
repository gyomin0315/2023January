// drawline.c
/*
#include <stdio.h>

void draw_line(char ch, int len) //ch : 선 그릴때 사용할 문자, len : 출력할 문자의 개수
{
	int i;
	for (i = 0; i < len; i++)
	{
		printf("%c", ch);
	}
	printf("\n");

}

int main(void)
{
	int amount = 10, price = 1000;

	int total = 0, width = 0;

	int a;

	draw_line('-', 21);
	a = printf("수량    단가    합계\n");
	width = a;
	draw_line('=', width); // 수량   단가   합계를 쓴 길이 만큼 =를 draw 하고 싶음.
	total = amount * price;

	printf("%3d %8d %8d\n", amount, price, total);
	draw_line('-', a);
	return 0;


}
*/
//출력 결과
/*
---------------------
수량    단가    합계
=====================
 10     1000    10000
---------------------

*/
/*
void draw_line의 () 안에 매개변수가 있고, 반환 값은 없음 ! ch, len은 매개변수임.
draw_line('-',24)의 뜻은 ch에다가 -를 넣고, len에 24를 넣으라는 의미.
*/
/*
//void drawline(char x, int y); <- 사용 가능 !
//void drawline(char, int);  <- 사용 가능 !
#include <stdio.h>
void drawline(char ch, int len);

// 함수원형에 사용하는 매개변수명은 달라고 되고, 생략도 가능 !
// 얘네 셋중 하나는 반드시 와야함. 컴파일러는 매개변수에서 변수명은 안보고, 데이터형은 봄. 
// 그래서 매개변수의 자료형은 반드시 와야하고, 순서도 무조건 지켜줘야 함. 
// 컴파일러가 컴파일할떄 위에서 부터 쭉 훑어 내리는데, 어차피 함수 원형은 그냥 컴파일러가 아 이런 함수가 존재하겠구나 라고 생각하게 하는 용도임 ! 그래서 매개변수명은 생략 가능.


int main(void)
{
	int amount = 10, price = 1000;
	int total = 0;
	int a;
	drawline('-', 21);
	a = printf("수량   단가   합계\n");
	drawline('=', a);
	total = amount * price;
	printf("%3d %8d %8d\n", amount, price, total);
	drawline('-', a);
	return 0;







}

void drawline(char x, int y)
{
	int i;
	for (i = 0; i < y; i++)
	{
		printf("%c", x);
	}
	printf("\n");

}
*/
//출력 결과
/*
---------------------
수량   단가   합계
===================
 10     1000    10000
-------------------

*/

// (1) 매개변수 있음, 반환값 있음. 두 값을 더하는 프로그램 !
/*
#include <stdio.h>

int func(int x, int y);

int main(void)
{
	int a;
	a = func(3, 5);
	printf("결과값은 : %d", a);
	return 0;

}

int func(int x, int y)
{
	int result;
	result = x + y;
	return result; // func함수를 부른곳으로 result를 return 시키라는 의미. 


}
*/
// 출력 결과
/*
결과값은 : 8
*/

// (2) 매개변수 있음 / 반환하는 값 없음.
/*
#include <stdio.h>
void func(int, int);

int main(void)
{
	func(3, 5);
	return 0;



}

void func(int x, int y)
{
	int result;
	result = x + y;
	printf("결과값은 : %d", result);


}
*/
//출력 결과
/*
결과값은 : 8
*/

// (3) 매개변수 없음, 반환하는 값 있음.
/*
#include <stdio.h>
int func(void);

int main(void)
{
	int result;
	func();
	result = func();

	printf("결과값은 : %d", result);

}

int func(void)
{
	int a = 3, b = 5;
	int result = a + b;
	return result;


}
*/
//출력 결과
/*
결과값은 : 8
*/

// (4) 매개변수 없음, 반환하는 값 없음.

#include <stdio.h>

void func(void);

int main(void)
{

	func();
	return 0;


}

void func(void)
{
	int a = 3, b = 5, result = a + b;
	printf("총 합은 : %d", result);


}
//출력 결과
/*
총 합은 : 8
*/








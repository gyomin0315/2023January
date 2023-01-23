// drawline.c
/*
#include <stdio.h>

void draw_line(char ch, int len) //ch : �� �׸��� ����� ����, len : ����� ������ ����
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
	a = printf("����    �ܰ�    �հ�\n");
	width = a;
	draw_line('=', width); // ����   �ܰ�   �հ踦 �� ���� ��ŭ =�� draw �ϰ� ����.
	total = amount * price;

	printf("%3d %8d %8d\n", amount, price, total);
	draw_line('-', a);
	return 0;


}
*/
//��� ���
/*
---------------------
����    �ܰ�    �հ�
=====================
 10     1000    10000
---------------------

*/
/*
void draw_line�� () �ȿ� �Ű������� �ְ�, ��ȯ ���� ���� ! ch, len�� �Ű�������.
draw_line('-',24)�� ���� ch���ٰ� -�� �ְ�, len�� 24�� ������� �ǹ�.
*/
/*
//void drawline(char x, int y); <- ��� ���� !
//void drawline(char, int);  <- ��� ���� !
#include <stdio.h>
void drawline(char ch, int len);

// �Լ������� ����ϴ� �Ű��������� �޶�� �ǰ�, ������ ���� !
// ��� ���� �ϳ��� �ݵ�� �;���. �����Ϸ��� �Ű��������� �������� �Ⱥ���, ���������� ��. 
// �׷��� �Ű������� �ڷ����� �ݵ�� �;��ϰ�, ������ ������ ������� ��. 
// �����Ϸ��� �������ҋ� ������ ���� �� �Ⱦ� �����µ�, ������ �Լ� ������ �׳� �����Ϸ��� �� �̷� �Լ��� �����ϰڱ��� ��� �����ϰ� �ϴ� �뵵�� ! �׷��� �Ű��������� ���� ����.


int main(void)
{
	int amount = 10, price = 1000;
	int total = 0;
	int a;
	drawline('-', 21);
	a = printf("����   �ܰ�   �հ�\n");
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
//��� ���
/*
---------------------
����   �ܰ�   �հ�
===================
 10     1000    10000
-------------------

*/

// (1) �Ű����� ����, ��ȯ�� ����. �� ���� ���ϴ� ���α׷� !
/*
#include <stdio.h>

int func(int x, int y);

int main(void)
{
	int a;
	a = func(3, 5);
	printf("������� : %d", a);
	return 0;

}

int func(int x, int y)
{
	int result;
	result = x + y;
	return result; // func�Լ��� �θ������� result�� return ��Ű��� �ǹ�. 


}
*/
// ��� ���
/*
������� : 8
*/

// (2) �Ű����� ���� / ��ȯ�ϴ� �� ����.
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
	printf("������� : %d", result);


}
*/
//��� ���
/*
������� : 8
*/

// (3) �Ű����� ����, ��ȯ�ϴ� �� ����.
/*
#include <stdio.h>
int func(void);

int main(void)
{
	int result;
	func();
	result = func();

	printf("������� : %d", result);

}

int func(void)
{
	int a = 3, b = 5;
	int result = a + b;
	return result;


}
*/
//��� ���
/*
������� : 8
*/

// (4) �Ű����� ����, ��ȯ�ϴ� �� ����.

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
	printf("�� ���� : %d", result);


}
//��� ���
/*
�� ���� : 8
*/








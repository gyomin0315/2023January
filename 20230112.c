/*
#include<stdio.h>
int main(void)
{
	int a; // ������ 4 byte¥�� �޸𸮸� ��� a��� �̸����� �������ش�.
	float b; // �Ǽ��� 4byte¥�� �޸𸮸� ��� b��� �̸����� �������ش�.
	char c; // ������ 1byte¥�� �޸𸮸� ��� c��� �̸����� �������ش�.
	// �������� �϶�� ��ư�� ������ �޸𸮸� ��´�. ó������ �����Ⱚ�� �ְ�, ���� �Ҵ��� �Ǹ� �Ҵ�� ���� �����Ⱚ�� ġ��� ����.
	double d; // �Ǽ��� 8byte. �Ȱ��� ���� �־ float���� ���е��� ����, �޸� �� ��Ƹ���.


	// a,b,c�� ����
	a = 10;
	b = 4.13;
	c = 'A';
	d = 4.13;

	printf("%d %x %X\n", a, a, a); // a�� 10����, 16����(�� �ҹ���, �빮��)�� print
	printf("%f %e %.1f %.9f %10.3f\n", b, b, b, b, b); // b�� �ε��Ҽ���, ���� ǥ��� print. �̶� �⺻ �Ҽ��� ���� 6�ڸ����� ���. �������� �Ҽ��� ù��°, 9��°���� ǥ��, �������� 10ĭ ��� �Ҽ��� 3��°���� ǥ��.
	printf("%c %d\n", c, c); // c�� ���ڷ� ���, ASCII �ڵ�� ���.
	printf("%.9f", d);

	return 0;

}
*/
//��� ���
/*
10 a A
4.130000 4.130000e+00 4.1 4.130000114      4.130
A 65
4.130000000
*/

// float������ ������ b�� �Ҽ��� 9��°�ڸ� ���� ������ ������ ������, double������ ������ d�� ������ ����. 
/*
�⺻ �ڷ���(Data Type)
void : ���� ����
char : ������ / 1byte
int : ������ / 2 or 4 byte
float : �Ǽ��� / 4byte
double : �Ǽ��� / 8byte


[���� �ڵ�]
-ASCII �ڵ� : C��� ���� ���. �����ҹ���, �ƶ��Ƽ���, Ư����ȣ � ���� ��� / 7bit�� ǥ��(128�� ���ڿ� ���� ����� ����.) �׷��� �ѱ��� ���������� ����� �� ����.
-UNI �ڵ� : Python, Java���� ���. ASCII �ڵ带 ����. ��� ���󿡼� ����ϴ� ���ڵ鿡 ���� ���. 16bit�� ǥ��(65536�� ���ڿ� ���� ����� �����ϴ�.) cf.�ѱ��� ���� portion ����.

ASCII �ڵ��
A : 65   / a : 97  / 0 : 48
*/
/*
#include <stdio.h>
int main(void)
{
	printf("%d %d %d %d", 'A', 'a', '0', 0); // A , a , ���� 0, ���� 0 �� ASCII �ڵ�.
	return 0;
}
*/
// ��� ���
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
	printf("%5d\n", a); // 5ĭ�� ���, ��� ���� ������ ����
	printf("%-5d\n", a); // ���� ���� �Ϸ��� -����. 
	printf("%f\n", b); // �⺻ �Ҽ��� 6��°�ڸ����� ǥ�� 
	printf("%.2f\n", b); // �Ҽ��� 2��° �ڸ����� ǥ��
	printf("%6.2f\n", b); // 6ĭ ���, �Ҽ��� 2��° �ڸ����� ǥ��. �ڸ� ������� �⺻ ������ ����
	
	return 0;
}
*/
// ��� ���
/*
987
  987
987
34.500000
34.50
 34.50
 */
/*
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ������ ������ �����ϱ� ���� ����
#include <stdio.h>
int main(void)
{
	int age; // ���̸� �����ϱ� ���� int �ڷ��� ���� age
	float height; // Ű�� �����ϱ� ���� float �ڷ��� ���� height
	float weight; // �����Ը� �����ϱ� ���� float�� �ڷ��� ���� weight

	printf("����, Ű, �����Ը� ������� ���ÿ�.");
	scanf("%d %f %f", &age, &height, &weight); // 3���� ������ ������� ����. 
	// scanf ���ٶ� �ڿ��� �ݵ�� �ּҸ� �ǹ��ϴ� & ������. �׷��� scanf�� �о�鿩�� �� �ּҿ� ������� �� ����.
	// &�� ���� ������ �ּڰ��� �ǹ� !
	printf("����  : %5d\n", age);
	printf("Ű  : %5.1f\n", height);
	printf("������  : %5.1f\n", weight);

	printf("%p %p %p", &age, &height, &weight);

	return 0;


}
*/
//��� ���
/*
����, Ű, �����Ը� ������� ���ÿ�.26 170 69
����  :    26
Ű  : 170.0
������  :  69.0
000000BEC87BFB74 000000BEC87BFB94 000000BEC87BFBB4
*/

//����)
// 1. ����, ����, ���� ����(����,float��, double��)�� �Է� ���� �� ������ ����� ����ϴ� ���α׷��� �ۼ�.
// 2. ���� ���̸� �Է¹��� ��, ���簢��, ��ٸ���, ���� �ѷ� �� ���� ���ϴ� ���α׷� �ۼ�.

// 1-1
/*
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ������ ������ �����ϱ� ���� ����
#include <stdio.h>

int main(void)
{
	int korean, math, english;
	float average;

	

	printf("����, ����, ���� ������ �Է��Ͻÿ� : ");
	scanf("%d%d%d", &korean, &math, &english);

	average = (korean + math + english) / 3;

	printf("���� : %d\n", korean + math + english);
	printf("��� : %.1f\n", average);

	return 0;
	
	
}
*/
// ��� ���
/*
����, ����, ���� ������ �Է��Ͻÿ� : 43 37 81
���� : 161
��� : 53.0
*/

// 1-2
/*
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ������ ������ �����ϱ� ���� ����
#include <stdio.h>

int main(void)
{
	float korean, math, english;
	float average;

	printf("����, ����, ���� ������ �Է��Ͻÿ� : ");
	scanf("%f%f%f", &korean, &math, &english);

	average = (korean + math + english) / 3;

	printf("���� : %f\n", korean + math + english);
	printf("��� : %.1f\n", average);

	return 0;


}
*/
// ��� ���
/*
����, ����, ���� ������ �Է��Ͻÿ� : 10.5 70.8 80.4
���� : 161.700012
��� : 53.9
*/

// 1-3
/*
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ������ ������ �����ϱ� ���� ����
#include <stdio.h>

int main(void)
{
	double korean, math, english;
	double average;

	printf("����, ����, ���� ������ �Է��Ͻÿ� : ");
	scanf("%lf%lf%lf", &korean, &math, &english); // printf ���� ��� �ڷ����� double���� �� �׳� %lf ��� %f�� �ᵵ ������, scanf�� �ݵ�� �ڷ����� double ���� ���� %lf�� �������. 

	average = (korean + math + english) / 3;

	printf("���� : %f\n", korean + math + english);
	printf("��� : %.1f\n", average);

	return 0;


}
*/
//��� ���
/*
����, ����, ���� ������ �Է��Ͻÿ� : 10.5 70.8 80.4
���� : 161.700000 // �տ��� float���� �������� �������� ������ �־��µ�, double�� ���� �����. 
��� : 53.9
*/

// 2-1
/*
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ������ ������ �����ϱ� ���� ����
#include <stdio.h>
int main(void)
{
	float length;
	printf("���簢���� �� ���� ���̸� �Է��Ͻÿ� :");
	scanf("%f", &length);

	printf("���簢���� �ѷ��� ���̴� : %f", 4 * length);

	return 0;
}
*/
//��� ���
/*
���簢���� �� ���� ���̸� �Է��Ͻÿ� :10.3
���簢���� �ѷ��� ���̴� : 41.200001
*/

// 2-2
/*
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ������ ������ �����ϱ� ���� ����
#include <stdio.h>

int main(void)
{
	double top, bottom, height;
	printf("����, �Ʒ���, ���̸� ������� �ۼ��Ͻÿ� :");
	scanf("%lf%lf%lf", &top, &bottom, &height);

	double result = (top + bottom) * height / 2;

	printf("��ٸ����� ������ : %lf", result);
	return 0;
}
*/
//��� ���
/*
����, �Ʒ���, ���̸� ������� �ۼ��Ͻÿ� :10.1 9.75 16.8
��ٸ����� ������ : 166.740000
*/

// 2-3
#define _CRT_SECURE_NO_WARNINGS // scanf ���� ������ ������ �����ϱ� ���� ����
#include <stdio.h>
int main(void)
{
	float PI = 3.14;
	double radius;

	printf("���� �������� ���̸� ���ÿ� :");
	scanf("%lf", &radius);

	printf("���� �ѷ��� ���̴� : %.3lf\n", 2 * PI * radius);
	printf("���� ���̴� : %.3lf", radius * radius * PI);

	return 0;
}
//��� ���
/*
���� �������� ���̸� ���ÿ� :0.5
���� �ѷ��� ���̴� : 3.140
���� ���̴� : 0.785
*/



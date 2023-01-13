/*
#include <stdio.h>

int main(void)
{
	char c;
	int i;
	float f;
	double d;

	c = 'A';
	i = 10;
	f = 3.14;
	d = 3.14;

	printf("%c %d %.2f %.3lf", c, i, f, d); // %lf�� ���ִ� ���� scanf���� double���϶��� ������ ���°Ű�, printf������ �׳� %f�� ���൵ ����.


	return 0;

}
*/
//��� ���
/*
A 10 3.14 3.140
*/
/*
[������ �ۼ���]
������ �̸��� �׻� ������, ����, _�� ����ؾ���. ù ���ڷδ� �ݵ�� ���ڰ� �ƴ� ������, _ �� �;���.
��, ù���ڷδ� ���� ����� �� ����.
C���� ASCII �ڵ� ����ϱ� ������, �ѱ� ��뵵 �ȵ�.
_�� ù��°�� ����ϴ°�, �ý��� �������� �ַ� �׷��� ���� ������ �����ϴ� ���� ����.
��, �빮�� ����� �ַ� ����� ǥ���Ҷ� ���ȴ�.
���������, �������� �ҹ��� ����� �����ϴ°� ����Ʈ.
*/

// sizeof.c
/*
#include <stdio.h>
int main(void)
{
	printf("�ڷ��� char �� ũ��:%d\n", sizeof (char));
	printf("�ڷ��� short �� ũ��:%d\n", sizeof(short));
	printf("�ڷ��� int�� ũ��:%d\n", sizeof(int));
	printf("�ڷ��� long�� ũ��:%d\n", sizeof(long));
	printf("�ڷ��� float�� ũ��:%d\n", sizeof(float));
	printf("�ڷ��� double�� ũ��:%d\n", sizeof(double));
	return 0;

}
*/
// ��� ���
/*
�ڷ��� char �� ũ��:1
�ڷ��� short �� ũ��:2
�ڷ��� int�� ũ��:4
�ڷ��� long�� ũ��:4
�ڷ��� float�� ũ��:4
�ڷ��� double�� ũ��:8
*/
// ���� byte����.
/*
[sizeof ������]

- sizeof ������ / sizeof(������) / sizeof(�ڷ���)

- sizeof �ڷ��� ���´� �ȵ�.

=> ���� �Ǵ� �ش� �ڷ����� �޸𸮻󿡼� �� ����Ʈ�� �����ϴ��� Ȯ�� �� �� ����.

sizeof�� �������� ���� �Լ��� �ƴ� !
*/
/*
#include <stdio.h>
int main(void)
{
	short x = -7;
	unsigned short y = 65529; // unsigned�� �ٿ��ְ� �Ǹ� ����� ����ϰڴٴ� ��.

	printf("x=%5d, %08x\n", x, x); // short�� ������ ��� �� 4byte�� ��ȯ�ȴ�. ��ǻ�Ͱ� ������ 4byte, �Ǽ��� 8byte�� ����Ϸ��� ��. �� ���, short�� ��½� 4byte�� ����.

	printf("y=%5d, %08x\n", y, y);

	return 0;


}
*/
// ��� ���
/*
* x=   -7, fffffff9
y=65529, 0000fff9

*/

/*

��ǻ�Ϳ��� data�� ó���ϴ� �⺻ ������ byte��. �׷��� +7 ǥ�� �Ҷ��� 111(2) �� �ƴ� 00000111(2) �� ǥ���ϴ°� ���� ����.
���� ������ 2�� ���� ǥ�� ��� ���. �������� ���� ��,MSB�� 0�̸� ���, 1�̸� ������� �Ǵ�.
8���� ǥ�������� 3bit�� �ڸ���, 3���� ������ �������� ������ ���� bit�� �ڸ����� ū�� �� �տ� ������� 1��, ������ 0�� ����.

�������� ũ�� ��ȿ ����
char 1byte : -128~127
short 2byte : -32768~32767
int 4byte : -2147483648 ~ 2147483647
unsigned �� ���� ������ ���� 2�� ���ϸ� ��.

1�� ������ ��ȣȭ ũ�� ǥ�� ����� ���� �ʴ� ������, ������ ����, ��ȣ�� �ٸ� �� ���� ���ص� 0�� ������ �ʰ�, 0�� ǥ���ϴ� �������� 2���� �Ǳ� ����.

*/
/*
#include <stdio.h>
int main(void)
{
	char n = 128; // ǥ�� ������ ���� �Ѿ��.
	unsigned char red = 300; // ǥ�� ������ ���� �Ѿ��.

	printf("n = %d\n", n);
	printf("red = %d\n", red);

	return 0;

}
*/
//��� ���
/*
* n = -128
red = 44

*/
// n���� ���, MSB�� 1�̴ϱ� ������ �� �˰�, -1�ϰ� 0�� 1 ���� �ٲ������, 1000 0000�� �Ǽ� -128��.
// red���� ���, 300 -> 0001 0010 1100�� �Ǵµ�, 1byte�ϱ� 0010 1100�� ����.

// ���� ���ڸ� �Է¹޾Ƽ� ASCII �ڵ�� ���� ���� ���� ����, ���� ���� ���.
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char c;
	printf("���ڸ� �Է��Ͻÿ� :");
	scanf("%c", &c);

	char prev_c = c - 1;
	char next_c = c + 1;

	printf("prev_c = %c, %d\n", prev_c, prev_c);
	printf("c = %c, %d\n", c, c);
	printf("next_c = %c, %d\n", next_c, next_c);

	return 0;
}
*/
//��� ���
/*
���ڸ� �Է��Ͻÿ� :b
prev_c = a, 97
c = b, 98
next_c = c, 99
*/
/*
#include <stdio.h>
int main(void)
{
	float rate1 = 9.876543210987654;
	double rate2 = 9.876543210987654;

	printf("float rate1 = %.15f\n", rate1);
	printf("double rate2 = %.15lf\n", rate2);

	return 0;

}
*/
//��� ���
/*
float rate1 = 9.876543045043945
double rate2 = 9.876543210987654
*/

/*
�� ���α׷�(�� ��� ���)���� ����, �ٻ簪, ������ ?

- rate1: ����: 9.876543210987654, �ٻ� : 9.876543045043945, ���� : 0.000000165943709

- rate2 : ���� : 9.876543210987654, �ٻ� : 9.876543210987654, ���� : 0

float 4byte ���� double 8byte�� ���� �� �� ��Ȯ�ϴٴ� �� �� �� ����.
*/
/*
#include <stdio.h>
int main(void)
{
	printf("sizeof(\'x\') = %d\n", sizeof('x'));
	printf("sizeof(0.25F) = %d\n", sizeof(0.25F));
	printf("sizeof(.5) = %d\n", sizeof(.5));
	printf("sizeof(\"x\")=%d", sizeof("xbcd"));

	return 0;
}
*/
//��� ���
/*
sizeof('x') = 4
sizeof(0.25F) = 4
sizeof(.5) = 8
sizeof("x")=2
*/
/*
sizeof('x')�� x�� char���̶�� ������ �����ٸ�, ��ǻ�ʹ� �̰� ASCII �ڵ�� �ν��ؼ� 4byte ������ �ΰɷ� ó����.
sizeof(0.25F)�� 0.25�� 4byte float���̶�� �ǹ̷� F�� �ٿ���. �׷��� 4byte.
sizeof(.5)�� ��ǻ�� �⺻������ �Ҽ��� 8byte double���̶�� �����Ѵٰ� ����. �׷��� 8byte ����.
sizeof("x")���� x�� ���ڿ���. �⺻ ���� x 1byte�� NULL ���� 1byte �������� �� 2byte ����.
sizeof("xabc")�� ���ԵǸ� ���ڰ� �� 4���� 4byte, NULL���� 1byte �������� �� 5byte �����°� Ȯ�� �� �� ����.
*/

// �ӱ� ����

#define _CRT_SECURE_NO_WARNINGS     // scanf ����� ���ؼ� �ʿ�

#include <stdio.h>
#define HOURLY_WAGE 8350

int main(void)
{
	int working_hours,wage;

	printf("��ð� ���߳���?");
	scanf("%d", &working_hours);

	wage = HOURLY_WAGE * working_hours;

	printf("�ð��� �޿� : %6d\n", HOURLY_WAGE);

	printf("�� �޿� : %6d", wage);

	return 0;


}
//��� ���
/*
��ð� ���߳���?10
�ð��� �޿� :   8350
�� �޿� :  83500
*/
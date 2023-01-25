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
	//get_max(10,20); <- ������ ������ �����ϸ� ������ ����. ���α׷� ���� �ȵ� !
	//get_max(10,20,30,40) <- ������ ������ �ʹ� ������ ������ ���. ���α׷��� ������ �� !

	double max;

	max = get_max(12.34, 0.5, 7.9);
	printf("max = %lf", max);
	return 0;


}
*/
//��� ���
/*
max = 12.000000
*/

// 12.34�� ����� ���;��ϴµ�, �Ű������� int���̿��� �����κи� ����. ���ڿ� �Ű����� �ڷ��� ���� �����ϸ� �¾ƾ� �� !

// max.c �Լ� ���� ��������.
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
// ��� ���
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
	double_it(x); // �Լ� ȣ�� �Ŀ��� x�� ������ ����... return ������ �����ϱ�.
	printf("double_it   ȣ�� �� x = %d\n", x);
	x = double_this(x); // double_this�� return���� x�� ��������.
	printf("double_this   ȣ�� �� x = %d\n", x);
	return 0;

}
*/
// ��� ���
/*
double_it   ȣ�� �� x = 10
double_this   ȣ�� �� x = 20

*/
// num�̶�� ���� ������ �ٸ� ������ ����ؼ� �������� ������, ����� ���� �Լ��� ������ ���� �״�� �Ҹ��ع���.

// global.c
/*

#include <stdio.h>

void print_count(void);
void increment(void);
void decrement(void);

int count; // ������ ������ ����Ǵ� ���� ����. �ʱ�ȭ ������ ������ 0���� �ʱ�ȭ �ȴ�. ��, ���α׷��� �������� �Ǽ��� �Ҹ��Ѵ�.

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
//��� ���
/*
0
5
0

*/
/*
���� �߰�ȣ �ȿ��ִ°� ����������. ���� �߰�ȣ �ȿ� ���ٸ� , ��������(global ����)��. �� ���� ������ ��𿡼��� �� �� �ְ�, ������ ��� �� �� ����.
��, �� ���������� �����Ϳ������� �޸𸮿� �����. �׻� ����ϰ� 0���� û�ҵȴ�. �Ʊ� �־��� static�� ���� ����.
*/


// << �迭 / ������>> //
/*

#include <stdio.h>

int main(void)
{
	int m[4] = { 2,4,5,8 };
	printf("%d %d %d %d", m[0], m[1], m[2], m[3]);
	return 0;


}
*/
//��� ���
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

	printf("\'a\'�� ������ : %d", num);
	return 0;
}
*/
// ��� ���
/*
'a'�� ������ : 2
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
	printf("���� ū ���� : %d", max);



}
//��� ���
/*
���� ū ���� : 6
*/






// ���� �ι�° ���α׷� ���� 
/*
#include <stdio.h>
int main(void)
{
	char* m = "kor";
	char** mp;
	mp = &m;
	printf("%s\n", m);
	printf("%s\n", m + 1);
	printf("%u %u\n", m, mp);
	printf("%s\n", *mp);
	printf("%c\n", **mp);
	printf("%c\n", *(* mp + 1)); // �����κ�
	return 0;
}
*/

//��� ���
/*
kor
or
1333238800 3590256712
kor
k
o
*/

// swap ����

/*
#include <stdio.h>
//void swap(int , int );
void swap(int*, int*);


int main(void)
{
	int a = 1, b = 2;
	swap(&a,&b);
	printf("a = %d, b = %d", a, b);

	return 0;


}

void swap(int *x,int *y)
{

	int temp;

	temp = *x;
	*x = *y;
	*y = temp;

}

// �Լ� ���� �κп���, ������ ������ �Ű������϶�, �Ű������� �ܼ��� int���̶�� ���ָ� ��� ����� �ȳ���.
// �Ű������� �ּҸ� �޴´ٶ�� , �ݵ��, �������� �ڿ� ������ (*)�� �ٿ���� ��� ����� ���´�.
// �Լ� �����ʿ����� �� ����� ���ִ°� �翬�ϰ�. 
*/

// array_size.c
/*
#include <stdio.h>

int main(void)
{
	int arr[5];
	int size, i;

	printf("�迭�� ��ü ũ��� : %d\n", sizeof(arr));

	size = sizeof(arr) / sizeof(arr[0]); // �̷� ������� ���� �迭�� ������ ���� ���� ! (��ü������)/(���� �ϳ��� ������)

	printf("�迭�� ������ ������ : %d\n", size);

	for (i = 0; i < size; i++)
	{
		arr[i] = 0;
		printf("arr[%d] = %d\n", i, arr[i]);

	}
	return 0;
	

}
*/

//��� ���
/*
�迭�� ��ü ũ��� : 20
�迭�� ������ ������ : 5
arr[0] = 0
arr[1] = 0
arr[2] = 0
arr[3] = 0
arr[4] = 0
*/

// default_array.c

#include <stdio.h>
#define ARR_SIZE 5   // �迭�� ũ�⸦ ��Ÿ���� ��ũ�� ���. ������ �ϱ� ������ ARR_SIZE��� ���ڸ� 5��� ���ڷ� ġȯ�ߴٰ�, �������� �Ǹ� �׶����� 5��� ������ �ٲ�. = ǥ�� ���°ſ� ���� !

int main(void)
{
	int arr[ARR_SIZE] = { 1,2,3,4,5 }; // �迭�� ũ�⿡ �˸°� �ʱ�ȭ
	int x[ARR_SIZE] = { 1,2,3 }; // �ʱ�ȭ �Ҷ� �ʱⰪ�� �����ϸ� �������� 0���� �ڵ������� ä����.
	int y[ARR_SIZE] = { 0 }; // �迭 ��ü�� 0���� �ʱ�ȭ�Ѵ�. (�ʱ�ȭ�Ҷ� �ʱⰪ �����Ѱ� �������� 0���� �� �ڵ������� ä���شٰ� �����ϱ�.)
	int z[] = { -1,0,1 }; // �ʱ�ȭ�� �����شٴ� ���� �Ͽ�, �迭�� ũ�� ���� �����ϴ�.

	int i, size;

	printf("arr = ");

	for (i = 0; i < ARR_SIZE; i++)
	{
		printf("%3d", arr[i]);
		
	}
	printf("\n");
	printf("x = ");
	for (i = 0; i < ARR_SIZE; i++)
	{
		printf("%3d", x[i]);
	
	}
	printf("\n");
	printf("y = ");
	for (i = 0; i < ARR_SIZE; i++)
	{
		printf("%3d", y[i]);
		
	}
	printf("\n");

	size = sizeof(z) / sizeof(z[0]);

	printf("z = ");
	for (i = 0; i < size; i++)
	{
		printf("%3d", z[i]);
		
	}

	printf("\n");

	return 0;


}
//��� ���
/*
arr =   1  2  3  4  5
x =   1  2  3  0  0
y =   0  0  0  0  0
z =  -1  0  1
*/


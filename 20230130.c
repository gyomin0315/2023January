// %s �ڿ� �ּڰ� �־��� ��, %s�� ��µǴ� ���� �� �ּڰ��� ����Ű�� ���� !

/*
#include <stdio.h>

int main(void)
{
	char* mp;
	char **mpp;

	printf("*mp size : %d, *mpp size: %d", sizeof(*mp), sizeof(**mpp));

}
*/

// �� ���� ���� ���α׷� ���� char������ ������ ���� ������������, ũ�� 1byte�ΰ� �� �� ����.
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
	printf("%c\n", (*mp + 1));

	return 0;

}
*/
//��� ���
/*
kor
or
555392112 2989684200
kor
k
q

*/

// �޸� �׸� �׷����� Ȯ��.
/*
#include <stdio.h>

void swap(int* px, int* py); // �Ű������� ������ ������ ����. 

int main(void)
{
	int a = 1, b = 2;
	printf("a = %d , b = %d\n", a, b);
	swap(&a, &b); // ������ �ּҸ� ���� 
	printf("a = %d , b = %d", a, b);
	return 0;
}

void swap(int* px, int* py)
{
	int temp;
	temp = *px; // temp =1
	*px = *py; // *px (���⼭�� a�� ��) = 2
	*py = temp; // *py (���⼭�� b�� ����) = 1


}
*/
//��� ���
/*
a = 1 , b = 2
a = 2 , b = 1
*/

/*
�� ���� �����͸� �̿������� ? �Ű������� �������� ������ �ƴϰ�, �Ϲ� �������, ���� �޾�����, ����� ���� �Լ� �ȿ����� swap�� �ϰ�, return�� �����ϱ�
�׳� ����� ���� �Լ� ��������, �ٽ� ���� �ʱ�ȭ �Ǿ������ swap �� �ȵ�.
But, ������ ������ ����ϰ� �Ǹ�, �ּҸ� ���� �� ������ ���� ���� �ٲٱ� ������, ����� ���� �Լ� ���������� ���� �ٲ�ä�� �״�� ����.
*/


// �����͸� ���� �ʾ��� ��

#include <stdio.h>

void swap(int, int);

int main(void)
{
	int a = 1, b = 2;
	printf("a = %d , b = %d\n", a, b);
	swap(a, b);
	printf("a = %d , b = %d", a, b);
	return 0;



}

void swap(int x, int y)
{
	int temp;
	printf("x = %d , y = %d\n", x, y);
	temp = x;
	x = y;
	y = temp;
	printf("x = %d , y = %d\n", x, y);




}

//��� ���
/*
a = 1 , b = 2
x = 1 , y = 2
x = 2 , y = 1
a = 1 , b = 2
*/

// main���� �ٲ� ���� �������� ����, a,b���� �״����. 
// �� �� �׸� �׷����鼭 ���� ������ Ȯ�� �غ� ��. 


// for( ; ; ) �� while(1)�� ���ѷ����� ���Ѵ�. 

// calculator.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf ����� ���� �ʿ�
#include <stdio.h>

int main(void)
{
	double x,y;
	char op;
	double result = 0;
	char yesno = 'Y'; // ��� ����� ���� ��Ÿ���� ����. �ݵ�� 'Y'�� �ʱ�ȭ �ؾ��Ѵ�.

	while (yesno == 'Y' || yesno == 'y')
	{
		printf("����?");
		scanf("%lf%c%lf", &x, &op, &y);

		if (op == '+')
			result = x + y;
		else if (op == '-')
			result = x - y;
		else if (op == '*')
			result = x * y;
		else if (op == '/')
			result = x / y;
		
		//else if (op == '%%')
		//	result = x % y;
		 
		// ������ ������ �Ǽ������� ����� �� ����, �ݵ�� ���������� ���������� ! 

		else
		{
			printf("���� �߸� �Է��߽��ϴ�.");
			return 1;
		}
		printf("%lf %c %lf = %lf\n", x, op, y, result);

		printf("��� �Ͻðڽ��ϱ�? (Y/N):");
		scanf(" %c", &yesno); // 2��°�� scanf�޴°Ŵϱ� �ݵ�� %c�տ� ���� �־������ !!!

	}
	
	return 0;

}
*/
//��� ���
/*
����?10+20
10.000000 + 20.000000 = 30.000000
��� �Ͻðڽ��ϱ�? (Y/N):y
����?10-20
10.000000 - 20.000000 = -10.000000
��� �Ͻðڽ��ϱ�? (Y/N):n

*/

//cf.
// scanf(" %c",&yesno); �� scanf("%*c%c", &yesno); �� ���� �� ���� ����.

// do while.c
/*
#define  _CRT_SECURE_NO_WARNINGS  
#include <stdio.h>

int main(void)
{
	int x;

	printf("����?");
	scanf("%d", &x);

	do
	{
		printf("%d ", x);
		x /= 2;

	} while (x > 0);
	
	return 0;

}
*/
//��� ���
/*
����?10
10 5 2 1
*/
/*
do while�� while�� ��������, while�� ���ǽ��� ���� ���� ���� ���ǿ� ���� �ʴ´ٸ�, while���� �״�� ������������, 
do while�� ó�� �ѹ��� ������ �����ϰ�, ���� �Ŀ� ���ǽ��� ����. 

do while�� ������ while()�� �ݵ�� �����ݷ� ����� �� !
*/

// �� do while���� while ������
/*
#define  _CRT_SECURE_NO_WARNINGS    // Visual Studio 2019���� scanf ��� �� �ʿ�
#include <stdio.h>

int main(void)
{
	int num;

	printf("����? :");
	scanf("%d", &num);

	printf("%d ", num); // do while�� while�� �ٲ� ��, do while�� ���� ��� ���� ������ ÷ �ѹ��� �����ϴϱ� while�� ���� �ѹ� ��������� ������ ����.

	num /= 2;

	while (num > 0)
	{
		printf("%d ", num);
		num /= 2;
	}

	return 0;


}
*/
//��� ���
/*
���� ? : 10
10 5 2 1
*/

// �� do while���� for������
#define  _CRT_SECURE_NO_WARNINGS    // Visual Studio 2019���� scanf ��� �� �ʿ�
#include <stdio.h>

int main(void)
{
	int num;
	printf("����? :");
	scanf("%d", &num);

	printf("%d ", num);
	num /= 2;

	for (; num > 0; num /= 2) // �ʱ�� �Ƚ�����. ������ /2�� num���� �˾Ƽ� �ʱⰪ���� �� ����.
		printf("%d ", num);

	return 0;

}
//��� ���
/*
����? :10
10 5 2 1
*/
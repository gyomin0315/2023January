//odd_sum.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf ����� ���� �ʿ�
#include <stdio.h>

int main(void)
{
	int num, sum = 0;

	while (1)
	{
		printf("����?: (���� �Է½� ����.)");
		scanf("%d", &num);

		if (num < 0) break;

		else if (num % 2 == 0) continue;

		else
		{
			sum += num;
		}

	}

	printf("�Է� �� �� �� Ȧ���� ������ : %d", sum);
	return 0;


}
*/
//��� ���
/*
����?: (���� �Է½� ����.)10
����?: (���� �Է½� ����.)20
����?: (���� �Է½� ����.)13
����?: (���� �Է½� ����.)17
����?: (���� �Է½� ����.)-7
�Է� �� �� �� Ȧ���� ������ : 30
*/

// goto.c
/*
#include <stdio.h>

int main(void)
{
	int i;

	for (i = 10; i > 0; i--)
	{
		if (i % 7 == 0)
			goto quit;
		printf("%d ", i);
	}

	quit:
		{
			printf("\ni %% 7�� 0�� ���ڿ� �ٴٶ���.");
		}

		return 0;

	


}
*/
// quit�Ҷ� �����ݷ��� �ƴ� �ݷ� ���°ſ� ����
// goto�� �� �Ⱦ��°� ����. �������� �� �ϳ��� ���°���. �ֳ��ϸ�, ���а� ���������� �Ʒ��� �ٽ� �� ��ǻ�Ͱ� ����ؾ��ϱ� ����.
// ����ؼ� ��ø�Ǵ� �ݺ����� ������, goto�� ���ԵǸ� �ѹ��� �������� �� ����. break ���� �Ǹ� ��� break�� �������.(�ݺ����� ������ ��ø�Ǿ� ������ break;�� ������ ����� !)
/*
[����� ���� �Լ�]
- main() �Լ� �ܿ� ����ڰ� �����ϴ� �Լ�
- �Լ����� ������ �ۼ����� ������.
*/

// hi.c
/*
#include <stdio.h>

void hi(void)
{
	printf("Hi !\n");
}

void bye() // �Ű������� void��� ���� ���� !
{
	printf("Bye !\n");

}

int main(void)
{
	hi(); // �̷������� ����� ���� �Լ��� ȣ���� �� ����.
	bye();
	hi();
	bye();
	bye();
	return 0;

}
*/
//��� ���
/*
Hi !
Bye !
Hi !
Bye !
Bye !

*/

/*
��ǻ�� ��ü�� �ʿ�� �ϴ� �Լ� (main�Լ�) �� �ƴ϶�� ��ü�� ����� ���� �Լ���.
��, �ڿ� ()�� ������ ���� �� �Լ�.
������ ����
1. main���� ���� ���� ���� ! �� ������ �Ʒ��� ��ĵ�ϸ鼭 �����Ϸ��� hi, bye�Լ��� ����.
2. main �ȿ��� ����� ���� �Լ� ������ �ٽ� ���� �ö󰡼� ���� ��, main���� �� �����ٷ� �Ѿ.
3. ���� ���ٰ� �Ʒ��� ���ٰ� �ϴ� ������, main�Լ� �ȿ��� ����� ���� �Լ��� ȣ��. 
*/

// hi.c (2)
/*
#include <stdio.h>

void hi()
{
	printf("Hi !\n");
}
void bye()
{
	printf("Bye !\n");
}

int main(void)
{
	printf("%d %d\n", hi, bye); // ����� ���� �Լ� hi, bye�� �ּҸ� 10������
	printf("%u %u\n", hi, bye); 
	printf("%p %p\n", hi, bye);
	hi();
	bye();
	hi();
	bye();
	hi();
	return 0;


}
*/
// ��� ���
/*
-564784187 -564784182
3730183109 3730183114
00007FF7DE5613C5 00007FF7DE5613CA
Hi !
Bye !
Hi !
Bye !
Hi !
*/

// hi.c (3)
#include <stdio.h>

void hi(void); // �Լ� ���� �κ�.
void bye(void); 

int main(void)
{
	hi();
	bye();
	hi();
	bye();
	return 0;


}

void hi(void)
{
	printf("HI !\n");
}
void bye(void)
{
	printf("Bye !\n");
}
// ��� ���
/*
HI !
Bye !
HI !
Bye !

*/

/*
�Լ� ���� �κ� �߰�.
�����Ϸ��� ������ �Ʒ��� �� ��ĵ�ϴ� ������ ó���ϱ� ������,
���� �Լ� ���� �κ��� ������ ���� ������, main�Լ����� hi()�� ������ ���� ������.
�׷��� �Լ��������� ���� ���Ǹ� ���ִ°���.���κ��� �Լ� ����, �Ʒ��κ��� �Լ� �����̶�� ��. �Լ� ������ �߿� !
���� ó���� ����� �����Լ��� ���� ���ִ°� C++, JAVA���� ���� ��. main�� ���� �ö���°� C�ۿ� ����.
�Լ� ������ �ݵ�� �����ݷ� �־���� !
*/

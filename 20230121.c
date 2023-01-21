// break.c
/*
#include <stdio.h>

int main(void)
{
	for (int i = 10; i > 0; i--) // i>0 �� ������ �Ǹ� for���� Ż��(���� Ż�� ���� 1)
	{
		if (!(i % 7))      // i % 7 = 1 �� �Ǹ� break; �����ؼ� for������ �ƿ� Ż�� �ع����� ��. (���� Ż�� ���� 1)
			break;
		printf("%d ", i);
	}
	return 0;

}
*/
// ��� ���
/*
10 9 8
*/

// menu.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf ����� ���� �ʿ�
#include <stdio.h>

int main(void)
{
	int menu;

	while (1) // ���� ����
	{

		

		printf("0. ����\n");
		printf("1. ���� ����\n");
		printf("2. ���� ����\n");
		printf("3. ���� ����\n");
		printf("����:");
		scanf("%d", &menu);

		if (menu == 0)
		{
			printf("���� !");
			break;
		}

		switch (menu)
		{
		case 1:
			printf("���� ���� �޴��� �����ϼ̽��ϴ�.\n");
			break;
		case 2:
			printf("���� ���� �޴��� �����ϼ̽��ϴ�.\n");
			break;
		case 3:
			printf("���� ���� �޴��� �����ϼ̽��ϴ�.\n");
			break;

		}

	}

	return 0;
}
*/
// ��� ���
/*
0. ����
1. ���� ����
2. ���� ����
3. ���� ����
����:2
���� ���� �޴��� �����ϼ̽��ϴ�.
0. ����
1. ���� ����
2. ���� ����
3. ���� ����
����:3
���� ���� �޴��� �����ϼ̽��ϴ�.
0. ����
1. ���� ����
2. ���� ����
3. ���� ����
����:0
���� !
*/

// continue.c

#include <stdio.h>

int main(void)
{
	int i;

	for (i = 10; i > 0; i--)
	{
		if (!(i % 3))
			continue;
		printf("%d ", i);

	}
	return 0;
}
// ��� ���
/*
10 8 7 5 4 2 1
*/

// continue ������ ������ for�������� ������ �κ����� �̵��ϰ�, while�������� ���ǽ� �κ����� �̵��Ѵ�. do while�� ���������� ���ǽ� �κ��� ���̵�
// i % 3�� 0 �϶� continue ������ ������, �Ʒ��ִ� printf�� �������� �ʰ�, �״�� ���������� ���� ���α׷���.
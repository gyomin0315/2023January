// nested_for.c
/*
#define  _CRT_SECURE_NO_WARNINGS        // scanf ����� ���� �ʿ�
#include <stdio.h>

int main(void)
{
	int width, height;
	char ch;
	int i, j;

	printf("���簢���� ���� ����?");
	scanf("%d%d", &width, &height);
	printf("���ڴ�?");
	scanf(" %c", &ch); // %c�տ� �ݵ�� ������ �ϳ� �־����. �տ��� ���簢���� ���� ���̸� �ް��� ���� Ű �����ٵ�, �� ����Ű�� ���ڷν� ���ڸ� scan�ؾ� �� ������ ������.
	// �׷��� �� �����̽��� ���� ���ڸ� �����ض� ��� �ǹ̷� %c�տ� ������ ����. scanf���� �ռ� ���ڸ� �Է� �޾����� �ݵ�� �׷�����.
	// scanf���� ��ĭ�� ���� ���� �����϶�� �ǹ�.


	for (i = 0; i < height; i++)
	{ 
	
		for (j = 0; j < width; j++)
		
			printf("%c", ch);

		printf("\n");
		
	}
	

	return 0;


}
*/
//��� ���
/*
���簢���� ���� ����?10 20
���ڴ�?a
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa

*/

// nested_for.c�� while ������ ����.
/*
#define  _CRT_SECURE_NO_WARNINGS        // scanf ����� ���� �ʿ�
#include <stdio.h>

int main(void)
{
	int width, height;
	int i, j;
	char ch;

	printf("���� ���̸� ���ÿ� :");
	scanf("%d %d", &width, &height);
	printf("���ڴ�?:");
	scanf(" %c", &ch);

	i = 0;
	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			printf("%c", ch);
			j++;

		}
		printf("\n");
		i++;
	}



	return 0;

}
//��� ���
/*
* ���簢���� ���� ����?10 20
���ڴ�?a
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa
aaaaaaaaaa


*/
// i=0, j=0 �ʱ�� ��ġ�� ���� ! �ʱ���� �����ϸ� while�� �ٷ� ���� ���ִ°� ����.

// while.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf ����� ���� �ʿ�
#include <stdio.h>

int main(void)
{
	int i, num;
	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &num);

	i = 1;
	while (i < num)
	{
		printf("%d ", i);
		i += 2;
	}

	return 0;

}
*/
//��� ���
/*
������ �Է��Ͻÿ� :10
1 3 5 7 9
*/

// while�� for��

#define  _CRT_SECURE_NO_WARNINGS    // scanf ����� ���� �ʿ�
#include <stdio.h>

int main(void)
{
	int i, num;
	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &num);

	for (i = 1; i < num; i += 2)
	{
		printf("%d ", i);

	}

	return 0;
}
//��� ���
/*
������ �Է��Ͻÿ� :10
1 3 5 7 9
*/



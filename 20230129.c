/*
#include <stdio.h>

int main(void)
{
	char* m[2] = { "abc","def" };

	printf("%s %s\n", *m, *(m + 1));

	printf("%s %s %s\n", m[0], m[0] + 1, (*m + 2));

	printf("%s %s %s", m[1], m[1] + 1, m[1] + 2);

	return 0;
}
*/
//��� ���
/*
abc def
abc bc c
def ef f
*/

// *m[2] ����, �׳� m�� ���� �� �迭�� ������ ���� ����ü�� ù��° �ּڰ��� �ǹ���.
// �� "abc"��� ���ڿ��� ù��° �ּڰ��� *m�� �Ǿ���� ! �׳� m�� �ƴ϶�. 

/*
#include <stdio.h>

int main(void)
{

	char* m[] = { "abc","def" };

	printf("%s %s", *m, *(m + 1));

	return 0;


}
*/
//��� ���
/*
abc def
*/
/*
#include <stdio.h>


int main(void)
{
	char* m = "kor"; // m�� ������ ����. kor�̶�� ���ڿ��� ù��° �ּڰ��� �Ҵ������.

	int i;

	for (i = 0; i <= 2; i++)
	{

		printf("%c", m[i]); // m�� �迭�� �ƴѵ�, �迭�� ���·� �������. 

	}
	return 0;


}
*/
//��� ���
/*
kor
*/

//������ �迭�� �ƴѵ� ��� �迭�� ����ߴ���...?
// m[i] = *(m+i) �ϱ� �׳� m[i] ó�� ������. m�� ���� �迭�� �ƴ� !

#include <stdio.h>

int main(void)
{
	char m;
	char* mp;
	char** mpp; // ���� ������ ����

	m = 'a';
	mp = &m;
	mpp = &mp;


	printf("%u %u\n", &m, mp);
	printf("%c %c\n", m, *mp);

	printf("%u %u\n", &mp, mpp);
	printf("%u %u\n", mp,*mpp);

	printf("%c", **mpp);

	return 0;


}
//��� ���
/*
3791123764 3791123764
a a
3791123800 3791123800
3791123764 3791123764
a
*/

// ���������͵� �����Ϳ� ���������� 4or 8byte��. 
// ���������ʹ� ������ ���� ��ü�� �ּڰ��� ���ٰ� ����. 



/*
#include <stdio.h>

int main(void)
{
	char m[] = { 'a','b','c','\0' }; // m�̶�� �迭�� ���ڰ� 4���� �����. 1byte �� a , b, ,c, NULL ��.
	printf("%s\n", m); // %s ���ڿ� ����� �޺κп� �ݵ�� �ּڰ��� ���;��Ѵ�. m�̶�� �ּҺ��� NULL�� ���ö����� ���ڿ��� ����϶�� �ǹ� !

	
	return 0;



}
*/
//��� ���
/*
abc

*/

/*

#include <stdio.h>

int main(void)
{
	char m[] = { 'a','b','c' };
	printf("%s", m);
	return 0;
}
*/
//��� ���
/*
abc��������������������������������?�PW?
*/

// %s ����ߴµ�, NULL�� �����ϱ� abc�ڿ� �����Ⱚ�� ����. 
// C,C++������ ���ڿ� ���� NULL�� �� ��.

/*
#include <stdio.h>


int main(void)
{
	char m[] = "student", * p; // m[8]���� 8�� ����. ���ڿ��� �迭�� ������������, NULL�� �˾Ƽ� ��.

	p = m;

	printf("%s %s %s", m, p, m + 2);
	return 0;



}
*/
//��� ���
/*
student student udent
*/

/*
#include <stdio.h>

int main(void)
{
	char m[] = "student", * p;

	p = m + 4;

	int i;

	for (i = 0; i <= 4; i++)
	{
		printf("%s\n",p - i);
	}

	return 0;


}
*/
//��� ���
/*
ent
dent
udent
tudent
student

*/

/*
#include <stdio.h>


int main(void)
{
	char m[][4] = { "abc", "def" },*p;

	p = m;

	printf("%s %s", p, p+4);

	// printf("%s %s" , m,m+1);

	return 0;





}
*/
// ��� ���
/*
abc def
*/

/*
p���ٰ� m�迭�� ù��° ���� p=m�� ���� �־���ٰ� �ؼ� p+1�� m+1�� �Ǵ°� �ƴ�. 
m+1�� m�迭�� �ι�° �� ���� �ּ��̰�, p+1�� m�� ���� ù��° �ּڰ� �ٷ� ���� �ּڰ��� ��Ÿ��.
*/


#include <stdio.h>

int main(void)
{
	char* p = "abc"; // abc��� ���ڿ��� �ּҰ� p�� ��. abcNULL�̶�� ���ڿ��� �ٸ� �����ҿ� �ڵ����� ����.

	printf("%s\n", p);
	
	p = "def";

	printf("%s\n", p);

	return 0;

}

//��� ���
/*
abc
def

*/


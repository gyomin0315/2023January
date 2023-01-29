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
//출력 결과
/*
abc def
abc bc c
def ef f
*/

// *m[2] 에서, 그냥 m을 쓰면 이 배열형 포인터 변수 그자체의 첫번째 주솟값을 의미함.
// 저 "abc"라는 문자열의 첫번째 주솟값은 *m이 되어야함 ! 그냥 m이 아니라. 

/*
#include <stdio.h>

int main(void)
{

	char* m[] = { "abc","def" };

	printf("%s %s", *m, *(m + 1));

	return 0;


}
*/
//출력 결과
/*
abc def
*/
/*
#include <stdio.h>


int main(void)
{
	char* m = "kor"; // m은 포인터 변수. kor이라는 문자열의 첫번째 주솟값을 할당해줬다.

	int i;

	for (i = 0; i <= 2; i++)
	{

		printf("%c", m[i]); // m은 배열이 아닌데, 배열의 형태로 출력했음. 

	}
	return 0;


}
*/
//출력 결과
/*
kor
*/

//선언이 배열이 아닌데 어떻게 배열로 출력했는지...?
// m[i] = *(m+i) 니까 그냥 m[i] 처럼 쓴거임. m이 절대 배열은 아님 !

#include <stdio.h>

int main(void)
{
	char m;
	char* mp;
	char** mpp; // 이중 포인터 선언

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
//출력 결과
/*
3791123764 3791123764
a a
3791123800 3791123800
3791123764 3791123764
a
*/

// 이중포인터도 포인터와 마찬가지로 4or 8byte임. 
// 이중포인터는 포인터 변수 자체의 주솟값이 들어간다고 생각. 


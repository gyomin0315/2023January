
/*
#include <stdio.h>

int main(void)
{
	char m[] = { 'a','b','c','\0' }; // m이라는 배열에 문자가 4개가 들엉감. 1byte 씩 a , b, ,c, NULL 들어감.
	printf("%s\n", m); // %s 문자열 출력은 뒷부분에 반드시 주솟값이 나와야한다. m이라는 주소부터 NULL이 나올때까지 문자열을 출력하라는 의미 !

	
	return 0;



}
*/
//출력 결과
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
//출력 결과
/*
abc儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆儆?륯W?
*/

// %s 출력했는데, NULL이 없으니까 abc뒤에 쓰레기값들 나옴. 
// C,C++에서만 문자열 끝에 NULL이 꼭 들어감.

/*
#include <stdio.h>


int main(void)
{
	char m[] = "student", * p; // m[8]에서 8이 생략. 문자열을 배열로 선언해줬으면, NULL은 알아서 들어감.

	p = m;

	printf("%s %s %s", m, p, m + 2);
	return 0;



}
*/
//출력 결과
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
//출력 결과
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
// 출력 결과
/*
abc def
*/

/*
p에다가 m배열의 첫번째 값을 p=m과 같이 넣어줬다고 해서 p+1이 m+1이 되는건 아님. 
m+1은 m배열의 두번째 행 시작 주소이고, p+1은 m의 가장 첫번째 주솟값 바로 다음 주솟값을 나타냄.
*/


#include <stdio.h>

int main(void)
{
	char* p = "abc"; // abc라는 문자열의 주소가 p에 들어감. abcNULL이라는 문자열은 다른 기억장소에 자동으로 잡힘.

	printf("%s\n", p);
	
	p = "def";

	printf("%s\n", p);

	return 0;

}

//출력 결과
/*
abc
def

*/


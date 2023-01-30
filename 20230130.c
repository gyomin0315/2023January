// %s 뒤에 주솟값 넣었을 때, %s로 출력되는 값은 그 주솟값이 가리키는 값임 !

/*
#include <stdio.h>

int main(void)
{
	char* mp;
	char **mpp;

	printf("*mp size : %d, *mpp size: %d", sizeof(*mp), sizeof(**mpp));

}
*/

// 위 내가 만든 프로그램 보면 char형으로 포인터 변수 선언했을때는, 크기 1byte인거 알 수 있음.
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
//출력 결과
/*
kor
or
555392112 2989684200
kor
k
q

*/

// 메모리 그림 그려가며 확인.
/*
#include <stdio.h>

void swap(int* px, int* py); // 매개변수를 포인터 변수로 선언. 

int main(void)
{
	int a = 1, b = 2;
	printf("a = %d , b = %d\n", a, b);
	swap(&a, &b); // 변수의 주소를 전달 
	printf("a = %d , b = %d", a, b);
	return 0;
}

void swap(int* px, int* py)
{
	int temp;
	temp = *px; // temp =1
	*px = *py; // *px (여기서는 a의 값) = 2
	*py = temp; // *py (여기서는 b의 값ㅅ) = 1


}
*/
//출력 결과
/*
a = 1 , b = 2
a = 2 , b = 1
*/

/*
왜 굳이 포인터를 이용했을까 ? 매개변수가 포인터형 변수가 아니고, 일반 변수라면, 값을 받았을때, 사용자 정의 함수 안에서만 swap을 하고, return이 없으니까
그냥 사용자 정의 함수 나왔을때, 다시 값이 초기화 되어버려서 swap 이 안됨.
But, 포인터 변수를 사용하게 되면, 주소를 통해 그 변수로 직접 들어가서 바꾸기 때문에, 사용자 정의 함수 빠져나가도 값이 바뀐채로 그대로 있음.
*/


// 포인터를 쓰지 않았을 때

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

//출력 결과
/*
a = 1 , b = 2
x = 1 , y = 2
x = 2 , y = 1
a = 1 , b = 2
*/

// main에서 바뀐 값을 돌려받지 못해, a,b값이 그대로임. 
// 둘 다 그림 그려가면서 다음 복습때 확인 해볼 것. 


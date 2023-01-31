
// 어제 두번째 프로그램 수정 
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
	printf("%c\n", *(* mp + 1)); // 수정부분
	return 0;
}
*/

//출력 결과
/*
kor
or
1333238800 3590256712
kor
k
o
*/

// swap 복습

/*
#include <stdio.h>
//void swap(int , int );
void swap(int*, int*);


int main(void)
{
	int a = 1, b = 2;
	swap(&a,&b);
	printf("a = %d, b = %d", a, b);

	return 0;


}

void swap(int *x,int *y)
{

	int temp;

	temp = *x;
	*x = *y;
	*y = temp;

}

// 함수 원형 부분에서, 포인터 변수가 매개변수일때, 매개변수를 단순히 int형이라고 해주면 출력 결과가 안나옴.
// 매개변수가 주소를 받는다라고 , 반드시, 데이터형 뒤에 포인터 (*)를 붙여줘야 출력 제대로 나온다.
// 함수 구현쪽에서는 다 제대로 써주는거 당연하고. 
*/

// array_size.c
/*
#include <stdio.h>

int main(void)
{
	int arr[5];
	int size, i;

	printf("배열의 전체 크기는 : %d\n", sizeof(arr));

	size = sizeof(arr) / sizeof(arr[0]); // 이런 방법으로 많이 배열의 원소의 갯수 구함 ! (전체사이즈)/(원소 하나의 사이즈)

	printf("배열의 원소의 갯수는 : %d\n", size);

	for (i = 0; i < size; i++)
	{
		arr[i] = 0;
		printf("arr[%d] = %d\n", i, arr[i]);

	}
	return 0;
	

}
*/

//출력 결과
/*
배열의 전체 크기는 : 20
배열의 원소의 갯수는 : 5
arr[0] = 0
arr[1] = 0
arr[2] = 0
arr[3] = 0
arr[4] = 0
*/

// default_array.c

#include <stdio.h>
#define ARR_SIZE 5   // 배열의 크기를 나타내는 매크로 상수. 컴파일 하기 전에는 ARR_SIZE라는 문자를 5라는 문자로 치환했다가, 컴파일이 되면 그때서야 5라는 정수로 바뀜. = 표시 없는거에 주의 !

int main(void)
{
	int arr[ARR_SIZE] = { 1,2,3,4,5 }; // 배열의 크기에 알맞게 초기화
	int x[ARR_SIZE] = { 1,2,3 }; // 초기화 할때 초기값이 부족하면 나머지는 0으로 자동적으로 채워짐.
	int y[ARR_SIZE] = { 0 }; // 배열 전체를 0으로 초기화한다. (초기화할때 초기값 부족한건 나머지를 0으로 다 자동적으로 채워준다고 했으니까.)
	int z[] = { -1,0,1 }; // 초기화를 시켜준다는 가정 하에, 배열의 크기 생략 가능하다.

	int i, size;

	printf("arr = ");

	for (i = 0; i < ARR_SIZE; i++)
	{
		printf("%3d", arr[i]);
		
	}
	printf("\n");
	printf("x = ");
	for (i = 0; i < ARR_SIZE; i++)
	{
		printf("%3d", x[i]);
	
	}
	printf("\n");
	printf("y = ");
	for (i = 0; i < ARR_SIZE; i++)
	{
		printf("%3d", y[i]);
		
	}
	printf("\n");

	size = sizeof(z) / sizeof(z[0]);

	printf("z = ");
	for (i = 0; i < size; i++)
	{
		printf("%3d", z[i]);
		
	}

	printf("\n");

	return 0;


}
//출력 결과
/*
arr =   1  2  3  4  5
x =   1  2  3  0  0
y =   0  0  0  0  0
z =  -1  0  1
*/


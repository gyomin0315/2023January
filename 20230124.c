// factorial.c
/*
#include <stdio.h>

int get_factorial(num)
{
	int i;
	int result=1;

	for (i = 1; i <= num; i++)
	{
		result *= i;
	}

	return result;

}

int main(void)
{
	int i;
	int fact;
	for (i = 0; i <= 5; i++)
	{
		int result = get_factorial(i);
		printf("%d ! = %5d\n", i, result);

	}

	return 0;

}
*/
/*

함수는 function을 의미. 특정 기능을 제공하는 코드를 묶어서 이름을 붙임.
함수를 이용하면, 코드를 함수로 한 번만 작성해두고 여러 번 호출해서 사용할 수 있다.
-함수의 장점
i) 코드가 중복되지 않으므로 간결하고 알아보기 쉽다.
ii) 코드의 재사용성이 높다.
iii) 프로그램의 모듈화(하나하나 부품처럼 사용 가능)
iv) 프로그램을 유지/보수하기 쉽다. (모듈화 되었으니까.)

함수의 종류
i) main
ii) 라이브러리 함수 (ex. scanf, printf)
iii) 사용자 정의 함수 (내가 직접 만든 거)

매개변수 목록(1)
- 매개변수(parameter)
1) 함수를 호출한 곳에서 함수 안으로 전달되는 값을 저장하는 변수이다.
2) 함수를 호출하는 쪽과 함수 내부를 연결한다.

- 인자(argument) 또는 인수
1) 함수를 호출할 때 실제로 전달되는 값

함수 선언의 필요성. (함수 원형의 필요성)
- ~라는 함수를 만들어 놨으니까 이거 언제든지 호출할 수 있고, 에러 내보내면 안되다는 뜻으로 미리
컴파일러한테 말해줘야함. 에러 내보내지 말라고 미리 선언을 해놓고 , 나중에 함수 정의해주면 됨.
컴파일러는 위에서 아래로 순서대로 처리하기 때문에, 함수 원형 미리 선언 안해주면 에러 남.
*/

/*
(1) 매개변수 있음 / 반환하는 값 있음.
(2) 매개변수 있음 / 반환하는 값 없음.
(3) 매개변수 없음 / 반환하는 값 있음.
(4) 매개변수 없음 / 반환하는 값 없음.

*/

// area.c (1)
/*
#include <stdio.h>
double get_area(double radius)
{
	const double PI = 3.14;
	double result = PI * radius * radius;
	return result;

}

int main(void)
{
	int i;
	for (i = 1; i <= 5; i++)
	{
		double result = get_area(i); // 이떄 get_area에 들어가는 i는 int에서 double로 바꿔준 후에 들어간다.
		printf("r= %d, 원의 면적 = %lf\n", i, result);
		
	}

	return 0;

}
*/
//출력 결과
/*
r= 1.000000, 원의 면적 = 3.140000
r= 2.000000, 원의 면적 = 12.560000
r= 3.000000, 원의 면적 = 28.260000
r= 4.000000, 원의 면적 = 50.240000
r= 5.000000, 원의 면적 = 78.500000

*/


// area.c (2)
/*
#include <stdio.h>
void get_area(double radius)
{
	const double PI = 3.14;
	double result = PI * radius * radius;
	printf("r= %lf, 원의 면적 = %lf\n", radius, result);

}

int main(void)
{
	int i;
	for (i = 1; i <= 5; i++)
	{
		get_area(i);
		

	}

	return 0;

}
*/

//출력 결과
/*
r= 1.000000, 원의 면적 = 3.140000
r= 2.000000, 원의 면적 = 12.560000
r= 3.000000, 원의 면적 = 28.260000
r= 4.000000, 원의 면적 = 50.240000
r= 5.000000, 원의 면적 = 78.500000

*/

//area.c (3)

#include <stdio.h>

double get_area(void);

int main(void)
{
	int r;
	for (r = 1; r <= 5; r++)
	{
		printf("r=%d, 원의 면저 = %.2f\n", r, get_area()); //main에서 함수를 호출할때는 안에 절대 void 넣으면 안됨.

	}

	return 0;

}

double get_area(void)
{
	const double PI = 3.14;
	static radius = 1; // 원래 static int. int는 생략 가능. 다른 메모리를 잡는거는 스택 영역(RAM)으로 들어감. But, 여기 있는 radius는
					   // 데이터영역이라고 하는 곳에 생김. 데이터 영역에서는 사용자 정의 함수가 끝나고 메인으로 돌아간다고 해서 사라지거나 초기화 되지 않음.
					   // 다른 애들은 왔다갔다 할때 없어졌다가 생기고 함. 
	double area = PI * radius * radius;
	radius++;
	return area;

}
//출력 결과
/*
r=1, 원의 면저 = 3.14
r=2, 원의 면저 = 12.56
r=3, 원의 면저 = 28.26
r=4, 원의 면저 = 50.24
r=5, 원의 면저 = 78.50

*/

// 메모리에 저장할 때 스택영역, 데이터영역으로 나뉨. PI, area, r은 스택 영역이지만, radius는 데이터영역임. 
// 데이터 영역은 다른사람이 쓰고 가고 쓰이지 않는다면 0으로 깨끗하게 초기화 됨. 스택영역은 꺠끗하게 초기화 되지 않음. 
// -> 프로그램이 종료될때가 되어서야 데이터 영역은 소멸하고, 스택 영역은 함수 호출이 끝나고 나면 소멸. 
// 데이터 영역은 반드시 초기화를 시켜줘야하고, 초기화 안시켜주면 0으로 자동 초기화 됨. 
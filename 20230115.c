/*
문자형 정수형은 서로 바꿔서 출력 할 수 있음. 예를 들어 정수형 숫자 97을 %c로, 문자 'c'를 정수형으로 출력이 가능함.
단, 문자형은 1byte에 해당하고, 정수형은 2,4byte 가능.
short : 2byte, int:2/4byte, long:4byte, char:1byte, float:4byte, double:8byte

형식지정자 16진수 중 %x쓸때, %08x라고 쓰면, 8문자 폭에 맞춰서 16진수로 출력하고, 빈칸의 0 출력하라는 의미가 됨.
% #02x 같이 쓰면 ?
=> #의 의미는 16진수인지 8진수인지 정확하게 출력해달라는 의미. 16진수라면 0x가, 8진수라면 0이 출력됨. 그래서 출력해보면 앞에 0x가 붙음.
16진수인지 8진수인지 정확하게 알려주고, 2칸 잡아서 출력하되, 빈칸은 0으로 출력해달라는 의미.

오버플로우란? 값의 범위를 벗어남을 의미. 유효 범위 밖의 값을 저장하면, 유효 범위 내의 값으로 자동 설정됨.

- 이스케이프 시퀀스

'\n' : 줄바꿈
'\0' : NULL 문자
'\t' : 수평 탭
'\"' : 큰따옴표
'\\' : 역슬래시

큰따옴표와 역슬래시는 문자열 안에서 특별하게 표기해야 하는 문자. 특별하게 표기하지 않으면 문자열안에서 컴퓨터가 정말 어떤 기능을 하는 큰따옴표나 역슬래시라고 생각해버림.
위 3개는 제어문자.
\를 쓰는 이유는 \뒤에 나오는 문자의 역할을 없애기 위해서임. \n이라면, 원래의 n의 기능을 없애겠다, \"라고 쓰면 원래의 큰따옴표의 기능을 없애고 정말 표시로써의 큰따옴표를 쓰겠다 라는 뜻.

줄바꿈은 2가지 의미가 포함. 줄바꿈을 하게 되면 콘솔에서 다음 라인으로 넘어가게 되는데,
커서가 밑줄로 이동하고 맨 앞으로 가거나, 맨 앞으로 갔다가 밑줄로 가거나 2가지 기능을 할 수 있음.
*/
// 급여 계산기 (다시)
/*
#define _CRT_SECURE_NO_WARNINGS     // scanf 사용을 위해서 필요
#include <stdio.h>
#define HOURLY_WAGE 9000

int main(void)
{
	int hours, total_wage;

	printf("일한 시간을 적으시오 :");
	scanf("%d", &hours);

	total_wage = hours * HOURLY_WAGE;

	printf("시간당 급여는 : %d\n", HOURLY_WAGE);
	printf("총 급여는 : %d", total_wage);

	return 0;

}
// 출력 결과
*/
/*
일한 시간을 적으시오 :10
시간당 급여는 : 9000
총 급여는 : 90000
*/

// #define HOURLY_WAGE 9000 에서 HOURLY_WAGE와 9000은 모두 컴파일하기 전에는 문자열임.
// 컴파일하기 전, 전처리 할때 HOURLY_WAGE라는 문자열을 9000이라는 문자열로 대체하고, 
// 컴파일을 할 때 이 9000을 정수형으로 바꿈.

// const 변수
/*
#include <stdio.h>

int main(void)
{
	const float PI = 3.14; // const는 이 변수의 값을 상수화 시키겠다는 의미. 관례상 대문자로 사용한다.


	printf("PI = %f", PI);

	// PI = 3.15; 와 같이 한번 상수화된 변수는 다시 변경 할 수 없음.

	return 0;


}
*/
// 출력 결과
/*
PI = 3.140000
*/

// arithmetic.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;

	printf("2개의 정수를 입력하시오:");
	scanf("%d %d", &x, &y);


	printf("+%d = %d\n", +x, x);
	printf("-%d = %d\n", -y, y);
	printf("%d + %d = %d\n", x,y,x+y);
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d * %d = %d\n", x, y, x * y);
	printf("%d / %d = %d\n", x, y, x / y);
	printf("%d %% %d = %d\n", x, y, x % y);
	// 이항 연산자로 사용되는 %는 나머지 연산을 의미. 화면에 %를 문자 그대로 쓰려면 이 %는 형식 지정자가 아니라는 뜻으로 앞에
	// %를 하나 더 붙여줌. 이때 %앞에 붙여주는게 역슬래시가 아님에 주의 !
	// 또, %하나 당 % 하나를 문자 그대로라고 말해줄 수 있음. 즉, 문자 그대로의 %를 2개 쓰고싶다면, 앞에 %를 하나가 아닌 2개를 붙여서 %%%%라고 해야 %%처럼 나옴.
	return 0;

}
*/
//출력 결과
/*
2개의 정수를 입력하시오:20 3
+20 = 20
--3 = 3
20 + 3 = 23
20 - 3 = 17
20 * 3 = 60
20 / 3 = 6
20 % 3 = 2
*/

// increment.c

/*
#include <stdio.h>

int main(void)
{
	int stock1 = 10, stock2 = 10;
	int current;

	current = --stock1; // stock1을 먼저 감소시킨 후에 current에 넣게 됨. (전위형)

	printf("current = %d, stock1 = %d\n", current, stock1);

	current = stock2--; // stock2를 먼저 current에 넣은 후에 stock2를 감소시키게 됨.(후위형)

	printf("current = %d, stock2 = %d", current, stock2);

	return 0;

}
*/
//출력 결과
/*
current = 9, stock1 = 9
current = 10, stock2 = 9
*/
/*
stock1이라는 기억장소, stock2라는 4byte 기억 장소를 10으로 초기화 시켜줬고,
current라는 4byte짜리 기억 장소는 선언만 해주고 아직 초기화 안시켜줬음. 안에는 쓰레기값 있음.

--stock1에서 stock1의 기억장소에서 1을 먼저 빼고 current에 넣어줬다면, stock2--에서는 stock2의 기억장소에 있는 10을 먼저 넘겨주고, 그 다음에 하나 줄였음.
*/

/*
C는 단항, 이항, 삼항 있음.

단항 연산자 (+와 -, 증감연산자), 삼항 연산자(x?y:z --> x가 참이면 y, 거짓이면 z),를 제외한 나머지는 대부분
이항 연산자임.
관계연산자에서 크거나 같다, 작거나 같다 순서가 우리나라 어법이랑 똑같음. but, 같지 않다는 !=처럼 써줘야함.
*/

//assign.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int width, height, area;

	printf("폭을 쓰시오:\n");
	scanf("%d", &width);
	printf("높이를 쓰시오:\n");
	scanf("%d", &height);
	area = width * height;

	printf("넓이는 : %d", area);
	return 0;

}
*/
//출력 결과
/*
폭을 쓰시오:
10
높이를 쓰시오:
20
넓이는 : 200
*/

// =는 assign 기호임. 오른쪽 거를 왼쪽에다 넣겠다. 수학적 의미의 같다가 아님.

// compound.c
/*
#include <stdio.h>

int main(void)
{
	int w = 10, x = 20, y = 10, z = 7;
	int result = 0;

	result += w; //// result = result + w와 같은 의미. 0+10을 result에 대입한다.
	printf("result = %d\n", result);

	result *= x; // result = result*x와 같은 의미. 10*20이 됨.
	printf("result = %d\n", result);

	result /= y; // result = result/y의 의미
	printf("result = %d\n", result);

	result %= z; // result = result%z의 의미
	printf("result = %d\n", result);

	result *= (1 + 2); // result = result*3의 의미

	printf("result = %d\n", result);

	return 0;

}
*/
//출력 결과
/*
result = 10
result = 200
result = 20
result = 6
result = 18
*/

// 둘이 똑같은데 왜 result += x 같은걸 쓸까? result = result + x를 컴퓨터가 이해하는 것 보다,
// 컴퓨터는 result += x를 훨씬 빠르게 이해함. 뒤에서 나올 i++도 마찬가지로, i=i+1과 같지만, i++가 더 빨라서 이렇게 씀.

// comparison.c
/*
#define _CRT_SECURE_NO_WARNINGS     // scanf 사용을 위해서 필요
#include <stdio.h>

int main(void)
{
	int x, y;
	printf("서로 비교할 정수 2개를 입력하시오 :");
	scanf("%d %d", &x, &y);

	printf("%d > %d -> %d\n", x, y, x > y);
	printf("%d < %d -> %d\n", x, y, x < y);
	printf("%d >= %d -> %d\n", x, y, x >= y);
	printf("%d <= %d -> %d\n", x, y, x <= y);
	printf("%d != %d -> %d\n", x, y, x != y);
	printf("%d == %d -> %d", x, y, x == y); // =를 2개 쓰면 같은지 아닌지 비교의 의미.
	return 0;
}
*/
//출력 결과
/*
서로 비교할 정수 2개를 입력하시오 :10 20
10 > 20 -> 0
10 < 20 -> 1
10 >= 20 -> 0
10 <= 20 -> 1
10 != 20 -> 1
10 == 20 -> 0
*/
// 비교문의 결과는 참, 거짓으로 나옴. 참이면 1, 거짓이면 0
// 단, 주의해야 할 점은 비교문 한정, 거짓이면 0이고 나머지 숫자는 다 참임. C++나 java는 true, false로 나오지만, 결국 안에서는 0과 1로 처리함.

// logical.c
/*
#define _CRT_SECURE_NO_WARNINGS     // scanf 사용을 위해서 필요
#include <stdio.h>

int main(void)
{
	int usage;

	printf("usage값을 넣으시오:");
	scanf("%d", &usage);

	if (usage >= 1000 && usage <= 2000)
	{
		printf("usage is in range");
	}
	else if (usage < 1000 || usage > 2000)
	{
		printf("usage is out of range");
	}
	return 0;

}
*/
//출력 결과
/*
usage값을 넣으시오:500
usage is out of range
*/

// &&는 논리적 또는, ||는 논리적 그리고를 의미. 또는은 하나라도 참이면 참, 그리고는 둘다 참이여야 참이다.
/*
#include <stdio.h>

int main(void)
{
	printf("1 && 1 --> %d\n", 1 && 1);
	printf("1 && 0 --> %d\n", 1 && 0);
	printf("0 && 1 --> %d\n", 0 && 1);
	printf("0 && 0 --> %d\n", 0 && 0);
	printf("1 || 1 --> %d\n", 1 || 1);
	printf("1 || 0 --> %d\n", 1 || 0);
	printf("0 || 1 --> %d\n", 0 || 1);
	printf("0 || 0 --> %d\n", 0 || 0);

	printf("!1 --> %d\n", !1); // !는 not의 의미.
	printf("!0 --> %d", !0);


	return 0;

}
*/
//출력 결과
/*
1 && 1 --> 1
1 && 0 --> 0
0 && 1 --> 0
0 && 0 --> 0
1 || 1 --> 1
1 || 0 --> 1
0 || 1 --> 1
0 || 0 --> 0
!1 --> 0
!0 --> 1
*/

//bitwise.c
/*
#include<stdio.h>

int main(void)
{
	unsigned int x = 0xab;
	unsigned int y = 0x0f;

	printf("%08x & %08x = %08x\n", x, y, x & y);
	printf("%08x | %08x = %08x\n", x, y, x | y);

	printf("%08x ^ %08x = %08x\n", x, y, x ^ y); // ^는 xor의 의미. xor : bit가 같으면 0 다르면 1
	printf("~%08x = %08x\n", x, ~x);
	return 0;

}
*/
//출력 결과
/*
000000ab & 0000000f = 0000000b
000000ab | 0000000f = 000000af
000000ab ^ 0000000f = 000000a4
~000000ab = ffffff54
*/
/*
and,or기호 &,|는 하나만 쓰면 bit단위로 연산하게 되고, 2개를 쓰면 논리 연산자가 된다.
not은 비트 연산할때는 ~를 쓰고, 논리 연산에는 !=를 씀.
xor는 비트 연산에만 있고, ^기호를 쓰게 됨.
*/

//shift.c
/*
#include <stdio.h>

int main(void)
{
	unsigned int x = 0xab;
	unsigned int z;

	printf("x = %#08x, %d\n", x,x);

	z = x >> 2;

	printf("z = %#08x, %d\n", z, z);

	z = x << 2;

	printf("z = %#08x, %d", z, z);

	return 0;


}
*/
//출력 결과
/*
x = 0x0000ab, 171
z = 0x00002a, 42
z = 0x0002ac, 684
*/
/*
>> : 오른쪽으로 bit shift, << : 왼쪽으로 bit shift.
>> 와 같은 기호를 shift 영ㄴ산자 라고 함. x>>2는 bit단위로 오른쪽으로 2칸 이동하겠다는 의미.
형식지정자 %후에 #을 붙였으면 16진수라면 0x를, 8진수라면 0을 붙여서 이게 몇진수인지 정확하게 표현하겠다는 의미.
>> 한번 할때마다 나누기 2의 효과 있음. 반대로, 왼쪽으로 한번 shift 할때마다 곱하기 2의 효과. 이건 양수 음수 모두 마찬가지 !
*/

// conditional.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int x, y;
	//int abs, min, max;

	printf("정수 2개를 입력하시오 :");
	scanf("%d %d", &x, &y);

	printf("%d의 절댓값은 : %d\n", x, x >= 0 ? x : -x);
	printf("%d의 절댓값은 : %d\n", y, y >= 0 ? y : -y);
	printf("둘중 더 큰 값은 : %d\n", x > y ? x : y);
	printf("둘중 더 작은 값은 : %d\n", x > y ? y : x);

	return 0;



}
*/
//출력 결과
/*
정수 2개를 입력하시오 :10 -20
10의 절댓값은 : 10
-20의 절댓값은 : 20
둘중 더 큰 값은 : 10
둘중 더 작은 값은 : -20
*/

// 삼항 연산자. ?와 : 동시에 쓰면 삼항 연산자이다. ?앞의 문장이 참이면 :의 앞을 출력하고, ?앞의 문장의 거짓이면 : 뒤를 출력한다.

// conversion.c
#define  _CRT_SECURE_NO_WARNINGS    // scanf 사용을 위해 필요
#include <stdio.h>

int main(void)
{
	int x, y;
	double ave;

	printf("정수 2개를 입력하시오:");
	scanf("%d %d", &x, &y);

	ave = (x + y) / 2; /// 이떄, ave의 값은 double이 아닌 int형으로 나옴. 정수형 입력이 되기 때문에, 컴퓨터에서 나오는 결과도 컴퓨터에서 정수 처리를 해버림.
	printf("%.2lf\n", ave);

	ave = (double)(x + y) / 2; // 그래서 명시적 형 변환 (강제적 형 변환) 으로 몫을 double로 구했음. 오른쪽 int형을 double처럼 8byte짜리로 생각함.

	printf("%.2lf\n", ave);

	return 0;
}
// 출력 결과
/*
정수 2개를 입력하시오:3 2
2.00
2.50
*/



















/*
������ �������� ���� �ٲ㼭 ��� �� �� ����. ���� ��� ������ ���� 97�� %c��, ���� 'c'�� ���������� ����� ������.
��, �������� 1byte�� �ش��ϰ�, �������� 2,4byte ����.
short : 2byte, int:2/4byte, long:4byte, char:1byte, float:4byte, double:8byte

���������� 16���� �� %x����, %08x��� ����, 8���� ���� ���缭 16������ ����ϰ�, ��ĭ�� 0 ����϶�� �ǹ̰� ��.
% #02x ���� ���� ?
=> #�� �ǹ̴� 16�������� 8�������� ��Ȯ�ϰ� ����ش޶�� �ǹ�. 16������� 0x��, 8������� 0�� ��µ�. �׷��� ����غ��� �տ� 0x�� ����.
16�������� 8�������� ��Ȯ�ϰ� �˷��ְ�, 2ĭ ��Ƽ� ����ϵ�, ��ĭ�� 0���� ����ش޶�� �ǹ�.

�����÷ο��? ���� ������ ����� �ǹ�. ��ȿ ���� ���� ���� �����ϸ�, ��ȿ ���� ���� ������ �ڵ� ������.

- �̽������� ������

'\n' : �ٹٲ�
'\0' : NULL ����
'\t' : ���� ��
'\"' : ū����ǥ
'\\' : ��������

ū����ǥ�� �������ô� ���ڿ� �ȿ��� Ư���ϰ� ǥ���ؾ� �ϴ� ����. Ư���ϰ� ǥ������ ������ ���ڿ��ȿ��� ��ǻ�Ͱ� ���� � ����� �ϴ� ū����ǥ�� �������ö�� �����ع���.
�� 3���� �����.
\�� ���� ������ \�ڿ� ������ ������ ������ ���ֱ� ���ؼ���. \n�̶��, ������ n�� ����� ���ְڴ�, \"��� ���� ������ ū����ǥ�� ����� ���ְ� ���� ǥ�÷ν��� ū����ǥ�� ���ڴ� ��� ��.

�ٹٲ��� 2���� �ǹ̰� ����. �ٹٲ��� �ϰ� �Ǹ� �ֿܼ��� ���� �������� �Ѿ�� �Ǵµ�,
Ŀ���� ���ٷ� �̵��ϰ� �� ������ ���ų�, �� ������ ���ٰ� ���ٷ� ���ų� 2���� ����� �� �� ����.
*/
// �޿� ���� (�ٽ�)
/*
#define _CRT_SECURE_NO_WARNINGS     // scanf ����� ���ؼ� �ʿ�
#include <stdio.h>
#define HOURLY_WAGE 9000

int main(void)
{
	int hours, total_wage;

	printf("���� �ð��� �����ÿ� :");
	scanf("%d", &hours);

	total_wage = hours * HOURLY_WAGE;

	printf("�ð��� �޿��� : %d\n", HOURLY_WAGE);
	printf("�� �޿��� : %d", total_wage);

	return 0;

}
// ��� ���
*/
/*
���� �ð��� �����ÿ� :10
�ð��� �޿��� : 9000
�� �޿��� : 90000
*/

// #define HOURLY_WAGE 9000 ���� HOURLY_WAGE�� 9000�� ��� �������ϱ� ������ ���ڿ���.
// �������ϱ� ��, ��ó�� �Ҷ� HOURLY_WAGE��� ���ڿ��� 9000�̶�� ���ڿ��� ��ü�ϰ�, 
// �������� �� �� �� 9000�� ���������� �ٲ�.

// const ����
/*
#include <stdio.h>

int main(void)
{
	const float PI = 3.14; // const�� �� ������ ���� ���ȭ ��Ű�ڴٴ� �ǹ�. ���ʻ� �빮�ڷ� ����Ѵ�.


	printf("PI = %f", PI);

	// PI = 3.15; �� ���� �ѹ� ���ȭ�� ������ �ٽ� ���� �� �� ����.

	return 0;


}
*/
// ��� ���
/*
PI = 3.140000
*/

// arithmetic.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf ����� ���� �ʿ�
#include <stdio.h>

int main(void)
{
	int x = 0, y = 0;

	printf("2���� ������ �Է��Ͻÿ�:");
	scanf("%d %d", &x, &y);


	printf("+%d = %d\n", +x, x);
	printf("-%d = %d\n", -y, y);
	printf("%d + %d = %d\n", x,y,x+y);
	printf("%d - %d = %d\n", x, y, x - y);
	printf("%d * %d = %d\n", x, y, x * y);
	printf("%d / %d = %d\n", x, y, x / y);
	printf("%d %% %d = %d\n", x, y, x % y);
	// ���� �����ڷ� ���Ǵ� %�� ������ ������ �ǹ�. ȭ�鿡 %�� ���� �״�� ������ �� %�� ���� �����ڰ� �ƴ϶�� ������ �տ�
	// %�� �ϳ� �� �ٿ���. �̶� %�տ� �ٿ��ִ°� �������ð� �ƴԿ� ���� !
	// ��, %�ϳ� �� % �ϳ��� ���� �״�ζ�� ������ �� ����. ��, ���� �״���� %�� 2�� ����ʹٸ�, �տ� %�� �ϳ��� �ƴ� 2���� �ٿ��� %%%%��� �ؾ� %%ó�� ����.
	return 0;

}
*/
//��� ���
/*
2���� ������ �Է��Ͻÿ�:20 3
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

	current = --stock1; // stock1�� ���� ���ҽ�Ų �Ŀ� current�� �ְ� ��. (������)

	printf("current = %d, stock1 = %d\n", current, stock1);

	current = stock2--; // stock2�� ���� current�� ���� �Ŀ� stock2�� ���ҽ�Ű�� ��.(������)

	printf("current = %d, stock2 = %d", current, stock2);

	return 0;

}
*/
//��� ���
/*
current = 9, stock1 = 9
current = 10, stock2 = 9
*/
/*
stock1�̶�� ������, stock2��� 4byte ��� ��Ҹ� 10���� �ʱ�ȭ �������,
current��� 4byte¥�� ��� ��Ҵ� ���� ���ְ� ���� �ʱ�ȭ �Ƚ�������. �ȿ��� �����Ⱚ ����.

--stock1���� stock1�� �����ҿ��� 1�� ���� ���� current�� �־���ٸ�, stock2--������ stock2�� �����ҿ� �ִ� 10�� ���� �Ѱ��ְ�, �� ������ �ϳ� �ٿ���.
*/

/*
C�� ����, ����, ���� ����.

���� ������ (+�� -, ����������), ���� ������(x?y:z --> x�� ���̸� y, �����̸� z),�� ������ �������� ��κ�
���� ��������.
���迬���ڿ��� ũ�ų� ����, �۰ų� ���� ������ �츮���� ����̶� �Ȱ���. but, ���� �ʴٴ� !=ó�� �������.
*/

//assign.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf ����� ���� �ʿ�
#include <stdio.h>

int main(void)
{
	int width, height, area;

	printf("���� ���ÿ�:\n");
	scanf("%d", &width);
	printf("���̸� ���ÿ�:\n");
	scanf("%d", &height);
	area = width * height;

	printf("���̴� : %d", area);
	return 0;

}
*/
//��� ���
/*
���� ���ÿ�:
10
���̸� ���ÿ�:
20
���̴� : 200
*/

// =�� assign ��ȣ��. ������ �Ÿ� ���ʿ��� �ְڴ�. ������ �ǹ��� ���ٰ� �ƴ�.

// compound.c
/*
#include <stdio.h>

int main(void)
{
	int w = 10, x = 20, y = 10, z = 7;
	int result = 0;

	result += w; //// result = result + w�� ���� �ǹ�. 0+10�� result�� �����Ѵ�.
	printf("result = %d\n", result);

	result *= x; // result = result*x�� ���� �ǹ�. 10*20�� ��.
	printf("result = %d\n", result);

	result /= y; // result = result/y�� �ǹ�
	printf("result = %d\n", result);

	result %= z; // result = result%z�� �ǹ�
	printf("result = %d\n", result);

	result *= (1 + 2); // result = result*3�� �ǹ�

	printf("result = %d\n", result);

	return 0;

}
*/
//��� ���
/*
result = 10
result = 200
result = 20
result = 6
result = 18
*/

// ���� �Ȱ����� �� result += x ������ ����? result = result + x�� ��ǻ�Ͱ� �����ϴ� �� ����,
// ��ǻ�ʹ� result += x�� �ξ� ������ ������. �ڿ��� ���� i++�� ����������, i=i+1�� ������, i++�� �� ���� �̷��� ��.

// comparison.c
/*
#define _CRT_SECURE_NO_WARNINGS     // scanf ����� ���ؼ� �ʿ�
#include <stdio.h>

int main(void)
{
	int x, y;
	printf("���� ���� ���� 2���� �Է��Ͻÿ� :");
	scanf("%d %d", &x, &y);

	printf("%d > %d -> %d\n", x, y, x > y);
	printf("%d < %d -> %d\n", x, y, x < y);
	printf("%d >= %d -> %d\n", x, y, x >= y);
	printf("%d <= %d -> %d\n", x, y, x <= y);
	printf("%d != %d -> %d\n", x, y, x != y);
	printf("%d == %d -> %d", x, y, x == y); // =�� 2�� ���� ������ �ƴ��� ���� �ǹ�.
	return 0;
}
*/
//��� ���
/*
���� ���� ���� 2���� �Է��Ͻÿ� :10 20
10 > 20 -> 0
10 < 20 -> 1
10 >= 20 -> 0
10 <= 20 -> 1
10 != 20 -> 1
10 == 20 -> 0
*/
// �񱳹��� ����� ��, �������� ����. ���̸� 1, �����̸� 0
// ��, �����ؾ� �� ���� �񱳹� ����, �����̸� 0�̰� ������ ���ڴ� �� ����. C++�� java�� true, false�� ��������, �ᱹ �ȿ����� 0�� 1�� ó����.

// logical.c
/*
#define _CRT_SECURE_NO_WARNINGS     // scanf ����� ���ؼ� �ʿ�
#include <stdio.h>

int main(void)
{
	int usage;

	printf("usage���� �����ÿ�:");
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
//��� ���
/*
usage���� �����ÿ�:500
usage is out of range
*/

// &&�� ���� �Ǵ�, ||�� ���� �׸��� �ǹ�. �Ǵ��� �ϳ��� ���̸� ��, �׸���� �Ѵ� ���̿��� ���̴�.
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

	printf("!1 --> %d\n", !1); // !�� not�� �ǹ�.
	printf("!0 --> %d", !0);


	return 0;

}
*/
//��� ���
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

	printf("%08x ^ %08x = %08x\n", x, y, x ^ y); // ^�� xor�� �ǹ�. xor : bit�� ������ 0 �ٸ��� 1
	printf("~%08x = %08x\n", x, ~x);
	return 0;

}
*/
//��� ���
/*
000000ab & 0000000f = 0000000b
000000ab | 0000000f = 000000af
000000ab ^ 0000000f = 000000a4
~000000ab = ffffff54
*/
/*
and,or��ȣ &,|�� �ϳ��� ���� bit������ �����ϰ� �ǰ�, 2���� ���� �� �����ڰ� �ȴ�.
not�� ��Ʈ �����Ҷ��� ~�� ����, �� ���꿡�� !=�� ��.
xor�� ��Ʈ ���꿡�� �ְ�, ^��ȣ�� ���� ��.
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
//��� ���
/*
x = 0x0000ab, 171
z = 0x00002a, 42
z = 0x0002ac, 684
*/
/*
>> : ���������� bit shift, << : �������� bit shift.
>> �� ���� ��ȣ�� shift �������� ��� ��. x>>2�� bit������ ���������� 2ĭ �̵��ϰڴٴ� �ǹ�.
���������� %�Ŀ� #�� �ٿ����� 16������� 0x��, 8������� 0�� �ٿ��� �̰� ���������� ��Ȯ�ϰ� ǥ���ϰڴٴ� �ǹ�.
>> �ѹ� �Ҷ����� ������ 2�� ȿ�� ����. �ݴ��, �������� �ѹ� shift �Ҷ����� ���ϱ� 2�� ȿ��. �̰� ��� ���� ��� �������� !
*/

// conditional.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf ����� ���� �ʿ�
#include <stdio.h>

int main(void)
{
	int x, y;
	//int abs, min, max;

	printf("���� 2���� �Է��Ͻÿ� :");
	scanf("%d %d", &x, &y);

	printf("%d�� ������ : %d\n", x, x >= 0 ? x : -x);
	printf("%d�� ������ : %d\n", y, y >= 0 ? y : -y);
	printf("���� �� ū ���� : %d\n", x > y ? x : y);
	printf("���� �� ���� ���� : %d\n", x > y ? y : x);

	return 0;



}
*/
//��� ���
/*
���� 2���� �Է��Ͻÿ� :10 -20
10�� ������ : 10
-20�� ������ : 20
���� �� ū ���� : 10
���� �� ���� ���� : -20
*/

// ���� ������. ?�� : ���ÿ� ���� ���� �������̴�. ?���� ������ ���̸� :�� ���� ����ϰ�, ?���� ������ �����̸� : �ڸ� ����Ѵ�.

// conversion.c
#define  _CRT_SECURE_NO_WARNINGS    // scanf ����� ���� �ʿ�
#include <stdio.h>

int main(void)
{
	int x, y;
	double ave;

	printf("���� 2���� �Է��Ͻÿ�:");
	scanf("%d %d", &x, &y);

	ave = (x + y) / 2; /// �̋�, ave�� ���� double�� �ƴ� int������ ����. ������ �Է��� �Ǳ� ������, ��ǻ�Ϳ��� ������ ����� ��ǻ�Ϳ��� ���� ó���� �ع���.
	printf("%.2lf\n", ave);

	ave = (double)(x + y) / 2; // �׷��� ����� �� ��ȯ (������ �� ��ȯ) ���� ���� double�� ������. ������ int���� doubleó�� 8byte¥���� ������.

	printf("%.2lf\n", ave);

	return 0;
}
// ��� ���
/*
���� 2���� �Է��Ͻÿ�:3 2
2.00
2.50
*/



















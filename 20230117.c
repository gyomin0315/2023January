// elseif.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf ����� ���� �ʿ�
#include <stdio.h>

int main(void)
{
	int num;
	printf("������ �Է��Ͻÿ� :");
	scanf("%d", &num);

	if (num < 0) printf("�����Դϴ�.");
	else if (num > 0) printf("����Դϴ�.");
	else printf("0�Դϴ�.");

	return 0;

}
*/
//��� ���
/*
������ �Է��Ͻÿ� :10
����Դϴ�.
*/
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf ����� ���� �ʿ�
#include <stdio.h>

int main(void)
{
	int num;

	printf("������ �Է��Ͻÿ�:");

	scanf("%d", &num);

	if (num) printf("���Դϴ�."); // if(num)ó�� if���� ����� �� �� ���� ! if �� �ȿ� ���� ���ǹ��� 0�̶�� ����, ������ ���ڴ� ��� ���� .
	else printf("�����Դϴ�.");

	return 0;
}
*/
// ��� ���
/*
������ �Է��Ͻÿ�:0
�����Դϴ�.
*/

// calculator.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf ����� ���� �ʿ�
#include <stdio.h>

int main(void)
{
	double x1, x2;
	char op;
	double result = 0;

	printf("���� �Է��Ͻÿ�:");
	scanf("%lf %c %lf", &x1, &op, &x2);

	if (op == '+') result = x1 + x2;
	else if (op == '-') result = x1 - x2;
	else if (op == '*') result = x1 * x2;
	else if (op == '/') result = x1 / x2;
	else 
	{
		printf("���� �߸� �Է��Ͽ����ϴ�.");
		return 1; // return 0�� �ƴ� �ٸ��� �̸� ���α׷��� ���������� ���Ḧ �ǹ� !
	}
	printf("%lf %c %lf = %lf", x1, op, x2, result);

	return 0;


}
*/
// ��� ���
/*
���� �Է��Ͻÿ�:13.1 * 6.7
13.100000 * 6.700000 = 87.770000
*/
/*
�� ���α׷����� �������� �Ҷ�, x2�� 0�� �Ǹ� inf�� ���͹���. �׷��� else if ���� ���ǹ���
else if(op == '/' && x2!=0)�� ���� �ٲ��ָ� �ξ� ���α׷��� �ϼ��� ����. 
*/

// menu.c
/*
#define  _CRT_SECURE_NO_WARNINGS    // scanf ����� ���� �ʿ�
#include <stdio.h>

int main(void)
{
	int menu;

	printf("1. ���� ����\n");
	printf("2. ���� ����\n");
	printf("3. ���� ����\n");
	printf("���� :");

	scanf("%d", & menu);

	switch (menu) // switch �� : ��ȣ ���� menu�� �޾Ƽ�, �� menu�� ���缭 case���� ������.
	{
	case 1:
		printf("���� ���� �޴��� �����ϼ̽��ϴ�.");
		break; // case�� ������ �ݵ�� break; �������. break;���ϰ� �Ǹ�, switch ���� ������������ �ؿ� �ִ� case �� �����ع���. 

	case 2:
		printf("���� ���� �޴��� �����ϼ̽��ϴ�.");
		break;
	case 3:
		printf("���� ���� �޴��� �����ϼ̽��ϴ�.");
		break;
	default :                             // default���� �ᵵ �ǰ� �Ƚᵵ �ǰ� menu�� 1,2,3 �� �ƴҶ� default ����.
		printf("�߸� �Է��ϼ̽��ϴ�.");
		break;


	}


	return 0;


}
*/
//��� ���
/*
1. ���� ����
2. ���� ����
3. ���� ����
���� :2
���� ���� �޴��� �����ϼ̽��ϴ�.
*/

// switch.c 2


#define  _CRT_SECURE_NO_WARNINGS    // scanf ����� ���� �ʿ�
#include <stdio.h>

int main(void)
{
	char menu;
	printf("1. ���� ����\n");
	printf("2. ���� ����\n");
	printf("3. ���� �ݱ�\n");
	printf("���� :");

	scanf("%c", &menu);

	switch (menu)
	{
	case '1': // menu�� char���̴ϱ� case 1: �� �ƴ�, case '1': �� �Ǿ���. 
		printf("���� ���� �޴��� �����ϼ̽��ϴ�.");
		break;
	case '2':
		printf("���� ���� �޴��� �����ϼ̽��ϴ�.");
		break;
	case '3':
		printf("���� �ݱ� �޴��� �����ϼ̽��ϴ�.");
		break;
	default :
		printf("�߸� �����ϼ̽��ϴ�.");
		break;


	}
	return 0;


}
//��� ���
/*
1. ���� ����
2. ���� ����
3. ���� �ݱ�
���� :2
���� ���� �޴��� �����ϼ̽��ϴ�.
*/


/*
switch ()�ȿ��� ������, ������ �̷��Ը� �� �� ����.�Ǽ��� ���� !
case ���� case �� �� �� ������ �ϳ� �ְ� �����.case1 �̷��� �ȵ�.
default�� �� ������ϴ°� �ƴ�.But, �´ٸ� ������ �� ���� �;��Ѵ�.
case �� ��������, �Ʒ��ִ� case�� ���ʷ� ���� �����Ű�� ������ �ƴ϶��, case�� ���� break; �������.
default�� break; ���൵ �ǰ� �� ���൵ ����.
*/
















#include <stdio.h>
void main()
{
	int a, b;
	char cor;
	printf("사칙연산 입력(정수) : ");
	scanf("%d",&a);
	scanf("%c",&cor);
	scanf("%d",&b);

	if (cor == '+')
	{
		printf("%d%c%d=%d\n", a, cor, b, a + b);
	}
	else if (cor == '-')
	{
		printf("%d%c%d=%d\n", a, cor, b, a - b);
	}
	else if (cor == '*')
	{
		printf("%d%c%d=%d\n", a, cor, b, a * b);
	}
	else if (cor == '/')
	{
		printf("%d%c%d=%d\n", a, cor, b, a / b);
	}
}
#include <stdio.h>
void main()
{
	int a, b;
	char cor;
	printf("��Ģ���� �Է�(����) : ");
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
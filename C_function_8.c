#include <stdio.h>

void print(char a[]);

int main(void)
{
	char name[30];

	printf("����� �̸��� �Է��Ͻÿ�. : ");
	scanf_s("%s", name, sizeof(name));

	print(name);

	return 0;
}

void print(char a[])
{
	printf("����� �̸��� %s�Դϴ�.\n", a);
}
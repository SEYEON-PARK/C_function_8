#include <stdio.h>

void print(char a[]);

int main(void)
{
	char name[30]; // name 변수 생성

	printf("당신의 이름을 입력하시오. : ");
	scanf_s("%s", name, sizeof(name)); // 사용자로부터 이름 입력받기

	print(name);

	return 0;
}

void print(char a[])
{
	printf("당신의 이름은 %s입니다.\n", a);
}

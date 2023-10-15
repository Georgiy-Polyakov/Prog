#include <locale.h>
#include <stdio.h>

int main()
{
	setlocale(0, "RU");
	int x;
	printf("Введите 3 значное число: ");
	scanf_s("%d", &x);
	printf("%d\n", (x % 10)+((x / 10) % 10)+(x / 100));
	return 0;
}

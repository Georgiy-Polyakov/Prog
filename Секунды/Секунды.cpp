#include <iostream>

int main()
{
	setlocale(0, "RU");
	int x;
	printf("Введите значение (в сек): ");
	scanf_s("%d", &x);
	printf("%d:", (x / 3600));
	printf("%d:", (x / 60) % 60);
	printf("%d", (x % 60));
	return 0;
}

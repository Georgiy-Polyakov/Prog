#include <iostream>

int main()
{
	setlocale(LC_ALL, "RU");
	int x, y;
	printf("введ. x, y:");
	scanf_s("%d %d", &x, &y);
	if (x > 0 && y > 0)
	{
		puts("I");
	}
	if (x < 0 && y>0)
	{
		puts("II");
	}
	if (x < 0 && y < 0)
	{
		puts("III");
	}
	if (x > 0 && y < 0)
	{
		puts("IV");
	}
	if (x == 0)
	{
		puts("точка на оси x");
	}
	if (y == 0)
	{
		puts("точка на оси y");
	}
	if (x == 0 && y == 0)
	{
		puts("точка в нуле");
	}
	return 0;
}


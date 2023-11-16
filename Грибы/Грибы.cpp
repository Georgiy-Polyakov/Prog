#include <iostream>

int main()
{
	setlocale(LC_ALL, "RU");
	int x;
	printf("введ кол-во грибов: ");
	scanf_s("%d", &x);
	if (x % 100 >= 11 && x % 100 <= 14)
	{
		printf("грибов");
	}
	else
	{
		if (x % 10 == 1)
		{
			printf("гриб");
		}
		else if (x % 10 >= 2 && x % 10 <= 4)
		{
			printf("гриба");
		}
		else
		{
			printf("грибов");
		}
	}
	return 0;
}

#include <iostream>

int main()
{
	setlocale(0, "");
	int n;
	printf("введ. значение:");
	scanf_s("%d", &n);
	int z;
	for (int i = 1; i <= 10; i++)
	{
		z = i * n;
		printf("\n%d*%d=%d", i, n, z);
	}
	
	return 0;
}

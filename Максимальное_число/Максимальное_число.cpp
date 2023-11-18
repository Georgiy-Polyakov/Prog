#include <iostream>

int main()
{
    setlocale(0, "");
    int n;
    printf("введ кол-во чисел последовательности: ");
    scanf_s("%d", &n);
    int x;
    int maxNum = 0;
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &x);
        if(x > maxNum)
        {
            maxNum = x;
        }
    }
    printf("%d", maxNum);
}

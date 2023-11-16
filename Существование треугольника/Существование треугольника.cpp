#include <iostream>
#include <cmath>

int main()
{
    setlocale(LC_ALL, "");
    int a, b, c;
    printf("введите длинну отрезков: ");
    scanf_s("%d %d %d", &a, &b, &c);
    if (c < a + b && a < c + b && b < a + c)
    {
        if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(c, 2) + pow(a, 2) || pow(c, 2) == pow(a, 2) + pow(b, 2))
        {
            printf("треугольник прямоугольный");
        }
        if (pow(a, 2) < pow(b, 2) + pow(c, 2) || pow(b, 2) < pow(c, 2) + pow(a, 2) || pow(c, 2) < pow(a, 2) + pow(b, 2))
        {
            printf("треугольник остроугоольный");
        }
        else
        {
            printf("треугольник тупоугольный");
        }
    }
    else
    {
        printf("Не сущ.");
    }
    return 0;
}

#include <clocale>
#include <stdio.h>

int main(int argc, char* argv[])
{
    setlocale(0, "RU");
    // Сумма чисел от a до b
    int a, b;
    scanf_s("%d %d", &a, &b);
    int sum = 0;
    int i = a;
    while (i <= b)
    {
        sum += i;
        i++;
    }
    printf_s("Сумма чисел от %d до %d = %d", a, b, sum);
    return 0;
}

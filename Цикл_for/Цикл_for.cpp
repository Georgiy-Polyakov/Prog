
#include <clocale>
#include <stdio.h>

int main(int argc, char* argv[])
{
    setlocale(0, "RU");
    // —умма чисел от a до b
    int a, b;
    scanf_s("%d %d", &a, &b);
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += i;
    }
    printf_s("—умма чисел от %d до %d = %d", a, b, sum);

    return 0;
}

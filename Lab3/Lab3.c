#include <locale.h>
#include <stdlib.h>
#include <stdio.h>
#define LENGTH 10

void InputArray(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
        scanf_s("%d", &arr[i]);
}

void PrintArray(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void PrintEvenItems(int* arr, int size)
{
    int count = 0;
    for (int i = 0; i < size; ++i)
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
            count++;
        }
    printf("\nКол-во чётных элементов: %d\n", count);
}

void PrintMaxValues(int* arr, int size)
{
    int max = 0, count = 0;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > arr[max])
        {
            max = i;
            count = 0;
        }
        if (arr[i] == arr[max])
            count++;
    }
    printf("Максимальное значение: %d\n", arr[max]);
    printf("Номера элементов с максимальным значением:\n");
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] == arr[max])
            printf("%d ", i);
    }
    printf("\nКол-во элементов с максимальным значением: %d\n", count);
}

void PrintMinValue(int* arr, int size)
{
    int min = 0;
    for (int i = 0; i < size; ++i)
        if (arr[i] < arr[min])
            min = i;
    printf("Минимальное значение массива = %d находится в позиции %d\n", arr[min], min);
}

void SwapElements(int* arr, int size)
{
    int tmp = arr[0];
    arr[0] = arr[1];
    arr[1] = tmp;
    printf("Массив после обмена местами двух первых значений:\n");
    PrintArray(arr, size);
}

double AveragePositive(int* arr, int size)
{
    int count = 0;
    int sum = 0;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] > 0)
        {
            count++;
            sum += arr[i];
        }
    }
    return (double)sum / count;
}

double AveragePositive2(int* arr, int size)
{
    int count = 0;
    int sum = 0;
    for (int i = 0; i < size; i += 2)
    {
        if (arr[i] > 0)
        {
            count++;
            sum += arr[i];
        }
    }
    return (double)sum / count;
}

// Сортировка методом "Пузырька"
void Sort(int* arr, int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }       
    }
}
// size передаётся через указатель, потому что внутри функции при удалении должен изменяться размер массива.
void RemoveEvenElements(int* arr, int* size)
{
    for (int i = 0; i < *size; ++i)
    {
        if (arr[i] % 2 == 0)
        {
            for (int j = i; j < *size - 1; ++j)
                arr[j] = arr[j + 1];
            (*size)--;
            // Уменьшаем i, т.к. на месте текущего элемента будет стоять следующий и его тоже надо проверить на чётность.
            i--;
        }
    }
}

int main(int argc, char* argv[])
{
    setlocale(0, "RU");
    int array[LENGTH];
    int n;
    printf("Введите количество используемых элементов (от 1 до 10): ");
    scanf_s("%d", &n);
    InputArray(array, n);
    PrintEvenItems(array, n);
    PrintMaxValues(array, n);
    PrintMinValue(array, n);
    SwapElements(array, n);
    printf("Среднее арифметическое положительных элементов = %f\n", AveragePositive(array, n));
    printf("Среднее арифметическое положительных элементов с чётным индексом = %f\n", AveragePositive2(array, n));
    Sort(array, n);
    PrintArray(array, n);
    RemoveEvenElements(array, &n);
    PrintArray(array, n);
    return 0;
}

/*
10
2 5 8 3 4 8 1 4 8 3
*/

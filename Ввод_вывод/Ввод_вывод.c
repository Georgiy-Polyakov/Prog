#include <locale.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    setlocale(LC_ALL, "RU");
    /**
     *  ����� ����������
     *  ��� ������ ���������� ������������ ������� printf
     *  printf(�������������_������, ����������...)
     *
     *  ���� ����������
     *  ��� ����� ���������� � ���������� ������������ ������� scanf_s
     *  scanf_s(�������������_������, ����������...)
     *
     *  ������� �����/������
     *  %d - ����� �����
     *  %� - ������
     *  %s - ������
     *  %f - ������������ �����
     */
    int a, b;
    printf("������� ������ �����: ");
    scanf_s("%d", &a);
    printf("������� ������ �����: ");
    scanf_s("%d", &b);
    printf("����� ����� = %d", a + b);
    
    return 0;
}

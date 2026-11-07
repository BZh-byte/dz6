#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main(void)
{
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double x, y;

    printf("Введите координаты x и y: ");
    scanf("%lf %lf", &x, &y);

    if (x >= 0 && y <= 0 && y >= x - 3 &&
        x * x + y * y >= 2)
    {
        printf("Точка принадлежит заштрихованной области.\n");
    }
    else
    {
        printf("Точка не принадлежит заштрихованной области.\n");
    }

    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Russian");

    printf("--- Задание 1 ---\n");
    double gr;
    printf("Введите угол в градусах: ");
    scanf("%lf", &gr);

    double rad = gr * M_PI / 180.0;

    printf("sin(%.2f град) = %.6f\n\n", gr, sin(rad));

    printf("--- Задание 2 ---\n");
    double x, y;

    printf("Введите x (например, 0.5): ");
    scanf("%lf", &x);

    y = 2e-5; 

    double numerator1 = 3.0 + exp(y - 1.0);

    double denominator1 = 1.0 + (x * x) * fabs(y - tan(x));

    double fraction1 = numerator1 / denominator1;

    double fraction2 = 50.0 * pow(fabs(y - x), 3.0) / 3.0;

    double F = fraction1 + fraction2;

    printf("x = %.1f, y = %.1e\n", x, y);
    printf("F(x, y) = %.3f\n\n", F);

    printf("--- Задание 3 (а) ---\n");
    int A = (int)x;
    int B = (int)y;

    printf("A (целая часть x) = %d\n", A);
    printf("B (целая часть y) = %d\n", B);

    int conditionA = (A % 2 == 0 && B % 2 != 0) || (A % 2 != 0 && B % 2 == 0);

    printf("Условие 'только одно из чисел A и B четное':\n");
    printf("Результат: %d (1 - да, 0 - нет)\n", conditionA);

    return 0;
}
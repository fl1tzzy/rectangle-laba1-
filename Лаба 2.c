#include <stdio.h>
#include <math.h>

// Функция для вычисления периметра треугольника
float calculatePerimeter(float a, float b, float c) {
    return a + b + c;
}

// Функция для вычисления площади треугольника по формуле Герона
float calculateArea(float a, float b, float c) {
    float p = calculatePerimeter(a, b, c) / 2;
    float area = sqrt(p * (p - a) * (p - b) * (p - c));
    return area;
}

// Функция для проверки равнобедренности треугольника
int checkIsosceles(float a, float b, float c) {
    if (a == b && a != c) {
        return 1; // треугольник равнобедренный
    }
    else if (b == c && b != a) {
        return 1; // треугольник равнобедренный
    }
    else if (a == c && a != b) {
        return 1; // треугольник равнобедренный
    }
    else {
        return 0; // треугольник не равнобедренный
    }
}

int main() {
    float a, b, c;

    // Ввод сторон треугольника
    printf("dlini treugolnika a, b, c: ");
    scanf_s("%f %f %f", &a, &b, &c);

    // Вычисление и вывод периметра
    float perimeter = calculatePerimeter(a, b, c);
    printf("P treugolnika: %.2f\n", perimeter);

    // Вычисление и вывод площади
    float area = calculateArea(a, b, c);
    printf("S treugolnika: %.2f\n", area);

    // Проверка на равнобедренность
    if (checkIsosceles(a, b, c) == 1) {
        printf("treugolnik RB\n");
    }
    else {
        printf("treugolnik Ne Rb\n");
    }

    return 0;
}
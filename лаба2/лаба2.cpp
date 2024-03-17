#include <stdio.h>
#include <windows.h>
#include <math.h> // Библиотека мат. функций

// Вычисление параметров прямоугольника
void rectangle(int a, int b) {

	if (a <= 0 || b <= 0) {
		printf("Длины сторон не могут быть отрицательными.\n");
		return; // Заверешение работы функции
	}
	if (a == b) {
		printf("Длины не могут быть одинаковыми.\n");
		return; // Заверешение работы функции
	}

	printf("Периметр прямоугольника равен: %d\n", 2 * (a + b));
	printf("Площадь прямоугольника равен: %d\n", a * b);
	printf("Длина диагонали равна: %f\n", sqrt(a * a + b * b));
}

// Тестирование функции rectangle
void testing() {

	printf("Тест 1: \n");
	rectangle(10, 5);

	printf("\nТест 2: \n");
	rectangle(1, 1);

	printf("\nТест 3: \n");
	rectangle(14, 88);

	printf("\nТест 4: \n");
	rectangle(-20, 7);

	printf("\nТест 5: \n");
	rectangle(143, 514);


}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	// Вызов функции тестирования
	testing();

}

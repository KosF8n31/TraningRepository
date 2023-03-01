#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	float div;
	printf("Введите числитель - ");
	scanf_s("%d", &a);
	printf("\n");
	printf("Введите знаменатель - ");
	scanf_s("%d", &b);
	printf("\n");
	if (b == 0) {
		printf("На ноль делят только в высшей математике!");
	}
	else {
		div = a / b;
		printf_s("Результат деления = %.1f\n", div);
	}
	return 0;
}
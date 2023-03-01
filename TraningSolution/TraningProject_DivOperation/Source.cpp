#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	float div;
	scanf_s("%d %d", &a, &b);
	if (b == 0) {
		printf("На ноль делят только в высшей математике!");
	}
	else {
		div = a / b;
		printf_s("%f\n", div);
	}
	return 0;
}
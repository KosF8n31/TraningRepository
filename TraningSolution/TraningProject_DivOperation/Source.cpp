#include <stdio.h>
int main() {
	int a, b;
	float div;
	scanf_s("%d %d", &a, &b);
	div = a / b;
	printf_s("%f\n", div);

	return 0;
}
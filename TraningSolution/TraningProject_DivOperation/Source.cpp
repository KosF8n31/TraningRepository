#include <stdio.h>
int main() {
	int a, b;
	float div;
	scanf("%d %d", &a, &b);
	if (b == 0) {
		printf("На ноль делят только в высшей математике!");
	}
	else div = a / b;
	printf("%f\n", div);

	return 0;
}
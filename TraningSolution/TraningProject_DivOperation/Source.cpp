#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "rus");
	int a, b;
	float div;
	printf("������� ��������� - ");
	scanf_s("%d", &a);
	printf("\n");
	printf("������� ����������� - ");
	scanf_s("%d", &b);
	printf("\n");
	if (b == 0) {
		printf("�� ���� ����� ������ � ������ ����������!");
	}
	else {
		div = a / b;
		printf_s("��������� ������� = %.1f\n", div);
	}
	return 0;
}
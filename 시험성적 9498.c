#include <stdio.h>
int main() {
	int num1;
	char a = 'A';
	char b = 'B';
	char c = 'C';
	char d = 'D';
	char f = 'F';
	scanf_s("%d", &num1);
	if (num1 >= 90) {
		printf("%c\n", a);
	}
	else if (num1 >= 80) {
		printf("%c\n", b);
	}
	else if (num1 >= 70) {
		printf("%c\n", c);
	}
	else if (num1 >=60) {
		printf("%c\n", d);
	}
	else if (num1 < 60) {
		printf("%c\n", f);
	}
	return 0;
}
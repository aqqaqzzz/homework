#include <stdio.h>
int main() {
	int n;
	scanf_s("%d", &n);
	for (int i = 1; i <= n / 4; i++) {
		printf("long ");
	}
	printf("int");
	return 0;
}
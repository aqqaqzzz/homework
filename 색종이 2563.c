#include <stdio.h>
int main() {
	int aee[100][100] = { 0 };
	int n; int a; int b;
	int sum = 0;
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d %d", &a, &b);
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				aee[a + j][b + k] = 1;

				
			}
		}
	}
	for (int q = 0; q < 100; q++) {
		for (int w = 0; w < 100; w++) {
			if (aee[q][w] == 1) {
				sum++;

			}
		}
	}
	printf("%d", sum);
	return 0;
}

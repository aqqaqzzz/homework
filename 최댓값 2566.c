#include <stdio.h>
int main() {
	int a[9][9];
	int max = 0;
	int max_x = 0; int max_y = 0;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf_s("%d", &a[i][j]);
			
			if (a[i][j] > max) {
				max = a[i][j];
				max_x = i;
				max_y = j;
			}
		}
	}
	printf("%d\n", max);
	printf("%d %d\n", max_x + 1, max_y + 1);
	return 0;
}

#include <stdio.h>
int main() {
	char a[11];
	scanf("%s", a);
	int len = strlen(a);
	for (int i = 0; i < len ; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (a[j] < a[j + 1]) {
				char b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}
	printf("%s\n", a);
	return 0;
}
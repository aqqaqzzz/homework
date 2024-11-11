#include <stdio.h>
#include <string.h>
int main() {
	char a[101];
	scanf_s("%s",a, sizeof(a));
	printf("%d", strlen(a));
	return 0;
}
#include <stdio.h>
int main() {
	int a, b, c, d;
	int sum = 0;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	for (int i = 1; i <= b; i++) {
		scanf_s("%d %d", &c, &d);
		sum += c * d;
	}
	if (sum == a){
		printf("Yes");
	
	}
	else {
		printf("No");
	}
	return 0;
}

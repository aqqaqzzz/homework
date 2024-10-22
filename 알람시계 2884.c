#include <stdio.h>
int main() {
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	if (num2 >= 45) {
		printf("%d %d", num1, num2 - 45);
	}
	else {
		if (num1 < 1){
			printf("%d %d", num1 + 24 - 1, num2 + 60 - 45);
		}
		else {
			printf("%d %d", num1 - 1, num2 + 60 - 45);
		}
		
	}
	return 0;
}
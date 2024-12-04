#include <stdio.h>
#include <string.h>
int main() {
    char a[101];
    scanf("%s", a);
    int len = strlen(a);
    int result = 1;
    for (int i = 0; i < len / 2; i++) {
        if (a[i] != a[len - 1 - i]) {
            result = 0;
        }
    }
    printf("%d", result);
    return 0;
}
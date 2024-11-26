#include <stdio.h>
int main() {
    char word[1000001];
    int max = 0;
    int count[26] = { 0, };
    char result = '?';
    scanf("%s", word);
    for (int i = 0; word[i] != '\0'; i++) {
        char c = word[i];
        if (c >= 'a' && c <= 'z') {
            c = c - 'a' + 'A';
        }
        count[c - 'A']++;
    }
    for (int i = 0; i < 26; i++) {
        if (count[i] > max) {
            max = count[i];
            result = 'A' + i;
        }
        else if (count[i] == max && max > 0) {
            result = '?';
        }
    }
    printf("%c", result);
    return 0;
}
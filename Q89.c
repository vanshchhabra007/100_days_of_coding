Q89: Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[200], ch;
    int i = 0, count = 0;

    // Read string
    fgets(str, sizeof(str), stdin);

    // Read character to count
    scanf("%c", &ch);

    // Count occurrences
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch)
            count++;
        i++;
    }

    printf("%d", count);

    return 0;
}

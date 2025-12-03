Q81: Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    // Read string (including spaces)
    fgets(str, sizeof(str), stdin);

    // Count characters manually until newline or null terminator
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        count++;
    }

    printf("%d", count);

    return 0;
}

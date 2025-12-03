Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char str[200];
    int i = 0, spaces = 0, digits = 0, special = 0;

    // Read input string
    fgets(str, sizeof(str), stdin);

    // Count types of characters
    while (str[i] != '\0') {
        if (str[i] == ' ')
            spaces++;
        else if (str[i] >= '0' && str[i] <= '9')
            digits++;
        else if ((str[i] >= 'A' && str[i] <= 'Z') ||
                 (str[i] >= 'a' && str[i] <= 'z')) {
            // Do nothing (letters are ignored)
        }
        else if (str[i] != '\n')
            special++;  // any non-letter, non-digit, non-space, non-newline

        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", spaces, digits, special);

    return 0;
}

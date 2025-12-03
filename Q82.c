Q82: Print each character of a string on a new line.

#include <stdio.h>

int main() {
    char str[100];
    int i;

    // Read string (including spaces)
    fgets(str, sizeof(str), stdin);

    // Print each character on a new line
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
}

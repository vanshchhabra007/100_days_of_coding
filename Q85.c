Q85: Reverse a string.

#include <stdio.h>

int main() {
    char str[100], rev[100];
    int i, j, len = 0;

    // Read string
    fgets(str, sizeof(str), stdin);

    // Find length manually
    while (str[len] != '\0' && str[len] != '\n') {
        len++;
    }

    // Reverse the string
    j = 0;
    for (i = len - 1; i >= 0; i--) {
        rev[j++] = str[i];
    }
    rev[j] = '\0';

    // Output reversed string
    printf("%s", rev);

    return 0;
}

Q100: Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);

    // Remove newline character if present
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Generate all substrings
    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            for (int k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}

Q88: Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    // Read the string
    fgets(str, sizeof(str), stdin);

    // Replace spaces with hyphens
    while (str[i] != '\0') {
        if (str[i] == ' ')
            str[i] = '-';
        i++;
    }

    printf("%s", str);

    return 0;
}

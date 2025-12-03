Q97: Print the initials of a name.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int i = 0;

    // Print first initial if not space
    if (str[i] != ' ' && str[i] != '\n') {
        printf("%c.", toupper(str[i]));
    }

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0' && str[i + 1] != '\n') {
            printf("%c.", toupper(str[i + 1]));
        }
        i++;
    }

    return 0;
}

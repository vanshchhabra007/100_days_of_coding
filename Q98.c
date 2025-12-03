Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int i = 0, len = strlen(str);

    // Remove newline at end if any
    if (str[len - 1] == '\n') str[len - 1] = '\0';

    // Print initials for all words except last
    while (str[i] != '\0') {
        if (i == 0) { // first character
            printf("%c.", toupper(str[i]));
        } else if (str[i] == ' ' && str[i + 1] != '\0') {
            int j = i + 1;
            // Check if this is the last word
            int isLast = 1;
            for (int k = j + 1; str[k] != '\0'; k++) {
                if (str[k] != ' ') {
                    isLast = 0;
                    break;
                }
            }

            if (!isLast) {
                printf("%c.", toupper(str[j]));
            } else {
                // Print surname fully
                printf(" ");
                for (int k = j; str[k] != '\0'; k++)
                    printf("%c", str[k]);
                break;
            }
        }
        i++;
    }

    return 0;
}

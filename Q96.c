Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int start = 0, i = 0;
    while (1) {
        if (str[i] == ' ' || str[i] == '\0' || str[i] == '\n') {
            // Print the word in reverse
            for (int j = i - 1; j >= start; j--) {
                printf("%c", str[j]);
            }
            if (str[i] == ' ')
                printf(" "); // keep space between words
            start = i + 1;
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;
        i++;
    }

    return 0;
}

Q94: Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

int main() {
    char str[200];
    fgets(str, sizeof(str), stdin);

    int i = 0, maxLen = 0, currLen = 0;
    int start = 0, maxStart = 0;

    while (1) {
        if (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
            start = i + 1;
        }

        if (str[i] == '\0' || str[i] == '\n')
            break;

        i++;
    }

    // Print longest word
    for (i = maxStart; i < maxStart + maxLen; i++) {
        printf("%c", str[i]);
    }

    return 0;
}

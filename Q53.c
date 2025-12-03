Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

#include <stdio.h>

int main() {
    int i, j;

    // upper part (1, 3, 5, 7, 9 stars)
    for (i = 1; i <= 9; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    // lower part (7, 5, 3, 1 stars)
    for (i = 7; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

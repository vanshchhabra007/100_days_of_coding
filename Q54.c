Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


#include <stdio.h>

int main() {
    int i, j, space;

    // upper pyramid (1, 3, 5, 7 stars)
    for (i = 1; i <= 7; i += 2) {
        space = (7 - i) / 2;        // calculate leading spaces
        for (j = 1; j <= space; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    // lower inverted pyramid (5, 3, 1 stars)
    for (i = 5; i >= 1; i -= 2) {
        space = (7 - i) / 2;
        for (j = 1; j <= space; j++)
            printf(" ");
        for (j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}

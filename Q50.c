Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

#include <stdio.h>

int main() {
    for (int i = 0; i < 5; i++) {            // rows
        for (int s = 0; s < i; s++) {        // leading spaces
            printf(" ");
        }
        for (int j = 0; j < 5 - i; j++) {    // stars
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

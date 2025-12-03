Q39: Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int n, rem;
    int product = 1;
    int foundOdd = 0;

    scanf("%d", &n);

    while (n > 0) {
        rem = n % 10;

        if (rem % 2 != 0) {   // check odd digit
            product *= rem;
            foundOdd = 1;     // mark that an odd digit was found
        }

        n = n / 10;
    }

    // If no odd digits, product remains 1 (as per problem requirement)
    printf("%d", product);

    return 0;
}

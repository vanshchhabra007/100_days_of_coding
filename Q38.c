Q38: Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int n, sum = 0, rem;

    scanf("%d", &n);

    while (n > 0) {
        rem = n % 10;   // extract last digit
        sum += rem;     // add to sum
        n = n / 10;     // remove last digit
    }

    printf("%d", sum);

    return 0;
}

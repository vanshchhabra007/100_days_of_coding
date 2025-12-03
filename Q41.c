Q41: Write a program to swap the first and last digit of a number.

#include <stdio.h>

int main() {
    int num, first, last, temp, digits = 0;
    int n;

    scanf("%d", &num);
    n = num;

    last = n % 10;        // get last digit

    // find number of digits and first digit
    while (n > 0) {
        first = n % 10;
        n /= 10;
        digits++;
    }

    // if number has only 1 digit, no change
    if (digits == 1) {
        printf("%d", num);
        return 0;
    }

    // remove first and last digits
    int pow10 = 1;
    for (int i = 1; i <= digits - 1; i++)
        pow10 *= 10;

    int middle = (num % pow10) / 10;

    // new number after swap
    int swapped = last * pow10 + middle * 10 + first;

    printf("%d", swapped);

    return 0;
}

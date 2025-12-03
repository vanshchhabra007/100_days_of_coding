Q43: Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, n, digit;
    int sum = 0;

    scanf("%d", &num);
    n = num;

    // function to calculate factorial of a digit
    while (n > 0) {
        digit = n % 10;

        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
        n /= 10;
    }

    if (sum == num)
        printf("Strong number");
    else
        printf("Not strong number");

    return 0;
}

Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    float sum = 0.0;
    int num = 2;   // numerator starts at 2
    int den = 3;   // denominator starts at 3

    for (int i = 1; i <= n; i++) {
        sum += (float)num / den;
        num += 2;   // next even numerator
        den += 4;   // denominator increases by 4
    }

    printf("Approximate sum: %.2f", sum);

    return 0;
}

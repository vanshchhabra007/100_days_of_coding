Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    float sum = 0.0;
    int num = 1;  // starting numerator

    for (int i = 1; i <= n; i++) {
        sum += (float)num / (num + 1);
        num += 2;  // next odd number
    }

    printf("Approximate sum: %.1f", sum);

    return 0;
}

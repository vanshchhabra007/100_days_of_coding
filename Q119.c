Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>

int main() {
    int n, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // XOR trick: XOR all array elements with numbers from 0 to n-2
    // This works because only one element is repeated
    int xorArr = 0, xorRange = 0;

    for (i = 0; i < n; i++)
        xorArr ^= nums[i];

    for (i = 0; i < n - 1; i++)
        xorRange ^= i;

    int repeated = xorArr ^ xorRange;

    printf("\nOutput:\n%d\n", repeated);

    return 0;
}

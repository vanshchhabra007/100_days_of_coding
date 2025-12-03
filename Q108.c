Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n], answer[n];

    printf("Enter %d integers: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Step 1: Prefix products
    int prefix = 1;
    for(int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    // Step 2: Suffix products
    int suffix = 1;
    for(int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    // Print result
    printf("Output: [");
    for(int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if(i != n-1) printf(", ");
    }
    printf("]\n");

    return 0;
}

Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>

int main() {
    int m, n;

    // Input sizes
    printf("Enter size of first array: ");
    scanf("%d", &m);
    printf("Enter size of second array: ");
    scanf("%d", &n);

    int nums1[m], nums2[n], merged[m+n];

    // Input first sorted array
    printf("Enter elements of first sorted array:\n");
    for(int i = 0; i < m; i++) {
        scanf("%d", &nums1[i]);
    }

    // Input second sorted array
    printf("Enter elements of second sorted array:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &nums2[i]);
    }

    int i = 0, j = 0, k = 0;

    // Merge two sorted arrays
    while(i < m && j < n) {
        if(nums1[i] < nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    // Add remaining elements
    while(i < m) {
        merged[k++] = nums1[i++];
    }

    while(j < n) {
        merged[k++] = nums2[j++];
    }

    // Print merged array
    printf("Merged Sorted Array:\n");
    for(int x = 0; x < m+n; x++) {
        printf("%d ", merged[x]);
    }

    return 0;
}

Q56: Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int n, i;
    int arr[100];   // assuming max size = 100

    scanf("%d", &n);       // read number of elements

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);   // read elements
    }

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);  // print elements
    }

    return 0;
}

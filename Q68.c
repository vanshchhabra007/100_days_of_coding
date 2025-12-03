Q68: Delete an element from an array.

#include <stdio.h>

int main() {
    int n, pos;
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &pos);  // position to delete

    // Shift elements left from pos+1 onward
    for (int i = pos; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print updated array of size n-1
    for (int i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);

    return 0;
}

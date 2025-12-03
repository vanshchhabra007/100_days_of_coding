Q69: Find the second largest element in an array.

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max1 = -1000000, max2 = -1000000;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;   // update second largest
            max1 = arr[i]; // update largest
        }
        else if (arr[i] > max2 && arr[i] != max1) {
            max2 = arr[i];
        }
    }

    printf("%d", max2);

    return 0;
}

Q61: Search for an element in an array using linear search.

#include <stdio.h>

int main() {
    int n, i, key;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    int found = -1;

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found == -1)
        printf("-1");
    else
        printf("Found at index %d", found);

    return 0;
}

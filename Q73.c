Q73: Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

int main() {
    int r, c;
    scanf("%d %d", &r, &c);

    int a[r][c];
    int rowSum[r];

    // Read matrix elements
    for (int i = 0; i < r; i++) {
        int sum = 0;
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }
        rowSum[i] = sum;   // store row sum
    }

    // Print row sums
    for (int i = 0; i < r; i++)
        printf("%d ", rowSum[i]);

    return 0;
}

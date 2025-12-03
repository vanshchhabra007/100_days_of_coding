Q75: Add two matrices.

#include <stdio.h>

int main() {
    int r1, c1, r2, c2;

    // Read dimensions of first matrix
    scanf("%d %d", &r1, &c1);

    int a[r1][c1];

    // Read first matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Read dimensions of second matrix
    scanf("%d %d", &r2, &c2);

    int b[r2][c2];

    // Read second matrix
    for (int i = 0; i < r2; i++) {
        for (int j = 0; j < c2; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Check if addition is possible
    if (r1 != r2 || c1 != c2) {
        printf("Matrix addition not possible");
        return 0;
    }

    int sum[r1][c1];

    // Sum of matrices
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print result matrix
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c1; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

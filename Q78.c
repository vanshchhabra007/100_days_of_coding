Q78: Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    // Read matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Sum diagonal elements (only valid for square matrix)
    int sum = 0;
    for (int i = 0; i < n && i < m; i++) {
        sum += a[i][i];
    }

    printf("%d", sum);
    return 0;
}

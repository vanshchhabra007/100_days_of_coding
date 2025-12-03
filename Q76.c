Q76: Check if a matrix is symmetric.

#include <stdio.h>

int main() {
    int n, m;

    // Read matrix dimensions
    scanf("%d %d", &n, &m);

    int a[n][m];

    // Read matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Symmetry only possible for square matrices
    if (n != m) {
        printf("False");
        return 0;
    }

    // Check symmetry
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                printf("False");
                return 0;
            }
        }
    }

    printf("True");
    return 0;
}

Q77: Check if the elements on the diagonal of a matrix are distinct.

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

    // Works only for square matrices
    if (n != m) {
        printf("False");
        return 0;
    }

    // Check if diagonal elements are distinct
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) {
                printf("False");
                return 0;
            }
        }
    }

    printf("True");
    return 0;
}

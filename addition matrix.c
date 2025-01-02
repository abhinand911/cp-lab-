#include <stdio.h>

int main() {
    int n, r, c, i, j;
    
    printf("1D Matrix:\n");
    printf("Enter size of 1D matrices: ");
    scanf("%d", &n);
    int a1[n], b1[n], sum1[n], diff1[n];
    printf("Enter elements of first matrix: ");
    for (i = 0; i < n; i++) scanf("%d", &a1[i]);
    printf("Enter elements of second matrix: ");
    for (i = 0; i < n; i++) scanf("%d", &b1[i]);
    for (i = 0; i < n; i++) {
        sum1[i] = a1[i] + b1[i];
        diff1[i] = a1[i] - b1[i];
    }
    printf("Sum: ");
    for (i = 0; i < n; i++) printf("%d ", sum1[i]);
    printf("\nDifference: ");
    for (i = 0; i < n; i++) printf("%d ", diff1[i]);
    
    printf("\n\n2D Matrix:\n");
    printf("Enter rows and columns of 2D matrices: ");
    scanf("%d%d", &r, &c);
    int a2[r][c], b2[r][c], sum2[r][c], diff2[r][c];
    printf("Enter elements of first matrix: ");
    for (i = 0; i < r; i++) for (j = 0; j < c; j++) scanf("%d", &a2[i][j]);
    printf("Enter elements of second matrix: ");
    for (i = 0; i < r; i++) for (j = 0; j < c; j++) scanf("%d", &b2[i][j]);
    for (i = 0; i < r; i++) for (j = 0; j < c; j++) {
        sum2[i][j] = a2[i][j] + b2[i][j];
        diff2[i][j] = a2[i][j] - b2[i][j];
    }
    printf("Sum:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) printf("%d ", sum2[i][j]);
        printf("\n");
    }
    printf("Difference:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) printf("%d ", diff2[i][j]);
        printf("\n");
    }
    return 0;
}

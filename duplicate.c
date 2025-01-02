#include <stdio.h>

int main() {
    int n, i, j, k;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) { // Duplicate found
                for (k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1]; // Shift elements left
                }
                n--; // Reduce array size
                j--; // Adjust index after shifting
            }
        }
    }
    
    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}

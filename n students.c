#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;
    
    printf("Enter the number of students: ");
    scanf("%d", &n);
    
    float marks[n];
    
    printf("Enter the marks of %d students:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%f", &marks[i]);
        sum += marks[i];
    }
    
    avg = sum / n;
    printf("Average marks = %.2f\n", avg);
    
    return 0;
}

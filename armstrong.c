#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, n = 0, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (temp = num; temp; temp /= 10, n++);
    for (temp = num; temp; temp /= 10) sum += pow(temp % 10, n);
    printf(sum == num ? "%d is an Armstrong number.\n" : "%d is not an Armstrong number.\n", num);
    return 0;
}

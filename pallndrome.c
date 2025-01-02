#include <stdio.h>

int main() {
    int num, temp, sum = 0, rev = 0, digit;
    scanf("%d", &num);
    temp = num;
    while (temp > 0) {
        digit = temp % 10;
        sum += digit;
        rev = rev * 10 + digit;
        temp /= 10;
    }
    printf("Sum of digits: %d\n", sum);
    printf("Reversed number: %d\n", rev);
    if (num == rev)
        printf("Palindrome: Yes\n");
    else
        printf("Palindrome: No\n");
    return 0;
}

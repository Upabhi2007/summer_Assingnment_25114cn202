#include<stdio.h>

int main() {
    int n, temp, reverse = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;

    while(temp > 0) {
        reverse = reverse * 10 + temp % 10;
        temp /= 10;
    }

    if(n == reverse)
        printf("%d is a palindrome number", n);
    else
        printf("%d is not a palindrome number", n);

    return 0;
}
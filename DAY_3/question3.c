// write a program to find GCD of two number.
#include<stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while(b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("GCD of two number is = %d", a);

    return 0;
}
//write a program to find product of digits.
#include<stdio.h>
int main(){
    int n ,digit=1;
    printf("enter a number");
    scanf("%d",&n);
    while(n!=0){
       digit=digit*(n%10);
       n/=10;
    }
    printf("multiplecation is=%d",digit);
    return 0;
}
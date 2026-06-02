//write a program to find sum of digits of a number.
#include<stdio.h>
int main(){
    int n ,sum=0;
    printf("enter a natural number");
    scanf("%d",&n);
    while(n!=0){
       sum=sum+n%10;
       n=n/10;
    }
    printf("sum of all digit is=%d",sum);
    return 0;
}
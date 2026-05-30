// Write a program to check whether a number is prime.
#include<stdio.h>
int main(){
    int n, count=0;
    printf("enter a number we  want to check prime or not");
    scanf("%d",&n);
    if(n<=1){
        printf("%d is not a prime number", n);
    }else{
        for(int i=1; i<=n; i++){
            if(n % i == 0){
                count++;
            }
        }
        if (count==2)
        {
            printf("%d is a  prime number");
        }else{
            printf("%d is not a prime number");
        }
    }
    return 0;
}
// write a program to find factorial of a number.
#include<stdio.h>
int main(){
    int n ;
    long long int fact=1;
    printf("enter a natural number");
    scanf("%d",&n);
    if(n==0){
        printf("1");
    }else{
   for(int i=1;i<=n;i++){
    fact=fact*i;
   }
   printf("factorial is: %ld",fact);
}
    return 0;
}
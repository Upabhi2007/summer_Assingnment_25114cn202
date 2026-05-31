// write a program to count digit in a number.
#include<stdio.h>
int main(){
    int n ,sum=0;
    printf("enter a natural number");
    scanf("%d",&n);
    if(n==0){
        printf("total number of digit:1");
    }else{
        int count=0;
        while (n!=0){
          n=n/10;
          count++;
        }
        printf("total number of digit:%d",count);
    }
    return 0;
}
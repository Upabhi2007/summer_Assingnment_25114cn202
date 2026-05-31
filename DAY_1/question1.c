//write a program to calculat the sum of first n natural number.
#include<stdio.h>
int main(){
    int n ,sum=0;
    printf("enter a natural number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("sum of all natural numberis=",sum);
    return 0;
}
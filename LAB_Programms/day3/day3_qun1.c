#include<stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    n%2==0 ? printf("the number is Even %d",n):printf("the number is a Odd %d",n);
    return 0;
}
#include<stdio.h>
int main(){
    int n,l;
    n=getchar();
    getchar();
    l=getc(stdin);
    int sum=n+l;
    printf("%c %d",sum,sum);
    return 0;
}
#include<stdio.h>

int main(){
    int a=8,b=3;
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("After swaping a=%d b=%d",a,b);
    return 0;
}
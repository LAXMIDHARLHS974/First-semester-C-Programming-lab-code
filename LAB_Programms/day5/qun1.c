#include<stdio.h>

int main(){
    int a=4,b=7;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swaping a=%d b=%d",a,b);
    return 0;
}
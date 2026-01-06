#include<stdio.h>
int main(){
    char n;
    n=getchar();
    int i=n;
    putchar(i);
    putchar(10);
    if(i>=100){
        putchar('0'+(i/100));
    }
    if(i>=10){
        putchar('0'+((i/10)%10));
    }
    putchar('0'+(i%10));
    return 0;
}
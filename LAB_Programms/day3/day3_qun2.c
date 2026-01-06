#include<stdio.h>

int main(){
    int a=10;
    printf("a = %d\n",a);
    int b=10;
    printf("d = %d\n",b++);
    printf("after prefix d = %d\n",b);
    int c=10;
    printf("c = %d\n",++c);
    printf("after post fix c = %d\n",c);
    return 0;
}
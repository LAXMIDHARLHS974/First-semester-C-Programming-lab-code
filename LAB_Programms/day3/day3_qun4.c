#include<stdio.h>

int main(){
    int a=1,b=12,c=123,d=1234,e=12345;
    printf("%d%09d\n",a,a);
    printf("%d%08d\n",b,b);
    printf("%d%07d\n",c,c);
    printf("%d%06d\n",d,d);
    printf("%d%d\n",e,e);

    return 0;
}
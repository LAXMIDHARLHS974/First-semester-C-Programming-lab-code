#include<stdio.h>

int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    for(int i=num;i>=1;i--){
            printf("the less number is %d\n",i);
    }
    return 0;
}
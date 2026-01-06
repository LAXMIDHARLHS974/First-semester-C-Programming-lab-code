#include<stdio.h>

int main(){
    for(int i=1;i<=10;i++){
        if(i%2==0){
            printf("the even number are %d\n",i);
        }
    }


    // int n;
    // printf("Enter a number:");
    // scanf("%d",&n);
    // for(int i=1;i<=n;i++){
    //    if(i<n){
    //     printf("%d",i);
    //    }
    // }


    // for(int i=100;i>=1;i--){
    //     printf("%d\n",i);
    // }

    // for(int i=65;i<=90;i++){
    //     printf("%c\n",i);
    // }
    // int i,sum=0;
    // for(int i=1;i<=10;i++){
    //     sum=sum+i;
    // }
    // printf("%d",sum);

    for(int r=1;r<=5;r++){
        printf("\n");
        for(int c=1;c<=5;c++){
            printf("*  ");
        }
        printf("\n");
    }
    return 0;
}
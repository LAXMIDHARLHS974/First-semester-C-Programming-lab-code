#include<stdio.h>
int main(){
    // int n;
    // int count=0;
    // printf("Enter a digit : ");
    // scanf("%d",&n);
    // int temp=n;
    // if(temp==0){
    //     count=1;
    // }
    // while(temp>0){
    //     temp=temp/10;
    //     count++;
    // }
    // printf("total digit in %d = %d \n",n,count);


//     int n,org,lastd,sum=0;
//     printf("Enter number greater than 10 : ");
//     scanf("%d",&n);
//     if(n <= 10){
//         printf("Enter greater than 10");
//     }

//     else { 
//         org=n;
//         while(n>0){
//         lastd=n%10;
//         sum=sum*10+lastd;
//         n=n/10;
//     }
//     if(org==sum){
//         printf("It is PALINDROME number %d ",sum);
//     }
//     else{
//         printf("It is not a PALINDROME number %d ",sum);
//     }
// }



    int n,temp,l,sum;
    for(n=10;n<=1000;n++){
        temp=n;
        sum=0;
        while(temp>0){
        l=temp%10;
        sum=sum*10+l;
        temp=temp/10;
        }
        if(n==sum){
        printf("%d\n",n);
        }
    }

    return 0;
}
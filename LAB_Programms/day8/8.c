#include <stdio.h>
int main(){
    // int i=2, j=2;
    // int prime;
    // for(i;i<=100;i++){
    //     prime=0;
    //     for(j;j<=i/2;j++){
    //         if(i%j==0){
    //             prime++;
    //             break;
    //         }
    // }
    // if(prime==0){
    //     printf("%d\n",i);
    //     }
    // }


    // int a,b;
    // printf("Enter a number : ");
    // scanf("%d",&a);
    // int prime=0;
    // for(int b=2;b<=a/2;b++){
    //     if(a%b==0){
    //         prime++;
    //         break;
    //     }
    // }
    // if(prime==0){
    //     printf("%d\n",a);
    // }
    // else{
    //     printf("It is not a prime number ");
    // }
    
//2

    // double n1=458.06;
    // double n2=44.991;
    // double n3=4533.100;
    // double large=n1;
    // if(n2 > large){
    //     large=n2;
    // }
    // if(n3 > large){
    //     large=n3;
    // }
    // printf("the largest value is =%.3f",large);

//3
    // double n1=8.06;
    // double n2=2.991;
    // double n3=23.100;
    // if(n1 > n2 && n1 > n3){
    //     printf("%.3f",n1);
    // }
    // else if (n2 > n3){
    //    printf("%.3f",n2);
    // }
    // else{
    //     printf("%.3f",n3);
    // }
    

    double n1=4.06;
    double n2=34.991;
    double n3=3.100;
    if(n1 > n2){
        if(n1>n3){
        printf("%.3f",n1);
        }
        else{
            printf("%.3f",n3);
        }
    }
    else{
        if(n2>n3){
       printf("%.3f",n2);
        }
        else{
            printf("%.3f",n3);
        }
    }
    
    return 0;
}
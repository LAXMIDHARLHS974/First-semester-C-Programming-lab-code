#include<stdio.h>
int main(){
    // int arr[5]={89,67,96,78,99};
    // int sum=0;
    // float avg;
    // for(int i=0;i<5;i++){
    //     sum=sum+arr[i];
    // }
    // avg=sum/5;
    // printf("%f",avg);

    // char arr[6]={"HELLO"};
    // for(int i=0;i<6;i++){
    //     printf("%c",arr[i]);
    // }
    // int arr[16];
    // int i,j=1;
    // for(i=0;i<15;i++,j++){
    //     arr[i]=j;
    //     printf("%d\n",arr[i]);
    // }
    // int size=sizeof(arr);
    // printf("%d",size);


    int a=10,b=20;
    int* arr[2];
    arr[0]=&a;
    arr[1]=&b;
    int sum = *arr[0] + *arr[1];
    printf("sum = %d",sum);


    return 0;
}
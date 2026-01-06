// #include<stdio.h>
// int main(){
//     // int  i;
//     // char* str="Hello everyone";
//     // for(i=0;str[i]!='\0';i++){
//     //     printf("%c",str[i]);
//     // }



//     // int n;
//     // printf("Enter how much space allocate : ");
//     // scanf("%d",&n);
//     // getchar();
//     // char str[n];
//     // printf("Enter your text : ");
//     // scanf("%[^\n]s",str);

//     // int length=0,i=0;

//     // while(str[i] != '\0'){
//     //     length++;
//     //     i++;
//     // }
//     // printf("you enter text : %s\n",str);
//     // printf("Length of string = %d\n", length);

//     return 0;
//}


// #include<stdio.h>
// void swap(int *a,int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
//     return ;
// }
// int main(){
//     int a,b;
    
//     printf("Enter a number : ");
//     scanf("%d",&a);
//     printf("Enter a number : ");
//     scanf("%d",&b);

//     printf("Before swaping : a=%d,b=%d",a,b);
// printf("\n");
//     swap(&a,&b);
//     printf("After swaping : a = %d,b = %d ",a,b);


//     return 0;
// }


// #include<stdio.h>
//     float add(float a,float b){
//         return (a+b);
//     }
//     float subtract(float a,float b){
//         return (a-b);
//     }
//     float multiply(float a,float b){
//         return (a*b);
//     }
//     float divide(float a,float b){
//         return (a/b);
//     }

// int main(){
//     float a,b,result;
//     int choice;
//     printf("Enter 1st number : ");
//     scanf("%f",&a);
//     printf("Enter 1st number : ");
//     scanf("%f",&b);
//     printf("-----CALCULATOR MENU-----");
//     printf("\n1.Add\n");
//     printf("2. Subtract\n");
//     printf("3. multiply\n");
//     printf("4. Divide\n");
//     printf("Enter your choice : ");
//     scanf("%d",&choice);

//     switch(choice){
//         case 1:
//             result=add(a,b);
//             printf("%.2f",result);
//             break;
//         case 2:
//             result=subtract(a,b);
//             printf("%.2f",result);
//             break;
//         case 3:
//             result=multiply(a,b);
//             printf("%.2f",result);
//             break;
//         case 4:
//             result=divide(a,b);
//             printf("%.2f",result);
//             break;
//             default:
//             printf("Invalid choice!\n");
//     }
// }


#include<stdio.h>
int fact(int n){
    int f=1;
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int g=fact(n);
    printf("%d",g);

    return 0;
}
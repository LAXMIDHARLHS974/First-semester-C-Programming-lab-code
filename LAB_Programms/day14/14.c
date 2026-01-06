#include<stdio.h>
int main(){
    // int n,rem;
    // printf("Enter the of binary : ");
    // scanf("%d",&n);
    // int arr[n];
    // for(int i=0;i<n;i++){
    //     scanf("%d",&arr[i]);
    // }
    // int deciaml=0,weight=1;

    // for(int i=n-1;i>=0;i--){
    //     deciaml=deciaml+arr[i]*weight;
    //     weight=weight*2;
    // }
    // printf("%d",deciaml);

    // char str[100];
    // printf("Enter text : ");
    // scanf("%[^\n]s",str);
    // int size=0;
    // int k=0;
    // while (str[k]!='\0'){
    //     size++;
    //     k++;
    // }
    // printf("You entered string size is %d\n",size);
    
    char str[100];
    printf("Enter text : ");
    scanf("%[^\n]s",str);
    int i=0,count=0;
        while(str[i] != '\0'){
        switch (str[i]){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
            count++;
            break;
        }
        i++;
    }
    printf("Total number of vowels = %d\n", count);

    return 0;
}
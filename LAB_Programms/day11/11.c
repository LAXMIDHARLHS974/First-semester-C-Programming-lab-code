#include<stdio.h>
#include<math.h>
int main(){
    // float pri;
    // printf("Enter amount : ");
    // scanf("%f",&pri);
    // float roi;
    // printf("Enter rate of intrest : ");
    // scanf("%f",&roi);
    // int t;
    // printf("Enter time : ");
    // scanf("%d",&t);
    
    // int Amount= pri*pow((1+roi/100),t);
    // int intrest=Amount-pri;
    // printf("total Amount = %d\n",Amount);
    // printf("total Intrest = %d\n",intrest);



    int n, count = 0, ldigit, temp;
    int sum = 0;
    printf("Enter a number : ");
    scanf("%d",&n);

        temp = n;
        while (temp != 0) {
            temp = temp / 10;
            count++;
        }

    temp = n;
    while (temp != 0) {
        ldigit = temp % 10;
        sum = sum + pow(ldigit, count);
        temp = temp / 10;
    }
    if (sum == n) {
        printf("%d is an Armstrong number.\n", n);
    } else {
        printf("%d is NOT an Armstrong number.\n", n);
    }

    return 0;
}
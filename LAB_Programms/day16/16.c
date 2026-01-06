// #include<stdio.h>
// #include<string.h>
// #include<ctype.h>
// int palindrome(char str[]){
//     int i=0;
//     int j=strlen(str)-1;
//     while(i<j){
//         if(str[i] != str[j]){
//             return 0;
//         }
//         i++;
//         j--;
//     }
//     return 1;
// }
// int main(){
//     char str[100];
//     printf("Enter a text : ");
//     scanf("%[^\n]s",str);
//     if(palindrome(str))
//         printf("The entered string is a palindrome.\n");
//     else
//         printf("The entered string is NOT a palindrome.\n");
//     return 0;
// }

#include<stdio.h>
 struct student{
    int rollno;
    int age;
    float cgpa;
    char gender;
 };
int main(){
    struct student s [5];
    for(int i=0;i<5;i++){
        printf("\nEnter details of student %d:\n", i + 1);
    printf("Enter rollnumber : ");
    scanf("%d",&s[i].rollno); 
    printf("Enter age : ");
    scanf("%d",&s[i].age);
    printf("Enter CGPA : ");
    scanf("%f",&s[i].cgpa);
    printf("Enter Gender : ");
    scanf(" %c",&s[i].gender);
    }

    for(int i=0;i<5;i++){
        printf("\nStudent %d\n", i + 1);
    printf("Roll Number : %d",s[i].rollno);
    printf("Age : %d",s[i].age);
    printf("CGPA : %.2f",s[i].cgpa);
    printf("GENDER : %c",s[i].gender);
    }

    return 0;
}
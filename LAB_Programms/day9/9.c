#include<stdio.h>
int main(){
    // char gender;
    // printf("Enter a character : ");
    // scanf("%c",&gender);
    // switch (gender){
    // case 'm':
    // case 'M':
    //     printf("The gender selected is MALE");
    //     break;
    // case 'f':
    // case 'F':
    //     printf("The gender selected is FEMALE");
    //     break;
    // default:
    //     printf("Unspecified GENDER");
    //      break;
    // }


    // char ch;
    // int ascii;
    // printf("Enter a character : ");
    // scanf("%c",&ch);
    // ascii=(int)ch;
    // printf("Ascii valueof %c =%d\n",ch,ascii);
    // int r = ascii%2;
    // switch (r){
    //     case 0:
    //         printf("EVEN");
    //         break;
    //     case 1:
    //         printf("ODD");
    //         break;
    //     }


    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch<= 'Z')){
        printf("The character '%c' is an alphabet.\n", ch);
        
    switch (ch){
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
        printf("it is a VOWEL");
        break;
    default:
        printf("It is a CONSONANT.\n");
        break;
    }
}
    else{
        printf("The character '%c' is NOT an alphabet.\n", ch);
    }

    return 0;
}
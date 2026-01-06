#include<stdio.h>
int main(){
    // int arr[4][5];
    // int value=10;
    // for(int r=0;r<4;r++){
    //     for(int c=0;c<5;c++){
    //         arr[r][c]=value;
    //         value=value+10;
    //        } 
    //     }

    //     for(int r=0;r<4;r++){
    //         printf("|");
    //     for(int c=0;c<5;c++){
    //         printf("%03d  ",arr[r][c]);
    //        }
    //        printf("|");
    //        printf("\n");
    //     }

    // int arr[3][3]={2,4,7,6,6,8,12,0,2};
    // int brr[3][3]={6,5,7,6,9,7,2,10,4};
    // int result[3][3];
    // for(int r=0;r<3;r++){
    //     for(int c=0;c<3;c++){
    //         result[r][c]=arr[r][c]+brr[r][c];
    //     }
    // }

    // for(int r=0;r<3;r++){
    //     printf("|");
    //     for(int c=0;c<3;c++){
    //         printf("%d ",result[r][c]);
    //     }
    //     printf("|");
    //     printf("\n");
    // }

    int arr[2][2]={2,4,6,6};
    int brr[2][2]={6,5,5,7};
    int result[2][2];
    for(int r=0;r<2;r++){
        for(int c=0;c<2;c++){
            result[r][c]=0;
            for(int k=0;k<2;k++){
                result[r][c]=result[r][c]+arr[r][k] * brr[k][c];
            }
        }
    }
    for(int r=0;r<2;r++){
        printf("|");
        for(int c=0;c<2;c++){
            printf("%d ",result[r][c]);
        }
        printf("|\n");
    }

    return 0;
}
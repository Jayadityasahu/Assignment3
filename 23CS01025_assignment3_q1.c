#include<stdio.h>

int main(){

    int x;
     printf("Enter an integer:");
     scanf("%d", &x);
     if(x>0){
        printf("The entered number is positive.\n");
     } else if(x<0){
        printf("The entered number is negative.\n");
     }else if(x=0){
        printf("The entered number is zero.\n");
     }

     return 0;
}
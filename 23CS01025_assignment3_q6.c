#include<stdio.h>

void main(){
    int x,y,j,t;
    printf("\n Enter number = ");
    scanf("%d", &x);
    y = x*x;
    int i;
    for(i=1; y!=0; i++) y/= 10;

    y = x*x;

    t = 10;

    for(j=1; j<i; j++)
    {
        int a, b;
        a = y/t;
        b = y%t;
        if(x==a+b){
            printf("\n It is a kaprekar number");
            break;
        }
     else t*=10;
    }  if (i==j) printf("\n The number is not a Kaprekar number");


    return 0;
}
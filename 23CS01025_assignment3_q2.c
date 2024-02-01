#include<stdio.h>

int main(){

    int p,q,r;

    printf("Enter three integer:");
    scanf("%d%d%d", &p,&q,&r);

    if(p>=q && p>=r){
        printf("%d is the largest number.\n", p);
    } else if(q>=p && q>= r){
        printf("%d is the largest number.\n", q);
    } else (r>=p && r>=q) ;{
        printf("%d is the largest number.\n", r);
    }

    return 0;
}
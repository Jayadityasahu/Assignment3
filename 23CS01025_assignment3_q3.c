#include<stdio.h>
int main(){
    int a,b,c;

    printf("Enter three psitive integers:");
    scanf("%d%d%d", &a, &b, &c);

    if((a + b > c)&&(b + c > a)&&(c + a > b)){
        printf("The given sides (%d,%d,%d) can form a triangle.\n", a,b,c);
    } else {"The given sides do not form a triangle.\n";}

    return 0;
}
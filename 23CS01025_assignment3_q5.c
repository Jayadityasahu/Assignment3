#include<stdio.h>

int main(){

    int dayslate;
    printf("Enter the number of days the member is late to return the book:");
    scanf("%d", &dayslate);

    if (dayslate <= 5){
        printf("Fine: %d rupee(s)\n", dayslate);
    } else if (dayslate <= 10){
        printf("Fine: 2 rupee(s)\n");
    } else if (dayslate <= 30){

        printf("Fine: 5 rupee(s)\n");
    }

    return 0;


}
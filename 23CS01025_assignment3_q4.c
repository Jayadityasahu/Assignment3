#include<stdio.h>

int main(){
    int x1,y1, x2,y2, x3,y3;

    printf("Enter coordinates of three points(x1 y1 x2 y2 x3 y3): ");
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);
    if ((y2 - y1)*(x3 - x2) == (y3 - y2)*(x2 - x1)){
        printf("The three points are collinear and lie on the same straight line.\n");
    } else {
        printf("The three points are not collinear.\n");
    }

    return 0;
}

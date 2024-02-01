#include<stdio.h>

int main(){

    int marks, classesattended, totalclasses;
    float attendanceweight, finalscore;
    char grade;

    printf("Enter marks obtained:");
    scanf("%d", &marks);

    printf("Enter number of classes attended:");
    scanf("%d", &classesattended);

    printf("Enter total number of classes:");
    scanf("%d", &totalclasses);

    if( marks < 0 || marks > 100 || classesattended > totalclasses){
        printf("Tnvalid input values. Please enter valid values.\n");
        return 1;
    }

    attendanceweight = (float)classesattended/totalclasses;

    finalscore = marks * attendanceweight;

    if (finalscore >= 90){
        grade = 'EX';
    } else if (finalscore >= 80){

        grade = 'A';
    } else if (finalscore >= 70){

        grade = 'B';
    }else if( finalscore >= 60){
        grade = 'C';
    }else if (finalscore >= 50){
        grade = 'D';
    } else if (finalscore >= 40){
        grade = 'P';
    }else {
        grade = 'F';
    }
    printf("Final score = %.2f\n", finalscore);
    printf("Grade is = %c", grade);

    return 0;
}
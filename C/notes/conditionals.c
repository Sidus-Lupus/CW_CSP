//CW Conditionals Notes
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int grade = 90;
int num = -3;
char name[] = "Lupus";

int main(){

    if(grade > 90){
        if(grade > 93){
            printf("Your grade is an A\n");
        }
        printf("Your grade is an A-\n");
    } else if (grade > 80) {
        printf("Your grade is a B\n");
    } else if (grade > 70){
        printf("Your grade is an A\n");
    } else if(grade > 60){
        printf("Your grade is an A\n");
    } else if(grade > 50){
        printf("Your grade is an A\n");
    } else{
        printf("You are failing\n");
    }

    if(num < 10 && num > -10){
        printf("Your number is %d, that is a single digit number\n", num);
    } else if( num < 100 && num > 9){
        printf("Your number is %d, that is a double digit number.\n", num);
    } else {
        printf("Your number is %d, that is a very big number\n", num);
    }

    if (strcmp(name, "Lupus") == 0){
        printf("Hello WOLF_LORD\n");
    } else{
        printf("Hello new user: %s\n", name);
    }

    return 0;
}

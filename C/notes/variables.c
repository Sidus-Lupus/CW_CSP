// This is a comment CW Variables

#include <stdio.h> // allows inputs and outputs

int main(){
    int number = 8;
    float pi = 3.14;
    char grade = 'A'; //single character is single quotes
    char name[] = "Zevon"; //string use [] after naming variable
    printf("Working!\n\n");
    printf("%d\n", number);
    printf("The digits of pi are: %f\n", pi);
    printf("Your name is %s you are %d old. You have an %c in programming. Pi is %f\n", name, number, grade, pi);
    return 0;
}
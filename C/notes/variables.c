// This is a comment CW Variables

#include <stdio.h> // allows inputs and outputs

int main(){
    int number = 8;
    const float pi = 3.14;
    char grade = 'A'; //single character is single quotes
    char name[] = "Zevon"; //string use [] after naming variable
    char user[50];

    number = 9;
    // pi = 3.15; <- this won't work becaues pi is a constant

    printf("Tell me your name\n");
    scanf("%s", &user);

    printf("The cult demands your age:\n");
    scanf("%d", &number);


    printf("Working!\n\n");
    printf("%d\n", number);
    printf("The digits of pi are: %f\n", pi);
    printf("Your name is %s you are %d old. You have an %c in programming. Pi is %f\n", user, number, grade, pi);
    return 0;
}
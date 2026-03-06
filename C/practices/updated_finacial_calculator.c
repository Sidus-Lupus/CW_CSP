//CW Financial Calculator

#include <stdio.h>
#include <math.h>

float income;
float rent;
float utilites;
float groceries;
float transportation;

float callUserExpense(char* expense){
    float user_expense = 0;
    printf("What is your monthly %s: ", expense);
    scanf("%f", &user_expense);
    return user_expense;
}

void printUserPercents(char* type, float expense){
    printf("Your monthly %s is $%.2f, and that is %.0f percent of your monthly income.\n", type, expense, (float)round((expense/income)*100));
}

int main(){
    income = callUserExpense("income");

    rent = callUserExpense("rent");

    utilites = callUserExpense("utilites");

    groceries = callUserExpense("groceries");

    transportation = callUserExpense("transportation");

    printf("\n");
    float remainining_income = income-(rent+utilites+groceries+transportation+(income/10));

    printUserPercents("rent", rent);

    printUserPercents("utilites", utilites);

    printUserPercents("utilites", groceries);

    printUserPercents("utilites", transportation);

    printf("You should save $%.2f each month, and that is 10 percent of your montly income. \n", round(income/10));

    printf("You have $%.2f remaining each month.", remainining_income);
    
    return 0;
}
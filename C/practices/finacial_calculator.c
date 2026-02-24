//CW Financial Calculator

#include <stdio.h>
#include <math.h>

float income;
float rent;
float utilites;
float groceries;
float transportation;

int main(){
    printf("What is your monthly income: ");
    scanf("%f", &income);

    printf("What is your monthly rent: ");
    scanf("%f", &rent);

    printf("What is your montly utilites: ");
    scanf("%f", &utilites);

    printf("What is your montly groceries: ");
    scanf("%f", &groceries);

    printf("What is your monthly transportation fees: ");
    scanf("%f", &transportation);

    printf("\n");
    float remainining_income = income-(rent+utilites+groceries+transportation+(income/10));

    printf("Your monthly rent is $%.2f, and that is %.0f percent of your monthly income. \n", rent, round((rent/income)*100));

    printf("Your monthly utilites is $%.2f, and that is %.0f percent of your montly income. \n", utilites, round((utilites/income)*100));

    printf("Your monthly groceries is $%.2f, and that is %.0f percent of your montly income. \n", groceries, round((groceries/income)*100));

    printf("Your monthly trasnportation is $%.2f, and that is %.0f percent of your montly income. \n", transportation, round((transportation/income)*100));

    printf("You should save $%.2f each month, and that is 10 percent of your montly income. \n", round(income/10));

    printf("You have $%.2f remaining each month.", remainining_income);
    return 0;
}
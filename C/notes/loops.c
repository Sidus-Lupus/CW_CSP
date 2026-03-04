//CW Loops
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
    int i = 1;
    while (i <= 10){
        printf("%d\n", i);
        i++;
    }

    // Retrieve random int
    srand(time(NULL)); //Creates a random number
    
    printf("%d\n", rand() % 11);
    printf("%d\n", (rand() % 10) + 1);
    printf("%d\n", rand() % 11);

    int goose = rand() %10 + 1;
    int count = 1;

    while (count < goose){
        printf("Duck\n");
        count++;

    }
    printf("Goose!");

    int number = rand() %20 + 1;

    while (true){
        int guess;
        printf("Guess a number between 1-20: ");
        scanf("%d", &guess);
        if(guess == number){
            printf("You win! the number was %d\n", number);
            break;
        }else if(guess < number){
            printf("Your guess is too low, go higher.\n");
        }else{
            printf("Your guess is too high, go lower.\n");
        }
    }

    return 0;
}
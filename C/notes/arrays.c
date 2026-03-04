//CW Arrays notes
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int grades[] = {90, 97, 95, 7, 0};
    printf("%d\n", grades[4]);
    grades[4] = -10;
    printf("%d\n", grades[4]);
    grades[4] = 0;

    float distance[] = {72.1, 66.3, 45.2, 27.45};

    char names[][20] = {"Cerberus", "Zevon", "Lupus", "Cannon"};
    printf("%s\n", names[3]);

    int grade_len = sizeof(grades)/ sizeof(grades[0]);
    for(int index = 0; index < grade_len; index++){
        printf("\n%d", grades[index] + 5);
    }
    for(int i = 20; i >= 0; i--){
        printf("%d ", i);
    }

    srand(time(NULL));
    int goose = rand() % 15 + 1;
    for(int count = 1; count < goose; count++){
        printf("Duck\n");
    }
    printf("Goose\n");
    
    return 0;
}
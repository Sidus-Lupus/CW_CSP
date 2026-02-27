//CW Time of Day
#include <stdio.h>

int main(){
    int current_time = 0;

    printf("What is the current time of day (24 hour time. E.g. 5:30 pm is 1730): ");
    scanf("%d", &current_time);

    if(current_time >= 600 && current_time < 1200){
        printf("Good morning user");
    } else if(current_time >= 1200 && current_time < 1800){
        printf("Good afternoon user");
    }else if(current_time >= 1800){
        printf("Good evening user");
    }else{
        printf("Go to bed user");
    }

    return 0;
}
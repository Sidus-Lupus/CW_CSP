//CW Arrays notes
#include <stdio.h>

int main(){
    int grades[] = {90, 97, 95, 7, 0};
    printf("%d\n", grades[4]);
    grades[4] = -10;
    printf("%d\n", grades[4]);
    grades[4] = 0;

    return 0;
}
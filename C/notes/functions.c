//CW Functions
#include <stdio.h>

int x = 0;
void add(){
    x++;
}

float divide(int dividend, int divisor){
    return (float) dividend / divisor;
}

void hello(char* name){
    printf("Hello %s, WOLF_LORD_OS says 'Hello!'\n", name);
}

int main(){
    add();
    add();
    add();
    add();
    add();
    printf("%d\n", x);

    printf("%.2f\n", divide(2, 2));

    hello("Lupus");
    hello("Zevon");
    hello("Cerberus");

    return 0;
}
//CW Integers and floats

#include <stdio.h>
#include <math.h>

int main(){
    int people = 10;
    int apples = 55;
    int room = 200;

    printf("%d people, %d apples, room %d\n", people, apples, room);
    printf("Each person gets %.1f apples\n", (float)apples/people);

    const float pi = 3.1415;
    float liters = 2.6;
    float fahrenheit = 72.8;

    printf("pi = %.4f, we have %.1f liters, and it is %.1f degrees.\n", pi, liters, fahrenheit);
    printf("%d\n", (int) round(liters));
    printf("%d is 2^3\n", (int) pow(2, 3));
    printf("%.1f\n", sqrt(16));
    printf(":3\n");

    return 0;
}
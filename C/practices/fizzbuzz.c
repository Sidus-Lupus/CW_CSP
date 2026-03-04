//CW Fizzbuzz
#include <stdio.h>

int main(){
    for(int count = 0; count <= 50; count++){
        if(count % 15 == 0){
            printf("FizzBuzz\n");
        } else if(count % 5 == 0 ){
            printf("Buzz\n");
        } else if(count % 3 == 0){
            printf("Fizz\n");
        } else{
            printf("%d\n", count);
        }
    }
}
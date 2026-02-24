//CW Strings

#include <stdio.h>
#include <string.h>

int main(){
    char subject[] = "Computer Science Principles";
    char fruit[] = "Pineapple";
    char book[50];

    printf("Subject: %s\nFruit: %s\n", subject, fruit);

    printf("What is your favorite book: ");
    //scanf("%s", &book);
    fgets(book, sizeof(book), stdin);

    printf("You have selected %s\n", book);

    //Concatenation
    char first[] = "Zevon";
    char last[] = "Wrainer";

    //first[0] = 'C';
    //first[1] = 'a';
    //first[2] = 'n';
    //first[3] = 'n';
    //first[4] = 'o';


    strcat(first, " ");
    strcat(first, last);

    printf("%s\n", first);

    char alpha[27];
    strcat(alpha, "abcdefghijklmnopqrstuvwxyz");

    printf("%s\n", alpha);

    //Find string length
    printf("%lu\n", strlen(first));

    return 0;
}
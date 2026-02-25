//CW silly sentences
#include <stdio.h>
#include <strings.h>

int main(){
    char verb1[50];
    char noun1[50];
    char animal[50];
    char place[50];

    printf("Provide a past tense verb: ");
    scanf("%s", &verb1);
    printf("Provide a noun: ");
    scanf("%s", &noun1);
    printf("Provide an animal: ");
    scanf("%s", &animal);
    printf("Provide a proper place: ");
    scanf("%s", &place);

    char sentence[100];
    strcat(sentence, "Wether we wanted it or not, we've ");
    strcat(sentence, verb1);
    strcat(sentence, " into a ");
    strcat(sentence, noun1);
    strcat(sentence, " with the ");
    strcat(sentence, animal);
    strcat(sentence, " on ");
    strcat(sentence, place);
    strcat(sentence, ".");

    printf("%s", sentence);
    return 0;
}
// CW Variables Practice

int main(){
    char name[50];
    int lucky_number;
    float decimal_number;
    char breakfast[50];
    char favorite_color[50];
    char school_initials[50];
    int current_year;
    char first_intial;
    int age;
    int movies_number;

    printf("What is your name:\n");
    scanf("%s", &name);
    
    printf("What is your lucky number:\n");
    scanf("%d", &lucky_number);

    printf("Pick a number with a decimal point:\n");
    scanf("%f", &decimal_number);

    printf("What did you eat for breakfast (one word):\n");
    scanf("%s", &breakfast);

    printf("What is your favorite color:\n");
    scanf("%s", &favorite_color);

    printf("What is the initals of your school:\n");
    scanf("%s", &school_initials);

    printf("What is the current year:\n");
    scanf("%d", &current_year);

    prinf("What is your first intial:\n");
    scanf("%c", &first_intial);

    printf("How old are you:\n");
    scanf("%d", &age);

    printf("How many movies do you own:\n");
    scanf("%d", &movies_number);
}
#include <stdio.h>

int main(void) {

    int guess = 50;
    int min = 1;
    int max = 100;
    char ch;

    printf("pick a number between 1 and 100 and i'll try to guess\n");
    printf("press < if guess is greater or > if is less\n");
    printf("my guess is: %d\n", guess);

    while ((ch = getchar()) != 'y') {
        
        if (ch == '<') {
            min = guess; 
        }

        if (ch == '>') {
            max = guess; 
        }

        if (ch == '\n') {
            continue; 
        }

        guess = (min + max) / 2;
        printf("my guess is: %d\n", guess);
    }
    return 0;
}
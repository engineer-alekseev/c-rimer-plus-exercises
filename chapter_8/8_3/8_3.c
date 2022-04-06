#include <stdio.h>

#define CAPITAL_START 65
#define LOWER_CASE_START 97
#define ALHABET_SIZE 25

int main(void) {
    int capital_letters = 0;
    int lower_case_letters = 0;
    int code;

    while ((code = getchar()) != EOF) {
        if (code >= CAPITAL_START && code <= (CAPITAL_START + ALHABET_SIZE))
            capital_letters += 1;

        if (code >= LOWER_CASE_START && code <= (LOWER_CASE_START + ALHABET_SIZE))
            lower_case_letters += 1;
    }

    printf("capital letters in input: %d\n", capital_letters);
    printf("lower case letters in input: %d\n", lower_case_letters);

    return 0;
}
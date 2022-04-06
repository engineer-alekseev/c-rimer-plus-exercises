#include <stdio.h>

int main(void) {
    char ch;
    int in_word = 0;
    int word_count = 0;
    int symbol_count = 0;

    while ((ch = getchar()) != EOF) {
        if (ch == ' ' || ch == '\n') {
            if (in_word) {
                in_word = 0;
            }
            continue;
        } else {
            symbol_count += 1;
            if (!in_word) {
                in_word = 1;
                word_count += 1;
            }
        }
    }

    printf("words in input: %d\n", word_count);
    printf("symbols in input: %d\n", symbol_count);
    printf("average count of symbols in word: %.2f\n", (float)symbol_count/(float)word_count);

    return 0;
}
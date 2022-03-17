#include <stdio.h>


int main(void) {
    int code;
    char symbol;
    
    while ((code = getchar()) != EOF) {
        symbol = (char)code;
        if (symbol == '\n') {
            char * str = "\\n";
            //printf("here!");
            printf("symbol: %5s code: %5d\n", str, code);
        } else {
            printf("symbol: %5c code: %5d\n", code, symbol);
        }
    }
    return 0;
}

#include <stdio.h>

int count_symbols(void);

int main(void) {
    int count = 0;
    count = count_symbols();
    printf("%d symbols counted\n", count);
    
    return 0;
}

int count_symbols(void){
    int counter = 0;
    while (getchar() != EOF)
        counter += 1;
    
    return counter;
}

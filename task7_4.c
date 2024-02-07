#include <stdio.h>

int main(void) {
    int number;

    printf("\n");
    scanf("%d", &number);

    printf("\n");
    while (number != 0) {
        if (number % 2 != 0) {          
            printf("%d ", number); 
        }
        scanf("%d", &number);
    }

    return 0;
}
#include <stdio.h>

void print_sequence(int a, int b);

int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    print_sequence(a, b);
    
    return 0;
}

void print_sequence(int a, int b) {
    if (a == b) { 
        printf("%d ", a);
    } else if (a < b) { 
        printf("%d ", a);
        print_sequence(a + 1, b);
        
    } else { // 
    printf("%d ", a);
        print_sequence(a - 1, b);
    }
}
#include <stdio.h>

int recurs_power(int n, int p) {

    if (p == 0) {
        return 1;
    }

    else {
        return n * recurs_power(n, p - 1);
    }
}

int main(void) {
    int n, p;

    scanf("%d", &n);

    scanf("%d", &p);
    
    int result = recurs_power(n, p);
    
    printf("%d\n", result);
    
    return 0;
}
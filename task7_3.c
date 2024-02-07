#include <stdio.h>

int count_ones(int num) {

    int count = 0;
    
    while (num != 0) {
        if (num & 1) {
            count++;
        }

        num >>= 1;
    }

    return count;
}

int main(void) {
    int num;
    scanf("%d", &num);
    
    int ones = count_ones(num);
    printf("%d\n", ones);
    
    return 0;
}

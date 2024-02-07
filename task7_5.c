#include <stdio.h>

int counter() {
    char c;
    scanf("%c", &c);
    
    if (c == '.') {
        return 0; 
    } else {
        int count = counter(); 
        if (c == 'a') {
            return count + 1; 
        } else {
            return count; 
        }
    }
}

int main(void) {
    printf("\n");
    
    int count = counter(); 
    
    printf("%d\n", count);
    
    return 0;
}
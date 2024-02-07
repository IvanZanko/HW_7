#include <stdio.h>

void print_num(int num) {
    if (num < 10) {
        // Если число меньше 10, выводим его и выходим из функции
        printf("%d ", num);
        return;
    }
    
    // Разделяем число на первую цифру и оставшуюся часть
    int first_digit = num / 10;
    int last_digit = num % 10;

    // Рекурсивно выводим оставшуюся часть числа
    print_num(first_digit);
    
    // Выводим первую цифру
    printf("%d ", last_digit);
}

int main(void) {
    int num;
    scanf("%d", &num);
    print_num(num);
    
    return 0;
}

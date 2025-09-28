#include <stdio.h>

void dec_to_hex(int num) {
    if (num == 0) return;
    
    dec_to_hex(num / 16);
    int digit = num % 16;
    
    if (num % 16 >= 10) printf("%c", digit - 10 + 'A');
    else printf("%d", digit);
}

int main() {
    dec_to_hex(4253);
}

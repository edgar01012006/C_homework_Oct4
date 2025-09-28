#include <stdio.h>

void dec_to_bin(int num) {
    if (num == 0) {
        return;
    }
    dec_to_bin(num >> 1);
    printf("%d", num & 1);
}

int main() {
    dec_to_bin(15);
    printf("\n");
    dec_to_bin(32);
}

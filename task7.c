#include <stdio.h>

int sum_mul(int num) {
    if (num == 0) {
        return 1;
    }
    return num % 10 * sum_mul(num / 10);
}

int main() {
    printf("%d", sum_mul(1234));
}
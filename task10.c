#include <stdio.h>

int GCD(int num1, int num2) {
    return (num2 == 0) ? num1 : GCD(num2, num1 % num2);
}

int main() {
    printf("%d", GCD(48, 18));
}
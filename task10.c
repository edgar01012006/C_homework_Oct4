#include <stdio.h>

/*

    48 36
    96 36
    144 % 36 == 0 (48 * 36 / 148 = 12)

*/

int max_div(int num1, int num2) {
    printf("a");
    if (num1 % num2 == 0) {
        return num1;
    }
    return (num1 * num2) / ((num1 > num2) ? max_div(num1 + num1, num2) : max_div(num2 + num2, num1));
}

int main() {
    int num1 = 0;
    int num2 = 0;
    printf("Enter num1 and num2\n");
    scanf("%d%d", &num1, &num2);
    printf("a");
    printf("Max div = %d\n", max_div(num1, num2));
}

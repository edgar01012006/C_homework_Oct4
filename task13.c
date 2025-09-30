#include <stdio.h>

int power_three(int num) {
    return num * num * num;
}

int arm(int num) {
    if (num == 0) {
        return 0;
    }
    return power_three(num % 10) + arm(num / 10);  
}

int main() {
    int num = 150;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf(arm(num) == num ? "True" : "False");
}
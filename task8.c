#include <stdio.h>

char ret_first_upp(char* str) {
    if (*str >= 'A' && *str <= 'Z') {
        return *str;
    }
    else if (*str == '\0') {
        return '\0';
    }
    return ret_first_upp(str + 1);
}

int main() {
    printf("%c", ret_first_upp("hello World!"));
}
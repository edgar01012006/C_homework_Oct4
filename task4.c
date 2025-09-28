#include <stdio.h>

int getLen(char* str) {
    if (*str == '\0') {
        return 0;
    }
    return 1 + getLen(++str);
}

int main() {
    printf("len = %d", getLen("Barev"));
}

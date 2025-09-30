#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isPalindrome(int num) {
    char* nums = (char*) calloc(sizeof(char), 32);
    int i = 0;
    while (num != 0) {
        nums[i++] = num % 10  + '0';
        num /= 10;
    }
    --i;
    int j = 0;
    while (j < i) {
        if (nums[j++] != nums[i--]) {
            return false;
        }
    }
    return true;
}

int reverseNum(int num) {
    int res = 0;
    while (num != 0) {
        res = (res * 10) + (num % 10);
        num /= 10;
    }
    return res;
}

int turnPalindrome(int num) {
    if (isPalindrome(num) == true) {
        return 0;
    }
    int cnt = 0;
    do {
        num = num + reverseNum(num);
        ++cnt;
    } while (isPalindrome(num) != true);
    return cnt;
}

int main() {
    int num = 0;
    printf("Enter a number\n");
    scanf("%d", &num);
    printf("turned into Palindrome in %d attempt(s)", turnPalindrome(num));
}
#include <stdio.h>

int find_missing_num(int* nums, int numsSize) {
    for (int i = numsSize - 1; i >= 0; --i) {
        for (int j = 1; j <= i; ++j) {
            if (nums[j - 1] > nums[j]) {
                int tmp = nums[j - 1];
                nums[j - 1] = nums[j];
                nums[j] = tmp;
            }
        }
    }

    /*
    for (int i = 0; i < numsSize; ++i) {
        printf("%d ", nums[i]);
    }
    */

    for (int i = 0; i < numsSize; ++i) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }
}

int main() {
    int size = 9;
    int arr[] = { 1,5,6,4,3,8,9,7,10 };
    printf("missing number = %d", find_missing_num(arr, size));
}
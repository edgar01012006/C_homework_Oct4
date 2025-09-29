#include <stdio.h>

int ret_max(int* nums, int numsSize) {
    if (numsSize == 0) {
        return nums[0];
    }
    int tmp = ret_max(nums, numsSize - 1);
    return (nums[numsSize] > tmp) ? nums[numsSize] : tmp;
}

int ret_min(int* nums, int numsSize) {
    if (numsSize == 0) {
        return nums[0];
    }
    int tmp = ret_min(nums, numsSize - 1);
    return (nums[numsSize] < tmp) ? nums[numsSize] : tmp;
}

int main() {
    const int size = 5;
    int arr[size] = { 1, 2, 3, 4, 5 };
    printf("max = %d\n", ret_max(arr, size - 1));
    printf("min = %d\n", ret_min(arr, size - 1));
}
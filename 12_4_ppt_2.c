#include<stdio.h>

int pivotindex(int* nums, int numsSize) {
    int leftSum = 0;
    int totalSum = 0;
    int *p=nums;
    for (int i = 0; i < numsSize; i++) {
        totalSum += *(p+i);
    }
    p=nums;
    for (int i = 0; i < numsSize; i++) {
        if (leftSum == totalSum - leftSum - *(p+i)) {
            return i;
        }
        leftSum += *(p+i);
    }
    return -1;
}
int main() {
    int nums[] = {1, 7, 3, 6, 5, 6};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    
    int result = pivotindex(nums, numsSize);
    printf("%d\n", result);
    return 0;
}
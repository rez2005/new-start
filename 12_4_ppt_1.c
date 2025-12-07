#include<stdio.h>
#include<stdlib.h>

int* twosum(int* nums, int numsSize, int target) {
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    return NULL;
}
int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    
    int* result = twosum(nums, numsSize, target);
    printf("[%d, %d]\n", result[0], result[1]);
    
    free(result);
    return 0;
}


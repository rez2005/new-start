#include<stdio.h>

void merge(int* nums1, int m, int* nums2, int n) {
    int *p1 = nums1 + m - 1; 
    int *p2 = nums2 + n - 1;
    int *p= nums1 + m + n - 1;
    while (p1 >= nums1 && p2 >= nums2) {
        if (*p1 > *p2) {
            *p = *p1;
            p1--;
        } else {
            *p = *p2;
            p2--;
        }
        p--;
    }
    while (p2 >= nums2) {
        *p = *p2;
        p2--;
        p--;
    }
}
int main() {
    int nums1[100]={3,5,9,11,12};
    int nums2[] = {1,4,5,6};
    int m = 5;
    int n = 4;
    merge(nums1, m, nums2, n);
    for (int i = 0; i < m + n; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");
    return 0;
}
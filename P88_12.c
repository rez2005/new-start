#include <stdio.h>

int main()
{
    int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
    int m;
    scanf("%d", &m);
    for (int i = m - 1; i >= 0; i--) {
        int temp = a[i];
        for (int j = i + 1; j < i + 10 - m + 1; j++) {
            a[j - 1] = a[j];
        }
        a[i + 10 - m] = temp;
    }
    for (int k = 0; k < 10; k++) {
        printf("%d ", a[k]);
    }
    return 0;
}
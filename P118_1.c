#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i != n) {
            for (int j = 1; j <= 2 * i; j++) {
                if (j == 1 || j == 2 * i - 1)
                    printf("*");
                else if (j == 2 * i)
                    printf("\n");
                else
                    printf(" ");
            }
        } else {
            for (int j = 1; j <= 2 * n - 1; j++) {
                if(j%2==0)
                    printf(" ");
                else
                printf("*");
            }
        }
    }
    return 0;
}

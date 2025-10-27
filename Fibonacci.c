#include <stdio.h>

int main()
{
    int fibonacci[100];
    fibonacci[0] = 1;
    fibonacci[1] = 1;
    for (int i = 2; i < 20; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
    for (int i = 0; i < 20; i++) {
        printf("%d ", fibonacci[i]);
        if (i == 4 || i == 9 || i == 14)
            printf("\n");
    }
    return 0;
}

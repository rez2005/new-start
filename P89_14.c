#include <stdio.h>

int main()
{
    int m;
    scanf("%d", &m);
    int a[100][100], b[100][100];
    for (int i = 1, x = 0, y = 0, count = 0; i <= m * m; i++) {
        a[x][y] = i;
        if (i < m * m / 2) {
            if (y == 0 && count % 2 == 0) {
                x++;
                count++;
            } else if (x == 0 && count % 2 == 1) {
                y++;
                count++;
            } else {
                if (count % 2 == 1) {
                    x--;
                    y++;
                } else {
                    x++;
                    y--;
                }
            }
        } else {
            if (y == m - 1 && count % 2 == 1) {
                x++;
                count++;
            } else if (x == m - 1 && count % 2 == 0) {
                y++;
                count++;
            } else {
                if (count % 2 == 1) {
                    x--;
                    y++;
                } else {
                    x++;
                    y--;
                }
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (int i = 1, count = 0, x = 0, y = 0; i <= m * m; i++) {
        if (count % 4 == 0 && (y == m - 1 || b[x][y + 1] != 0)) {
            b[x][y] = i;
            count++;
            x++;
        } else if (count % 4 == 0) {
            b[x][y] = i;
            y++;
        } else if (count % 4 == 1 && (x == m - 1 || b[x + 1][y] != 0)) {
            b[x][y] = i;count++;
            y--;
        } else if (count % 4 == 1) {
            b[x][y] = i;x++;
        } else if (count % 4 == 2 && (y == 0 || b[x][y - 1] != 0)) {
            b[x][y] = i;
            count++;
            x--;
        }
        else if (count % 4 == 2) {
            b[x][y] = i;
            y--;
        } else if (count % 4 == 3 && (x == 0 || b[x - 1][y] != 0)) {
            b[x][y] = i;
            count++;
            y++;
        } else if (count % 4 == 3) {
            b[x][y] = i;
            x--;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}

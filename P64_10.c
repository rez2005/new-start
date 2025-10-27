#include <stdio.h>

double absolute(double x) {
    return x < 0 ? -x : x;
}

double sqrt(double x) {
    if (x < 0) return -1;
    if (x == 0) return 0;

    double guess = x / 2.0;
    double a = 1e-10;

    while (absolute(guess * guess - x) > a) {
        guess = (guess + x / guess) / 2.0;
    }

    return guess;
}

double distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(dx * dx + dy * dy);
}


int iscollinear(double x1, double y1, double x2, double y2, double x3, double y3) {
    double crossproduct = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);
    return absolute(crossproduct) < 1e-10;
}

void judgetriangle(double a, double b, double c) {
    double sides[3] = { a, b, c };

    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (sides[i] > sides[j]) {
                double temp = sides[i];
                sides[i] = sides[j];
                sides[j] = temp;
            }
        }
    }

    double short1 = sides[0];
    double short2 = sides[1];
    double longest = sides[2];

    if (absolute(a - b) < 1e-10 && absolute(b - c) < 1e-10) {
        printf("����һ���ȱ�������\n");
        return;
    }

    int isisosceles = 0;
    if (absolute(a - b) < 1e-10 || absolute(b - c) < 1e-10 || absolute(a - c) < 1e-10) {
        isisosceles = 1;
    }

    double sum = short1 * short1 + short2 * short2;
    double hypotenuse = longest * longest;

    if (absolute(sum - hypotenuse) < 1e-10) {
        if (isisosceles) {
            printf("����һ������ֱ��������\n");
        }
        else {
            printf("����һ��ֱ��������\n");
        }
        return;
    }

    if (isisosceles) {
        printf("����һ������������\n");
        return;
    }

    printf("����һ����ͨ������\n");
}

int main() {
    double x1, y1, x2, y2, x3, y3;

    printf("�������һ���������(x1 y1): ");
    scanf_s("%lf %lf", &x1, &y1);

    printf("������ڶ����������(x2 y2): ");
    scanf_s("%lf %lf", &x2, &y2);

    printf("������������������(x3 y3): ");
    scanf_s("%lf %lf", &x3, &y3);

    if (iscollinear(x1, y1, x2, y2, x3, y3)) {
        printf("\n�������㹲�ߣ����ܹ��������Σ�\n");
        return 0;
    }

    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);

    printf("\n���߳��ȷֱ�Ϊ: %.2f, %.2f, %.2f\n", a, b, c);

    if (a + b > c && b + c > a && a + c > b) {
        printf("����������Թ��������Σ�\n");
        judgetriangle(a, b, c);
    }
    else {
        printf("�������㲻�ܹ��������Σ�\n");
    }

    return 0;
}
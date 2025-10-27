#include <stdio.h>

int main()
{
    int a;
    printf("������1-6֮���������");
    scanf_s("%d", &a);
    if (a < 1 || a > 6) {
        printf("�������\n");
    } else {
        switch (a) {
            case 1:
            case 2:
                printf("���ӵ���ɫ�Ǻ�ɫ�ġ�\n");
                break;
            case 3:
            case 4:
            case 5:
                printf("���ӵ���ɫ����ɫ�ġ�\n");
                break;
            case 6:
                printf("���ӵ���ɫ�ǻ�ɫ�ġ�\n");
                break;
        }
    }
    return 0;
}

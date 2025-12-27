#include <stdio.h>
#include <string.h>

int switchnumber(char c) {
    switch (c) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0;
    }
}

int main() {
    char roman[100];
    if (scanf("%s", roman) != 1) {
        return 0;
    }
    int length = strlen(roman);
    int total = 0;
    for (int i = 0; i < length; i++) {
        int current = switchnumber(roman[i]);
        int next = (i + 1 < length) ? switchnumber(roman[i + 1]) : 0;
        if (current < next) {
            total -= current;
        } else {
            total += current;
        }
    }
    printf("%d\n", total);
    return 0;
}
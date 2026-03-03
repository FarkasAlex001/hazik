#include <stdio.h>

int main() {
    int magassag;
    printf("Magasság: ");
    if (scanf("%d", &magassag) != 1) {
        return 1;
    }

    if (magassag <= 0 || magassag % 2 == 0) {
        printf("Hiba: Csak pozitív páratlan számot fogadjunk el!\n");
        return 0;
    }

    for (int i = 1; i <= magassag; i += 2) {
        for (int j = 0; j < (magassag - i) / 2; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = magassag - 2; i >= 1; i -= 2) {
        for (int j = 0; j < (magassag - i) / 2; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int is_sorted(int tomb[], int meret) {
    if (meret <= 1) {
        return 1;
    }

    for (int i = 0; i < meret - 1; i++) {
        if (tomb[i] > tomb[i + 1]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int szamok[] = {1, 2, 2, 4, 8};
    int n = 5;

    if (is_sorted(szamok, n)) {
        printf("A tomb rendezett.\n");
    } else {
        printf("A tomb NEM rendezett.\n");
    }

    return 0;
}
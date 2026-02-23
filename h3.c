#include <stdio.h>

int main() {
    int osszeg = 0;

    
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            osszeg += i;
        }
    }

    printf("A 3-mal vagy 5-tel oszthato szamok osszege 1000 alatt: %d\n", osszeg);

    return 0;
}
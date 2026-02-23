#include <stdio.h>

int main() {
    int osszeg = 0;

    // Ciklus 1-től 100-ig
    for (int i = 1; i <= 100; i++) {
        osszeg += i; // Hozzáadjuk az aktuális számot az összeghez
    }

    printf("Az egesz szamok osszege 1-tol 100-ig: %d\n", osszeg);

    return 0;
}
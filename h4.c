#include <stdio.h>

int main() {
    int szam;
    int osszeg = 0;

    // Folyamatosan kérünk be számokat
    do {
        printf("Egesz szam (vege: 0): ");
        scanf("%d", &szam);
        
        // Hozzáadjuk az összeget, a 0 hozzáadása nem változtat semmit
        osszeg += szam;

    } while (szam != 0); // Addig ismételjük, amíg a beírt szám nem 0

    printf("Elemek osszege: %d\n", osszeg);

    return 0;
}
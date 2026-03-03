#include <stdio.h>
#include <math.h>

// Függvény a kör kerületének kiszámítására: K = 2 * r * PI
double szamolKerulet(double r) {
    return 2 * r * M_PI;
}

// Függvény a kör területének kiszámítására: T = r^2 * PI
double szamolTerulet(double r) {
    return pow(r, 2) * M_PI;
}

int main() {
    double sugar;

    printf("Adja meg a kor sugarat: ");
    if (scanf("%lf", &sugar) != 1) {
        printf("Hiba: Ervenytelen bemenet!\n");
        return 1;
    }

    if (sugar >= 0) {
        // Kiíratás 2 tizedesjegy pontossággal
        printf("A kor kerulete: %.2f\n", szamolKerulet(sugar));
        printf("A kor terulete: %.2f\n", szamolTerulet(sugar));
    } else {
        printf("Hiba: A kor sugara nem lehet negativ!\n");
    }

    return 0;
}
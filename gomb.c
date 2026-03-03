#include <stdio.h>
#include <math.h>

double get_double() {
    double n;
    scanf("%lf", &n);
    return n;
}

double gomb_felszin(double r) {
    return 4 * pow(r, 2) * M_PI;
}

double gomb_terfogat(double r) {
    return (4.0 / 3.0) * pow(r, 3) * M_PI;
}

int main() {
    printf("Adja meg a gomb sugarat: ");
    double r = get_double();

    if (r >= 0) {
        printf("Felszin: %.2f\n", gomb_felszin(r));
        printf("Terfogat: %.2f\n", gomb_terfogat(r));
    } else {
        printf("A sugar nem lehet negativ!\n");
    }

    return 0;
}
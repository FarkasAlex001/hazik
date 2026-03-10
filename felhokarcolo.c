#include <stdio.h>

int abs_ertek(int a, int b) {
    if (a > b) return a - b;
    return b - a;
}

int szomszedos_kulonbseg_osszeg(int tomb[], int meret) {
    int osszeg = 0;
    for (int i = 0; i < meret - 1; i++) {
        osszeg += abs_ertek(tomb[i], tomb[i + 1]);
    }
    return osszeg;
}

int main() {
    int szamjegyek[400] = {0};
    szamjegyek[0] = 1;
    int n = 1;

    for (int i = 0; i < 1024; i++) {
        int maradek = 0;
        for (int j = 0; j < n; j++) {
            int szorzat = szamjegyek[j] * 2 + maradek;
            szamjegyek[j] = szorzat % 10;
            maradek = szorzat / 10;
        }
        while (maradek) {
            szamjegyek = maradek % 10;
            maradek /= 10;
            n++;
        }
    }

    int rendezett_szamjegyek[400];
    for (int i = 0; i < n; i++) {
        rendezett_szamjegyek[i] = szamjegyek[n - 1 - i];
    }

    int eredmeny = szomszedos_kulonbseg_osszeg(rendezett_szamjegyek, n);
    printf("%d\n", eredmeny);

    return 0;
}
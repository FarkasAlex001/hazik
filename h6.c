#include <stdio.h>

int main() {
    int szam;
    int pozitiv_db = 0;
    int negativ_db = 0;
    do {
        printf("Egesz szam (vege: 0): ");
        scanf("%d", &szam);
        if (szam > 0) {
            pozitiv_db++;
        } else if (szam < 0) {
            negativ_db++;
        }
    } while (szam != 0);
    printf("Pozitiv elemek szama: %d\n", pozitiv_db);
    printf("Negativ elemek szama: %d\n", negativ_db);
    return 0;
}
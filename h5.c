#include <stdio.h>

int main() {
    int szam;
    int szamlalo = 0; 

    do {
        printf("Egesz szam (vege: 0): ");
        scanf("%d", &szam);
        
        
        if (szam > 0) {
            szamlalo++;
        }

    } while (szam != 0);

    printf("Pozitiv elemek szama: %d\n", szamlalo);

    return 0;
}
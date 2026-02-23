#include <stdio.h>

int LIMIT = 1000;

int main()
{
    int szam;
    int total = 0;

    printf("Egesz szam (vege: 0): ");
    scanf("%d", &szam);

    while (szam != 0) 
    {
        ++total;
        printf("Egesz szam (vege: 0): ");
        scanf("%d", &szam);
    }

    printf("A megadott ertekek szama: %d\n", total);

    return 0;
}
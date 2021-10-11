#include <stdio.h>
#include <stdlib.h>

void main()
{
    system ("color 74");
    char nilai;
    printf ("Nilai kamu berapa? ");
    scanf   ( "%c", &nilai);

    switch (nilai)
    {
    case ('A') : printf ("Sangat Baik"); break;
    case ('B') : printf ("Baik"); break;
    case ('C') : printf ("Cukup Baik"); break;
    case ('D') : printf ("Kurang"); break;
    default : printf ("Kurang Sekali"); break;
    }
}

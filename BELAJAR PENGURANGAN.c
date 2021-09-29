#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, hasil;

    printf ("Pengurangan bilangan\n\n");

    printf ("Masukkan bilangan pertama = ");
    scanf  ("%d", &a);

    printf ("Masukkan bilangan kedua = ");
    scanf  ("%d", &b);

    hasil = a - b;
    printf ("Hasil pengurangan adalah = %d", hasil);

}

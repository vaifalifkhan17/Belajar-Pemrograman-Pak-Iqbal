#include <stdio.h>
#include <stdlib.h>

void main()
{
    system ("color 74");
    int nilai;
    printf ("Masukkan Nilai : ");
    scanf ("%d", &nilai); //deklarasi input

    if (nilai >= 100) {
        printf ("Nilai Anda : A");
    } else if (nilai <100 && nilai >= 90){
        printf ("Nilai Anda : B");
    } else if (nilai <90 && nilai >= 85) {
        printf ("Nilai Anda : C");
    } else if (nilai <85 && nilai >= 70) {
        printf ("Nilai Anda : D");
    }else printf ("Nilai Anda : E"); //Deklrasi logika if else if

}

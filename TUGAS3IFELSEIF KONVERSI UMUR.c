#include <stdio.h>
#include <stdlib.h>

void main()
{
    system ("color 71");
    int Angka;

    printf ("_____________________________________________________________\n\n");
    printf ("--------Konversi Kategori Umur Menurut Depkes RI 2009--------\n\n");
    printf ("_____________________________________________________________\n\n");

    printf ("Masukkan Umur Anda : ");
    scanf  ("%d", &Angka);

    if (Angka <=5){
        printf ("Anda Berada Pada Masa Balita\n\n");
    }
    else if (Angka >5 && Angka <=12){
        printf ("Anda Berada Pada Masa Kanak-Kanak\n\n");
    }
    else if (Angka >12 && Angka <=17){
        printf ("Anda Berada Pada Masa Remaja Awal\n\n");
    }
    else if (Angka >17 && Angka <=26){
        printf ("Anda Berada Pada Masa Remaja Akhir\n\n");
    }
    else if (Angka >26 && Angka <=36){
        printf ("Anda Berada Pada Masa Dewasa Awal\n\n");
    }
    else if (Angka >36 && Angka <=46){
        printf ("Anda Berada Pada Masa Dewasa Akhir\n\n");
    }
    else if (Angka >46 && Angka <=56){
        printf ("Anda Berada Pada Masa Lansia Awal\n\n");
    }
    else if (Angka >56 && Angka <=65){
        printf ("Anda Berada Pada Masa Lansia Akhir\n\n");
    }
    else printf("Anda Berada Pada Masa Manula\n\n");

}


#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("color 74");
    int Angka;

    printf ("__________________________________________________________________\n\n");
    printf ("____________Selamat Datang di Layanan Cek Bonus Belanja___________\n\n");
    printf ("__________________________________________________________________\n\n");

    printf ("-------Belanja Pertama---------\n\n\n");
    printf ("Masukkan Total Belanjaan Anda: ");
    scanf  ("%d" , &Angka);


    if (Angka >100000  ) // Pemilihan 1 Kasus
    {
    printf ("Selamat! Anda mendapatkan hadiah:  1 Liter Minyak Goreng Bimoli\n\n\n ");
    // Statement hadiah akan ditampilkan\n\n
    }
    printf ("________Terima Kasih dan Sampai Jumpa Kembali________\n\n\n");

return 0;
}

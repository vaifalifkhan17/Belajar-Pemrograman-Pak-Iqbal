#include <stdio.h>
#include <stdlib.h>

int main()
{
   system ("color 74");
   int Angka;

   printf ("---------Konversi Nilai Ujian--------\n\n");
   printf ("----Universitas hayam Wuruk Surabaya----\n\n\n");

   printf ("________Perolehan Nilai Pertama___________\n\n");
   printf ("Masukkan Nilai Anda : ");
   scanf  ("%d", &Angka);

   if (Angka >70)//konversi nilai
   {
    printf ("Predikat Kelulusan : Lulus\n\n");
    //Keterangan Kelulusan Akan Ditampilkan
    printf ("Selamat! Anda tidak mengulang ujian\n\n");
   }
   else
   {
    printf ("Predikat Kelulusan : Mengulang\n\n ");
    //Keterangan Mengulang Akan Ditampilkan
    printf ("Mohon maaf, Anda harus mengulang ujian\n\n");
   }
   return (0);

}


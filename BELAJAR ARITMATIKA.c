#include <stdio.h>
#include <stdlib.h>

void main()
{
   int x, y , z, hasil1, hasil2, hasil3, hasil4;

   printf ("Masukkan nilai x : ");
   scanf ("%d" , &x) ;
   //fungsi memasukkan inputan x

   printf ("Masukkan nilai y : ");
   scanf ("%d", &y);
   //fungsi memasukkan inputan y

   printf ("MAsukkan nilai z : ");
   scanf ("%d", &z);
   //fungsi memasukkan inputan z

   hasil1 = x+y*z;
   hasil2 = (x+y)*z ;
   hasil3 = x*y+z;
   hasil4 = (x*y)+z;
   //proses aritmatika

   printf ("\n Hasil1 x+y*z adalah = %d", hasil1);
   printf ("\n Hasil2 (x+y)*z adalah = %d", hasil2);
   printf ("\n Hasil3 x*y+z adalah = %d", hasil3);
   printf ("\n Hasil4 (x*y)+z adalah = %d", hasil4);

}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("color 74");
    int pilihan;

    printf ("Daftar Do'a Harian: \n");
    printf ("1. Do'a Sebelum Belajar\n");
    printf ("2. Do'a Sesudah Belajar\n");
    printf ("3. Do'a Sebelum Makan\n");
    printf ("4. Do'a Sesudah Makan\n");
    printf ("5. Do'a Untuk Kedua Orang Tua\n");
    printf ("6. Do'a Selamat Dunia Akhirat\n\n");
    printf ("Masukkan Do'a Pilihan (1/2/3/4/5/6) : ");
    scanf ("%d", &pilihan);

    switch (pilihan)
    {
        case 1 : printf ("Rodlittu billahirobba, wabi islamidina, wabimuhammadin nabiyyaw warasulla ,robbi zidnii ilmaa warzuqnii fahmaa. Robbi zidnii 'ilman warzuqnii fahmaa, waj'alnii minash-shoolihiin\n\n\n");break;
        case 2 : printf ("Allaahumma innii istaudi'uka maa 'allamtaniihi fardud-hu ilayya 'inda haajatii wa laa tansaniihi yaa robbal 'alamiin\n\n\n");break;
        case 3 : printf ("Allahumma baarik lanaa fiimaa rozaqtanaa wa qinaa 'adzaa bannar\n\n\n");break;
        case 4 : printf ("Alhamdulillahilladzi ath-amanaa wa saqoona wa ja'alanaa minal muslimiin\n\n\n");break;
        case 5 : printf ("Alloohummaghfirlii waliwaalidayya warham humma kamaa rabbayaa nii shaghiiraa\n\n\n");break;
        case 6 : printf ("Allaahumma innaa nas aluka salaamatan fid diin, wa 'aafiyatan fil jasad, wa ziyadatan fil 'ilmi, wabarokatan dir rizqi, wa taubatan qoblal maut, warohmatan indal maut, wa maghfirotan ba'dal maut\n\n\n");break;
        default : printf ("Maaf, Angka yang Anda pilih Tidak Tersedia\n\n\n");break;
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int pilNegara, pilInformasi;
//program utama pemilihan negara

int main ()
{
    system ("color 71");
    int pilNegara, pilInformasi;

while (1)
 {
    printf("\t ***********************************************************************************\n");
    printf("\t ||||||||||||||||||||||=====================================||||||||||||||||||||||||\n");
    printf("\t ||||||||||||||||||||||---------INFO SEPUTAR DUNIA----------||||||||||||||||||||||||\n");
    printf("\t ||||||||||||||||||||||=====================================||||||||||||||||||||||||\n");
    printf("\t ||||||||||||||||||||||    MARI MENGENAL 10 ANGGOTA ASEAN   ||||||||||||||||||||||||\n");
    printf("\t ***********************************************************************************\n");
    printf("\t ||| 1 = Indonesia \t\t 6 = Filiphina \t\t\t\t\t ||| \n \t ||| 2 = Singapura \t\t 7 = Kamboja \t\t\t\t\t ||| \n");
    printf("\t ||| 3 = Brunei_Darussalam \t 8 = Vietnam \t\t\t\t\t |||  \n \t ||| 4 = Malaysia \t\t 9 = Myanmar \t\t\t\t\t |||  \n");
    printf("\t ||| 5 = Thailand \t\t 10= Laos \t\t\t\t\t |||  \n \t |||  \t\t\t\t\t   \n");
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| MASUKKAN ANGKA PILIHAN NEGARA DI ATAS (1/2/3/4/5/6/7/8/9/10): "); scanf (" %d", &pilNegara);

    switch (pilNegara)
    {
    case 1  : printf ("\t ||| \t\t Indonesia                                                       |||\n");
    informasi_indonesia();break;

    case 2  : printf ("\t ||| \t\t Singapura                                                       |||\n");
    informasi_singapura();break;

    case 3  : printf ("\t ||| \t\t Brunei_Darussalam                                               |||\n");
    informasi_brunei_darussalam();break;

    case 4  : printf ("\t ||| \t\t Malaysia                                                        |||\n");
    informasi_malaysia();break;

    case 5  : printf ("\t ||| \t\t Thailand                                                        |||\n");
    informasi_thailand();break;

    case 6  : printf ("\t ||| \t\t Filiphina                                                       |||\n");
    informasi_filiphina();break;

    case 7  : printf ("\t ||| \t\t Kamboja                                                         |||\n");
    informasi_kamboja();break;

    case 8  : printf ("\t ||| \t\t Vietnam                                                         |||\n");
    informasi_vietnam();break;

    case 9  : printf ("\t ||| \t\t Myanmar                                                         |||\n");
    informasi_myanmar();break;

    case 10 : printf ("\t ||| \t\t Laos                                                            |||\n");
    informasi_laos();break;

    default : printf ("\t ||| \t\t Maaf, Angka yang Anda pilih Tidak Tersedia                      |||\n");break;
    }
 }
}


//fungsi terkait informasi negara
void informasi_indonesia ()
{
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| INFORMASI APA YANG INGIN ANDA CARI TERKAIT NEGARA TERSEBUT?                 |||\n");
    printf("\t ||| 1. Tanggal Masuk Asean                                                      |||\n");
    printf("\t ||| 2. Julukan Negara                                                           |||\n");
    printf("\t ||| 3. Bentuk Negara                                                            |||\n");
    printf("\t ||| 4. Ibu Kota                                                                 |||\n");
    printf("\t ||| 5. Luas Wilayah                                                             |||\n");
    printf("\t ||| 6. Mata Uang                                                                |||\n");
    printf("\t ||| 7. Barang Tambang                                                           |||\n");
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| MASUKKAN ANGKA PILIHAN UNTUK INFORMASI LEBIH LANJUT (1/2/3/4/5/6/7): "); scanf ("%d", &pilInformasi);

	switch (pilInformasi)
    {
    case 1  : printf ("\t ||| \t\t Tanggal 8 Agustus 1967                                          |||\n");break;
    case 2  : printf ("\t ||| \t\t Negara Maritim, Negara Agraris, Jamrud Katulistiwa              |||\n");break;
    case 3  : printf ("\t ||| \t\t Republik (Presiden)                                             |||\n");break;
    case 4  : printf ("\t ||| \t\t Jakarta                                                         |||\n");break;
    case 5  : printf ("\t ||| \t\t 5.193.250 km2                                                   |||\n");break;
    case 6  : printf ("\t ||| \t\t Rupiah                                                          |||\n");break;
    case 7  : printf ("\t ||| \t\t Minyak Bumi, Batu Bara, Timah, Emas, Perak                      |||\n");break;
    default : printf ("\t ||| \t\t Maaf, Angka yang Anda pilih Tidak Tersedia                      |||\n");break;
    }
    printf("\t |||=============================================================================|||\n");
    printf("\t ||||||||||||||||||||||-------------TERIMA KASIH------------||||||||||||||||||||||||\n");
    printf("\t ||||||||||||||||||||||----------SEMANGAT BELAJARNYA--------||||||||||||||||||||||||\n");
    printf("\t |||=============================================================================|||\n");
}

//fungsi terkait informasi negara
void informasi_singapura ()
{
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| INFORMASI APA YANG INGIN ANDA CARI TERKAIT NEGARA TERSEBUT?                 |||\n");
    printf("\t ||| 1. Tanggal Masuk Asean                                                      |||\n");
    printf("\t ||| 2. Julukan Negara                                                           |||\n");
    printf("\t ||| 3. Bentuk Negara                                                            |||\n");
    printf("\t ||| 4. Ibu Kota                                                                 |||\n");
    printf("\t ||| 5. Luas Wilayah                                                             |||\n");
    printf("\t ||| 6. Mata Uang                                                                |||\n");
    printf("\t ||| 7. Barang Tambang                                                           |||\n");
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| MASUKKAN ANGKA PILIHAN UNTUK INFORMASI LEBIH LANJUT (1/2/3/4/5/6/7): "); scanf ("%d", &pilInformasi);

	switch (pilInformasi)
    {
    case 1  : printf ("\t ||| \t\t Tanggal 8 Agustus 1967                                          |||\n");break;
    case 2  : printf ("\t ||| \t\t Seribu Satu Larangan                                            |||\n");break;
    case 3  : printf ("\t ||| \t\t Republik (Presiden)                                             |||\n");break;
    case 4  : printf ("\t ||| \t\t Singapura                                                       |||\n");break;
    case 5  : printf ("\t ||| \t\t 697.1 km2                                                       |||\n");break;
    case 6  : printf ("\t ||| \t\t Dollar                                                          |||\n");break;
    case 7  : printf ("\t ||| \t\t Tidak ada                                                       |||\n");break;
    default : printf ("\t ||| \t\t Maaf, Angka yang Anda pilih Tidak Tersedia                      |||\n");break;
    }
    printf("\t |||=============================================================================|||\n");
    printf("\t ||||||||||||||||||||||-------------TERIMA KASIH------------||||||||||||||||||||||||\n");
    printf("\t ||||||||||||||||||||||----------SEMANGAT BELAJARNYA--------||||||||||||||||||||||||\n");
    printf("\t |||=============================================================================|||\n");
}

//fungsi terkait informasi negara
void informasi_brunei_darussalam ()
{
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| INFORMASI APA YANG INGIN ANDA CARI TERKAIT NEGARA TERSEBUT?                 |||\n");
    printf("\t ||| 1. Tanggal Masuk Asean                                                      |||\n");
    printf("\t ||| 2. Julukan Negara                                                           |||\n");
    printf("\t ||| 3. Bentuk Negara                                                            |||\n");
    printf("\t ||| 4. Ibu Kota                                                                 |||\n");
    printf("\t ||| 5. Luas Wilayah                                                             |||\n");
    printf("\t ||| 6. Mata Uang                                                                |||\n");
    printf("\t ||| 7. Barang Tambang                                                           |||\n");
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| MASUKKAN ANGKA PILIHAN UNTUK INFORMASI LEBIH LANJUT (1/2/3/4/5/6/7): "); scanf ("%d", &pilInformasi);

	switch (pilInformasi)
    {
    case 1  : printf ("\t ||| \t\t Tanggal 8 Januari 1984                                          |||\n");break;
    case 2  : printf ("\t ||| \t\t Petro Dollar                                                    |||\n");break;
    case 3  : printf ("\t ||| \t\t Kerajaan (Sultan)                                               |||\n");break;
    case 4  : printf ("\t ||| \t\t Bandar Seri Begawan                                             |||\n");break;
    case 5  : printf ("\t ||| \t\t 5765 km2                                                        |||\n");break;
    case 6  : printf ("\t ||| \t\t Dollar  Brunei                                                  |||\n");break;
    case 7  : printf ("\t ||| \t\t Minyak Bumi dan Gas Alam                                        |||\n");break;
    default : printf ("\t ||| \t\t Maaf, Angka yang Anda pilih Tidak Tersedia                      |||\n");break;
    }
    printf("\t |||=============================================================================|||\n");
    printf("\t ||||||||||||||||||||||-------------TERIMA KASIH------------||||||||||||||||||||||||\n");
    printf("\t ||||||||||||||||||||||----------SEMANGAT BELAJARNYA--------||||||||||||||||||||||||\n");
    printf("\t |||=============================================================================|||\n");
}

//fungsi terkait informasi negara
void informasi_malaysia ()
{
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| INFORMASI APA YANG INGIN ANDA CARI TERKAIT NEGARA TERSEBUT?                 |||\n");
    printf("\t ||| 1. Tanggal Masuk Asean                                                      |||\n");
    printf("\t ||| 2. Julukan Negara                                                           |||\n");
    printf("\t ||| 3. Bentuk Negara                                                            |||\n");
    printf("\t ||| 4. Ibu Kota                                                                 |||\n");
    printf("\t ||| 5. Luas Wilayah                                                             |||\n");
    printf("\t ||| 6. Mata Uang                                                                |||\n");
    printf("\t ||| 7. Barang Tambang                                                           |||\n");
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| MASUKKAN ANGKA PILIHAN UNTUK INFORMASI LEBIH LANJUT (1/2/3/4/5/6/7): "); scanf ("%d", &pilInformasi);

	switch (pilInformasi)
    {
    case 1  : printf ("\t ||| \t\t Tanggal 8 Agustus 1967                                          |||\n");break;
    case 2  : printf ("\t ||| \t\t Negeri Jiran                                                    |||\n");break;
    case 3  : printf ("\t ||| \t\t Kerajaan (Sultan yang dipertuan Agung)                          |||\n");break;
    case 4  : printf ("\t ||| \t\t Kuala Lumpur                                                    |||\n");break;
    case 5  : printf ("\t ||| \t\t 330.300                                                         |||\n");break;
    case 6  : printf ("\t ||| \t\t Ringgit                                                         |||\n");break;
    case 7  : printf ("\t ||| \t\t Biji Timah, Bauksit, Biji Besi, Minyak Bumi                     |||\n");break;
    default : printf ("\t ||| \t\t Maaf, Angka yang Anda pilih Tidak Tersedia                      |||\n");break;
    }
    printf("\t |||=============================================================================|||\n");
    printf("\t ||||||||||||||||||||||-------------TERIMA KASIH------------||||||||||||||||||||||||\n");
    printf("\t ||||||||||||||||||||||----------SEMANGAT BELAJARNYA--------||||||||||||||||||||||||\n");
    printf("\t |||=============================================================================|||\n");
}

//fungsi terkait informasi negara
void informasi_thailand ()
{
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| INFORMASI APA YANG INGIN ANDA CARI TERKAIT NEGARA TERSEBUT?                 |||\n");
    printf("\t ||| 1. Tanggal Masuk Asean                                                      |||\n");
    printf("\t ||| 2. Julukan Negara                                                           |||\n");
    printf("\t ||| 3. Bentuk Negara                                                            |||\n");
    printf("\t ||| 4. Ibu Kota                                                                 |||\n");
    printf("\t ||| 5. Luas Wilayah                                                             |||\n");
    printf("\t ||| 6. Mata Uang                                                                |||\n");
    printf("\t ||| 7. Barang Tambang                                                           |||\n");
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| MASUKKAN ANGKA PILIHAN UNTUK INFORMASI LEBIH LANJUT (1/2/3/4/5/6/7): "); scanf ("%d", &pilInformasi);

	switch (pilInformasi)
    {
    case 1  : printf ("\t ||| \t\t Tanggal 8 Agustus 1967                                          |||\n");break;
    case 2  : printf ("\t ||| \t\t Gajah Putih dan Seribu Pagoda                                   |||\n");break;
    case 3  : printf ("\t ||| \t\t Kerajaan                                                        |||\n");break;
    case 4  : printf ("\t ||| \t\t Bangkok                                                         |||\n");break;
    case 5  : printf ("\t ||| \t\t 513.998 km2                                                     |||\n");break;
    case 6  : printf ("\t ||| \t\t Baht                                                            |||\n");break;
    case 7  : printf ("\t ||| \t\t Timah dan mangan                                                |||\n");break;
    default : printf ("\t ||| \t\t Maaf, Angka yang Anda pilih Tidak Tersedia                      |||\n");break;
    }
    printf("\t |||=============================================================================|||\n");
    printf("\t ||||||||||||||||||||||-------------TERIMA KASIH------------||||||||||||||||||||||||\n");
    printf("\t ||||||||||||||||||||||----------SEMANGAT BELAJARNYA--------||||||||||||||||||||||||\n");
    printf("\t |||=============================================================================|||\n");
}

//fungsi terkait informasi negara
void informasi_filiphina ()
{
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| INFORMASI APA YANG INGIN ANDA CARI TERKAIT NEGARA TERSEBUT?                 |||\n");
    printf("\t ||| 1. Tanggal Masuk Asean                                                      |||\n");
    printf("\t ||| 2. Julukan Negara                                                           |||\n");
    printf("\t ||| 3. Bentuk Negara                                                            |||\n");
    printf("\t ||| 4. Ibu Kota                                                                 |||\n");
    printf("\t ||| 5. Luas Wilayah                                                             |||\n");
    printf("\t ||| 6. Mata Uang                                                                |||\n");
    printf("\t ||| 7. Barang Tambang                                                           |||\n");
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| MASUKKAN ANGKA PILIHAN UNTUK INFORMASI LEBIH LANJUT (1/2/3/4/5/6/7): "); scanf ("%d", &pilInformasi);

	switch (pilInformasi)
    {
    case 1  : printf ("\t ||| \t\t Tanggal 8 Agustus 1967                                          |||\n");break;
    case 2  : printf ("\t ||| \t\t Lumbung Padi                                                    |||\n");break;
    case 3  : printf ("\t ||| \t\t Republik (Presiden)                                             |||\n");break;
    case 4  : printf ("\t ||| \t\t Manila                                                          |||\n");break;
    case 5  : printf ("\t ||| \t\t 300.324 km2                                                     |||\n");break;
    case 6  : printf ("\t ||| \t\t Peso                                                            |||\n");break;
    case 7  : printf ("\t ||| \t\t Tembaga,Nikel,Emas,Timber,Seng,Cobalt,Batu Bara,krom,mangan     |||\n");break;
    default : printf ("\t ||| \t\t Maaf, Angka yang Anda pilih Tidak Tersedia                      |||\n");break;
    }
    printf("\t |||=============================================================================|||\n");
    printf("\t ||||||||||||||||||||||-------------TERIMA KASIH------------||||||||||||||||||||||||\n");
    printf("\t ||||||||||||||||||||||----------SEMANGAT BELAJARNYA--------||||||||||||||||||||||||\n");
    printf("\t |||=============================================================================|||\n");
}

//fungsi terkait informasi negara
void informasi_kamboja ()
{
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| INFORMASI APA YANG INGIN ANDA CARI TERKAIT NEGARA TERSEBUT?                 |||\n");
    printf("\t ||| 1. Tanggal Masuk Asean                                                      |||\n");
    printf("\t ||| 2. Julukan Negara                                                           |||\n");
    printf("\t ||| 3. Bentuk Negara                                                            |||\n");
    printf("\t ||| 4. Ibu Kota                                                                 |||\n");
    printf("\t ||| 5. Luas Wilayah                                                             |||\n");
    printf("\t ||| 6. Mata Uang                                                                |||\n");
    printf("\t ||| 7. Barang Tambang                                                           |||\n");
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| MASUKKAN ANGKA PILIHAN UNTUK INFORMASI LEBIH LANJUT (1/2/3/4/5/6/7): "); scanf ("%d", &pilInformasi);

	switch (pilInformasi)
    {
    case 1  : printf ("\t ||| \t\t Tanggal 30 April 1999                                           |||\n");break;
    case 2  : printf ("\t ||| \t\t Hell On Earth                                                   |||\n");break;
    case 3  : printf ("\t ||| \t\t Kerajaan (Raja)                                                 |||\n");break;
    case 4  : printf ("\t ||| \t\t Phnom Penh                                                      |||\n");break;
    case 5  : printf ("\t ||| \t\t 181.040 km2                                                     |||\n");break;
    case 6  : printf ("\t ||| \t\t Riel                                                            |||\n");break;
    case 7  : printf ("\t ||| \t\t Biji Besi, Batu Bara, Tembaga, Fosfat, Emas                     |||\n");break;
    default : printf ("\t ||| \t\t Maaf, Angka yang Anda pilih Tidak Tersedia                      |||\n");break;
    }
    printf("\t |||=============================================================================|||\n");
    printf("\t ||||||||||||||||||||||-------------TERIMA KASIH------------||||||||||||||||||||||||\n");
    printf("\t ||||||||||||||||||||||----------SEMANGAT BELAJARNYA--------||||||||||||||||||||||||\n");
    printf("\t |||=============================================================================|||\n");
}

//fungsi terkait informasi negara
void informasi_vietnam ()
{
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| INFORMASI APA YANG INGIN ANDA CARI TERKAIT NEGARA TERSEBUT?                 |||\n");
    printf("\t ||| 1. Tanggal Masuk Asean                                                      |||\n");
    printf("\t ||| 2. Julukan Negara                                                           |||\n");
    printf("\t ||| 3. Bentuk Negara                                                            |||\n");
    printf("\t ||| 4. Ibu Kota                                                                 |||\n");
    printf("\t ||| 5. Luas Wilayah                                                             |||\n");
    printf("\t ||| 6. Mata Uang                                                                |||\n");
    printf("\t ||| 7. Barang Tambang                                                           |||\n");
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| MASUKKAN ANGKA PILIHAN UNTUK INFORMASI LEBIH LANJUT (1/2/3/4/5/6/7): "); scanf ("%d", &pilInformasi);

	switch (pilInformasi)
    {
    case 1  : printf ("\t ||| \t\t Tanggal 28 Juli 1995                                            |||\n");break;
    case 2  : printf ("\t ||| \t\t Vietnam Rose                                                    |||\n");break;
    case 3  : printf ("\t ||| \t\t Republik (Presiden)                                             |||\n");break;
    case 4  : printf ("\t ||| \t\t Hanoi                                                           |||\n");break;
    case 5  : printf ("\t ||| \t\t 331.688 km2                                                     |||\n");break;
    case 6  : printf ("\t ||| \t\t Dong                                                            |||\n");break;
    case 7  : printf ("\t ||| \t\t Batu Bara, Besi, Timah, emas, Antimony, Krom, Fosfat            |||\n");break;
    default : printf ("\t ||| \t\t Maaf, Angka yang Anda pilih Tidak Tersedia                      |||\n");break;
    }
    printf("\t |||=============================================================================|||\n");
    printf("\t ||||||||||||||||||||||-------------TERIMA KASIH------------||||||||||||||||||||||||\n");
    printf("\t ||||||||||||||||||||||----------SEMANGAT BELAJARNYA--------||||||||||||||||||||||||\n");
    printf("\t |||=============================================================================|||\n");
}

//fungsi terkait informasi negara
void informasi_myanmar ()
{
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| INFORMASI APA YANG INGIN ANDA CARI TERKAIT NEGARA TERSEBUT?                 |||\n");
    printf("\t ||| 1. Tanggal Masuk Asean                                                      |||\n");
    printf("\t ||| 2. Julukan Negara                                                           |||\n");
    printf("\t ||| 3. Bentuk Negara                                                            |||\n");
    printf("\t ||| 4. Ibu Kota                                                                 |||\n");
    printf("\t ||| 5. Luas Wilayah                                                             |||\n");
    printf("\t ||| 6. Mata Uang                                                                |||\n");
    printf("\t ||| 7. Barang Tambang                                                           |||\n");
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| MASUKKAN ANGKA PILIHAN UNTUK INFORMASI LEBIH LANJUT (1/2/3/4/5/6/7): "); scanf ("%d", &pilInformasi);

	switch (pilInformasi)
    {
    case 1  : printf ("\t ||| \t\t Tanggal 23 Juli 1997                                            |||\n");break;
    case 2  : printf ("\t ||| \t\t Tanah Emas                                                      |||\n");break;
    case 3  : printf ("\t ||| \t\t Sistem Presidensial (Presiden)                                  |||\n");break;
    case 4  : printf ("\t ||| \t\t Naypydaw                                                        |||\n");break;
    case 5  : printf ("\t ||| \t\t 678.036 km2                                                     |||\n");break;
    case 6  : printf ("\t ||| \t\t Kyat Burma                                                      |||\n");break;
    case 7  : printf ("\t ||| \t\t Timbal,Seng,Perak,Timah,Minyak Bumi,mangan,Tungsten,Emas        |||\n");break;
    default : printf ("\t ||| \t\t Maaf, Angka yang Anda pilih Tidak Tersedia                      |||\n");break;
    }
    printf("\t |||=============================================================================|||\n");
    printf("\t ||||||||||||||||||||||-------------TERIMA KASIH------------||||||||||||||||||||||||\n");
    printf("\t ||||||||||||||||||||||----------SEMANGAT BELAJARNYA--------||||||||||||||||||||||||\n");
    printf("\t |||=============================================================================|||\n");
}

//fungsi terkait informasi negara
void informasi_laos ()
{
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| INFORMASI APA YANG INGIN ANDA CARI TERKAIT NEGARA TERSEBUT?                 |||\n");
    printf("\t ||| 1. Tanggal Masuk Asean                                                      |||\n");
    printf("\t ||| 2. Julukan Negara                                                           |||\n");
    printf("\t ||| 3. Bentuk Negara                                                            |||\n");
    printf("\t ||| 4. Ibu Kota                                                                 |||\n");
    printf("\t ||| 5. Luas Wilayah                                                             |||\n");
    printf("\t ||| 6. Mata Uang                                                                |||\n");
    printf("\t ||| 7. Barang Tambang                                                           |||\n");
    printf("\t |||=============================================================================|||\n");
    printf("\t ||| MASUKKAN ANGKA PILIHAN UNTUK INFORMASI LEBIH LANJUT (1/2/3/4/5/6/7): "); scanf ("%d", &pilInformasi);

	switch (pilInformasi)
    {
    case 1  : printf ("\t ||| \t\t Tanggal 23 Juli 1997                                            |||\n");break;
    case 2  : printf ("\t ||| \t\t The Land Locked Country (Tanah yang Terkunci)                   |||\n");break;
    case 3  : printf ("\t ||| \t\t Republik (Presiden)                                             |||\n");break;
    case 4  : printf ("\t ||| \t\t Vientiane                                                       |||\n");break;
    case 5  : printf ("\t ||| \t\t 235.804 km2                                                     |||\n");break;
    case 6  : printf ("\t ||| \t\t Kip Laos                                                        |||\n");break;
    case 7  : printf ("\t ||| \t\t Timah,Briket Batu Bara,Besi,Tembaga,Emas,Gibs,Belerang          |||\n");break;
    default : printf ("\t ||| \t\t Maaf, Angka yang Anda pilih Tidak Tersedia                      |||\n");break;
    }
    printf("\t |||=============================================================================|||\n");
    printf("\t ||||||||||||||||||||||-------------TERIMA KASIH------------||||||||||||||||||||||||\n");
    printf("\t ||||||||||||||||||||||----------SEMANGAT BELAJARNYA--------||||||||||||||||||||||||\n");
    printf("\t |||=============================================================================|||\n");


    getc (0);
}




/*Nama File	: CekHari.c*/
/*Deskripsi	: Menampilkan nama-nama Hari dari nomor hari, yaitu 1 s.d. 7 di layar*/
/*Pembuat	: Silvira Nabila Anggita Giraldi - 24060121120011*/
/*Tgl pembuatan	: Sabtu, 12-03-2022 10:22 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    int h; /*nomor hari, 1 ≤ h ≤ 7*/

/*Algoritma*/
    printf("Masukkan nomor hari: ");
    scanf("%d", &h);
    switch (h) {
        case 1:
            printf("Senin");
            break;
        case 2:
            printf("Selasa");
            break;
        case 3:
            printf("Rabu");
            break;
        case 4:
            printf("Kamis");
            break;
        case 5:
            printf("Jumat");
            break;
        case 6:
            printf("Sabtu");
            break;
        case 7:
            printf("Minggu");
            break;
        default:
            printf("Masukan nomor hari tidak tepat");
            break;
    }
}

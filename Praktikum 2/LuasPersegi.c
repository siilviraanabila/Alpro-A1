//Nama file         : LuasPersegi.c
//Deskripsi         : Menentukan luas bujur sangkar
//Pembuat           : Silvira Nabila Anggita Giraldi - 24060121120011
//Tanggal pembuatan : 3 Maret 2022

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    //s : integer (sisi bujursangkar)
    //l : integer (luas bujursangkar)
    int sisi;
/*Algoritma*/
    //s*s

    printf("masukan sisi: ");
    scanf("%d", &sisi);

    printf("%d", sisi * sisi);

    return 0;
}

/*Nama File	: CekPrima.c*/
/*Deskripsi	: Menghitung dan menampilkan bilangan prima dengan input integer sembarang di layar*/
/*Pembuat	: Silvira Nabila Anggita Giraldi - 24060121120011*/
/*Tanggal pembuatan	: Sabtu, 19-03-2022 10.20 WIB*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
/*Kamus*/
    int N; /*bilangan integer sembarang, N > 0*/
    int i; /*counter*/

/*Algoritma*/
    printf("Masukkan Bilangan : ");
    scanf("%d", &N);
        if (N > 0){
            for (i = 2; i < N; i++) {
                if (N % i == 0) {
                    printf("Bukan Bilangan Prima\n");
                    return 0;
                }
            }
            printf("Bilangan Prima\n");
            return 0;
        }
        else{
            printf("N harus bilangan positif\n");
            return 0;
        }
}

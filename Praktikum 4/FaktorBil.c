/*Nama File	: FaktorBil.c*/
/*Deskripsi	: Menentukan faktor bilangan dari masukan bilangan integer sembarang (N)*/
/*Pembuat	: Silvira Nabila Anggita Giraldi - 24060121120011*/
/*Tanggal pembuatan	: Sabtu, 19-03-2022 16.10 WIB*/

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
    if (N <= 0){
        printf("N harus bilangan positif\n");
    }
        for (i = 1; i <= N; i++) {
            if (N % i == 0) {
                printf("%d ", i);
            }
        }
    return 0;
}

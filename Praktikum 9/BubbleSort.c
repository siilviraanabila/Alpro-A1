/*Nama File 	: BubbleSort.c*/
/*Deskripsi 	: Membuat program mengurutkan integer dengan bubble sort*/
/*Pembuat   	: Silvira Nabila Anggita Giraldi - 24060121120011*/
/*Tgl Pembuatan	: Kamis, 5 Mei 2022*/

#include <stdio.h>

//Sub Program
void BubbleSort(int T[], int N)
{
    //Kamus Lokal
    int i, k, temp;
    //Algoritma
    for(i = 0; i < N; i++){
        for(k = 0; k < N-i-1; k++){
            if(T[k] > T[k+1]){
            temp = T[k];
            T[k] = T[k+1];
            T[k+1] = temp;
            }
        }
    }
}

//Program Utama
int main()
{
    //Kamus
    int T[100], N, i;
    //Algoritma
    printf("Bubble Sort \n");
    printf("Masukkan banyak elemen : ");
    scanf("%d", &N);
    printf("Masukkan nilai : \n");
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    //Memanggil Sub Program
    BubbleSort(T, N);
    printf("Hasil pengurutan sebagai berikut : \n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}

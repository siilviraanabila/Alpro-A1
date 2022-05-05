/*Nama File 	: SelectionSort.c*/
/*Deskripsi 	: Membuat program mengurutkan integer dengan selection sort*/
/*Pembuat   	: Silvira Nabila Anggita Giraldi - 24060121120011*/
/*Tgl Pembuatan	: Kamis, 5 Mei 2022*/

#include <stdio.h>

int SelectionSort(int arr[], int n){
    int i, j, posisi, swap;
    for(i = 0; i < (n-1); i++){
        posisi = i;
        for (j = i + 1; j < n; j++){
            if(arr[posisi] > arr[j]){
                posisi = j;
            }
        }
        if(posisi != i){
          swap = arr[i];
          arr[i] = arr[posisi];
          arr[posisi] = swap;
        }
    }
}

//Program Utama
int main()
{
    //Kamus
    int T[100], N, i;
    //Algoritma
    printf("Selection Sort \n");
    printf("Masukkan banyak elemen : ");
    scanf("%d", &N);
    printf("Masukkan nilai : \n");
    for(i = 0; i < N; i++){
        scanf("%d", &T[i]);
    }
    //Memanggil Sub Program
    SelectionSort(T, N);
    printf("Hasil pengurutan sebagai berikut : \n");
    for(i = 0; i < N; i++){
        printf("%d ", T[i]);
    }
}

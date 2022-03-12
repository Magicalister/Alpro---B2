/*
Nama File 	    : CekBulan.c
Deskripsi 	    : mengecek dan menampilkan bilangan integer N yang telah diklasifikasikan ke nama bulan
Pembuat   	    : Zhulfani Faisal Adam - 24060121140132
Tgl Pembuatan	: 10-03-2022
*/

#include <stdio.h>


int main(){

// Kamus
    int N;

// Algoritma
    printf("Masukkan nomor bulan = ");
    scanf("%d",&N);

    if(N == 1){
        printf("Januari");
    }else if (N == 2){
        printf("Februari");
    }else if (N == 3){
        printf("Maret");
    }else if (N == 4){
        printf("April");
    }else if (N == 5){
        printf("Mei");
    }else if (N == 6){
        printf("Juni");
    }else if (N == 7){
        printf("Juli");
    }else if (N == 8){
        printf("Agustus");
    }else if (N == 9){
        printf("September");
    }else if (N == 10){
        printf("Oktober");
    }else if (N == 11){
        printf("November");
    }else if (N == 12){
        printf("Desember");
    }else{
        printf("Masukkan nomor bulan tidak tepat");
    }
    return 0;
}

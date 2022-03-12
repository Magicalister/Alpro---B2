/*
Nama File 	    : CekHari.c
Deskripsi 	    : mengecek integer 1-7 dan menampilkan string yang telah diklasifikasikan berdasarkan hari
Pembuat   	    : Zhulfani Faisal Adam - 24060121140132
Tgl Pembuatan	: 10-03-2022
*/

#include <stdio.h>

//Program Utama

int main(){

// Kamus
    int N;

// Algoritma

    printf("Masukkan nomor hari = ");
    scanf("%d",&N);

    if(N == 1){
        printf("senin");
    }else if (N == 2){
        printf("selasa");
    }else if (N == 3){
        printf("rabu");
    }else if (N == 4){
        printf("kamis");
    }else if (N == 5){
        printf("jumat");
    }else if (N == 6){
        printf("sabtu");
    }else if (N == 7){
        printf("minggu");
    }else{
        printf("Masukkan nomor hari tidak tepat");
    }
    return 0;
}

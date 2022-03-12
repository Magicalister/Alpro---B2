/*
Nama File 	    : cekProsesBill.c
Deskripsi 	    : Menghitung dan menampilkan bilangan integer N yang telah diklasifikasikan
Pembuat   	    : Zhulfani Faisal Adam - 24060121140132
Tgl Pembuatan	: 10-03-2021
*/

#include <stdio.h> /*header file*/

//Program Utama

int main(){

//Kamus
    int N;

//Algoritma
printf("masukkan angka = ");
scanf("%d",&N);
    // genap
    if(N%2 == 0){
        N = N + 3;
        if(N%5 == 0){
            N = N + 5;
        }else{
            N = N + 2;
        }
    }
    // ganjil
    else{
        N = N + 2;
        if(N%3 ==0){
            N = N + 4;
        }else{
            N = N + 1;
        }
    }

    printf("Hasil = %d",N);

    return 0;
}

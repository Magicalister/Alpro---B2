/*
Nama File 	    : CekBillSemb.c
Deskripsi 	    : mengecek dan menampilkan bilangan integer N yang telah diklasifikasikan
Pembuat   	    : Zhulfani Faisal Adam - 24060121140132
Tgl Pembuatan	: 10-03-2021
*/

#include <stdio.h> /*header file*/

//Program Utama

int main(){
//Kamus
    int i;

//Algoritma
    printf("Masukkan Angka = ");
    scanf("%d",&i);
    if(i > 0){
        printf("bilangan bulat positif");
    }else if(i<0){
        printf("bilangan bulat negatif");
    }else if(i == 0){
        printf("nol");
    }else{
        printf("bukan termasuk bilangan");
    }
    return 0;
}

/*
Nama File 	    : CekseriPositif.c
Deskripsi 	    : mengecek dan menampilkan total 3 tahanan bilangan tidak negatif A, B, dan C
Pembuat   	    : Zhulfani Faisal Adam - 24060121140132
Tgl Pembuatan	: 10-03-2022
*/

#include <stdio.h>


int main (){
//Kamus
    int a;
    int b;
    int c;
    int hasil;
// Algoritma

    printf("Masukkan nomor tahanan 1 = ");
    scanf("%d",&a);
    printf("Masukkan nomor tahanan 2 = ");
    scanf("%d",&b);
    printf("Masukkan nomor tahanan 3 = ");
    scanf("%d",&c);


    if(a > 0 && b > 0 && c > 0){
        hasil = a+b+c;
        printf("Hasil = %d", hasil);
    }else{
        printf("Masukkan tahanan tidak boleh negatif");
    }
}

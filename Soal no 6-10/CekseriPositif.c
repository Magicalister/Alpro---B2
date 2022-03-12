
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

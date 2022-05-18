/*Nama File 	: Palindrome*/
/*Deskripsi 	: Mesin abstrak untuk memeriksa apakah kata itu PALINDROM dan mengirimkan sebuah harga boolean*/
/*Pembuat   	: 24060121140132-Zhulfani Faisal Adam*/
/*Tgl Pembuatan	: 18 Mei 2022*/

#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
    /*Kamus*/
    char str[50]; // variable str untuk menampung kalimat yang ingin di cek palindrome atau bukan
    int i, len, temp = 0;
    int flag = 0;
    len = strlen(str); // variable len diisi dengan nilai sebesar ukuran kalimat dalam variable str

    /*Algoritma*/
    len = HitungChar();

    printf("Palindrome Machine\n");

    if (len >= 50 )
    {
        printf("\n karakter dalam pita maksimal 50 termasuk titik \n");
    }
    else{
        START();
        i = 0;
        while(!EOP()){
            str[i] = CC;
            ADV();
            i++;
        }

        printf("\nPita dibaca = ");
        for ( i = 0; i < len; i++)
        {
            printf("%c", str[i]);
        }

        for(i=0;i < len ;i++){ // looping kalimat
            if(str[i] != str[len-i-1]) { // penyesuaian setiap hurufnya
                temp = 1; // jika tidak cocok, variable temp diisi nilai 1
                break;
            }
        }

        if (temp == 0) {
            printf("\nPALINDROME !\n");
        }
        else {
            printf("\nBUKAN PALINDROME !\n");
        }

    getch();
    return 0;
    }
}

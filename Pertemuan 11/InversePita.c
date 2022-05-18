/*Nama File 	: InversPita*/
/*Deskripsi 	: Mesin abstrak untuk menampilkan kalimat dalam sebuah pita dalam keadaan terbalik(invers)*/
/*Pembuat   	: 24060121140132-Zhulfani Faisal Adam*/
/*Tgl Pembuatan	: 18 Mei 2022*/
#include <stdio.h>
#include <conio.h>
#include "mesinkar.c"

int main(){
/*Kamus*/
    int PanjangPita;
    char str[50];
    int i;

/*Algoritma*/
    PanjangPita = HitungChar();

    printf("===Mesin Inverse Pita===\n");

    if (PanjangPita >= 50)
    {
        printf("karakter dalam pita maksimal 50 termasuk titik");
    }
    else{
        START();
        i = 0;
        while(!EOP()){
            str[i] = CC;
            ADV();
            i++;
        }

        printf("Pita dibaca = ");
        for (int i = 0; i < PanjangPita; i++)
        {
            printf("%c", str[i]);
        }

        printf("\nPita inverse = ");
        // melakukan inverse kata
        for (int i = PanjangPita-1; i >= 0; i--)
        {
            printf("%c", str[i]);
        }

    }

    getch();
    return 0;
}

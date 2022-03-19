/*
Nama File 	: TarifPLN.c
Deskripsi 	: menghitung dan menampilkan biaya PLN berdasarkan KWH
Pembuat   	: Zhulfani Faisal Adam - 24060121140132
Tgl Pembuatan	: 14-03-2022
*/



#include <stdio.h> /*header file*/
/*Program Utama*/
int main(){
/*KAMUS LOKAL*/
    int Golongan;
    int Listrik;

/*ALGORITMA*/
    printf("Masukkan Golongan (1 - 2) = ");
    scanf("%d", &Golongan);
    printf("Pemakaian Listrik (kWH) = ");
    scanf("%d", &Listrik);

    if (Golongan > 0 && Golongan < 3 && Listrik >= 0)
    {
        if (Golongan == 1)
        {
            if (Listrik < 100)
            {
                printf("Tarif Listrik Anda = %d\n", 100 * 1000);
            }
            else if (Listrik > 100 && Listrik < 1000)
            {
                printf("Tarif Listrik Anda = %d\n", Listrik * 1000);
            }
            else if (Listrik >= 1000)
            {
                printf("Tarif Listrik Anda = %d\n", Listrik * 1000 + (Listrik * 1000)/10);
            }
        }
        else if (Golongan == 2)
        {
            if (Listrik < 100)
            {
                printf("Tarif Listrik Anda = %d\n", 100 * 2000);
            }
            else if (Listrik > 100 && Listrik < 1000)
            {
                printf("Tarif Listrik Anda = %d\n", Listrik * 2000);
            }
            else if (Listrik >= 1000)
            {
                printf("Tarif Listrik Anda = %d\n", Listrik * 2000 + (Listrik * 1000)/10);
            }
        }
    }
    else
    {
        printf("Masukan Tidak Valid");
    }
//OUTPUT
}

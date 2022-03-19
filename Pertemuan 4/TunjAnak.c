/*
Nama File 	: TunjAnak.c
Deskripsi 	: menghitung dan menampilkan tunjangan anak berdasarkan gaji
Pembuat   	: Zhulfani Faisal Adam - 24060121140132
Tgl Pembuatan	: 15-03-2022
*/


#include <stdio.h> /*header file*/
/*Program Utama*/

int main(){
/*KAMUS LOKAL*/
    int Jumlah;
    int Gaji;

/*ALGORITMA*/
    printf("Masukkan Jumlah Anak (0-3) = ");
    scanf("%d", &Jumlah);
    printf("Masukkan Gaji Pokok = ");
    scanf("%d", &Gaji);

    if (Jumlah >= 0 && Gaji > 0)
    {
        if(Jumlah <= 3)
        {
            printf("Maka Tunjangan Anak = %d\n", Jumlah * Gaji / 10); //OUTPUT
        }
        else if (Jumlah > 3)
        {
            printf("Maka Tunjangan Anak = %d\n", 3 * Gaji / 10); //OUTPUT
        }
    }
    else
    {
        printf("Masukan Tidak Valid"); //OUTPUT
    }

    return 0;
}

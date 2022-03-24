/*
Nama File 	: CekSempurna.c
Deskripsi 	: menghitung lamanya hari siput naik ke N
Pembuat   	: Zhulfani Faisal Adam - 24060121140132
Tgl Pembuatan	: <22-03-2022>
*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{
    /*Kamus*/
    float N; /*kedalaman lubang*/
    float M = 0;
    int hari = 0;
    int run = 1;

    /*Algoritma*/
    printf("Masukkan kedalaman siput : ");
    scanf("%f", &N);
    if (N > 0)
    {
        while (run == 1)
        {
            M = M + 0.3;
            M = M - 0.1;

            if (M >= N)
            {
                run = 0;
            }
            else
            {
                hari++;
            }
        }
        printf("lama hari yang dibutuhkan adalah : %d", hari);
    }
    else
    {
        printf("Masukkan tidak tepat");
    }

    return 0;
}

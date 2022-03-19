/*
Nama        : FaktorBil.c
Deskripsi 	: menghitung dan menampilkan faktor dari suatu bilangan
Pembuat   	: Zhulfani Faisal Adam - 24060121140132
Tgl Pembuatan	: 15-03-2022
*/

#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{
/*Kamus*/
    int N, i;

/*Algoritma*/
    printf("Masukkan angka : ");
    scanf("%d", &N);
    if (N > 0)
    {
        for (i = 1; i <= N; i++)
        {
            if (N % i == 0)
            {
                printf("%d ", i);
            }
        }
    }
    else /* N<=0 */
    {
        printf("Masukkan salah");
    }

    return 0;
}

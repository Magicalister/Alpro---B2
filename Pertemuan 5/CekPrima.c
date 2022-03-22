/*
Nama File 	: CekPrima.c
Deskripsi 	: mengecek apakah bilangan yang dimasukkan merupakkan bilangan prima
Pembuat   	: Zhulfani Faisal Adam - 24060121140132
Tgl Pembuatan	: 15-03-2022
*/


#include <stdio.h> /*header file*/

/*Program Utama*/

int main()
{
/*Kamus*/
    int N; /* Masukkan/input */
    int i;
    int j;

/*Algoritma*/
	j=0;
    printf("Masukkan angka : ");
    scanf("%d", &N);
    if (N > 0)
    {
        for (i = 1; i <= N; i++)
        {
            if (N % i == 0)
            {
                j++;
            }
        }
        if (j == 2)
        {
            printf("%d adalah bilangan prima", N);
        }
        else
        {
            printf("%d bukan bilangan prima", N);
        }
    }
    else /* N<=0 */
    {
        printf("Masukan tidak sesuai");
    }

    return 0;
}

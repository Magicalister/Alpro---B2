/*
Nama File 	: CekSempurna.c
Deskripsi 	: mengecek apakah bilangan yang dimasukkan merupakkan bilangan sempurna
Pembuat   	: Zhulfani Faisal Adam - 24060121140132
Tgl Pembuatan	: <17-03-2022>
*/


#include <stdio.h>

// Program Utama

int main()
{
    // KAMUS
    int N,i,J;

    // ALGORITMA

    printf("Masukkan angka : ");
    scanf("%d",&N);

	J = 0;
	if (N>0)
	{
		for (i=1 ;  i < N ; i++)
		{
			if (N % i == 0)
			{ 
				J = J + i;
			}
        }
            if (J == N)
        {
            printf("%d adalah bilangan sempurna", N);
        }
            else
        {
            printf("%d bukan bilangan sempurna", N);
        }
	}

    else
    {
        printf("Masukkan salah");
    }

    return 0;
}

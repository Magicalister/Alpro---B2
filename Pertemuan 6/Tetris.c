/*Nama File 	: Tetris.c
Deskripsi 		: membuat susunan menjadi segitiga dengan baris sebanyak N
Pembuat  	 	: Zhulfani Faisal Adam-24060121140132>
Tgl Pembuatan	: 29-03-2022
*/

#include <stdio.h>


// Program Utama 


int main ()
{
	// Kamus 
	int N; // N > 0
	int i; //counter
	int J; //counter
	
	// Algoritma
	printf("Masukkan Angka : ");
	scanf("%d", &N);
	
	if (N>0)
	{
		for (i = 1; i <= N; ++i)
		{
			for (J = 1; J <= i; ++J)
			{
				printf("*");
			}
			printf("\n");
		}
	}
	else
	{
		printf("Masukkan salah");
	}
}	
	
	

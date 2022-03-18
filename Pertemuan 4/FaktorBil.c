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

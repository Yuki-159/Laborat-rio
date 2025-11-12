#include <stdio.h>
#include <locale.h>

int main()
{
    int matriz[3][3];
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[0][2] = 3;
    matriz[1][0] = 4;
    matriz[1][1] = 5;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%i\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
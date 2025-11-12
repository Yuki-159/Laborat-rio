#include <stdio.h>

int main()
{
    int nota;
    do
    {

        printf("Qual a nota :");
        scanf("%i", &nota);
        if (nota < 1 || nota > 10)
        {
            printf("tente novamente!\n");
        }
    } while (nota < 1 || nota > 10);

    return 0;
}
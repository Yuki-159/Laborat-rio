#include<stdio.h>

int main()
{
    int dia;
    printf("Diga um dia: ");
    scanf("%i", &dia);
    if (dia == 1)
    {
        printf("Domingo");
    }
    else if (dia == 2)
    {
        printf("Segunda\n");
    }
    else if (dia == 3)
    {
        printf("Terça\n");
    }
    else if (dia == 4)
    {
        printf("Quarta\n");
    }
    else if (dia == 5)
    {
        printf("Quinta\n");
    }
    else if (dia == 6)
    {
        printf("Sexta\n");
    }
    else if (dia == 7)
    {
        printf("Sabado\n");
    }
    else
    {
        printf("Numero do dia invalido, tente novamente!\n");
    }

    return 0;
}
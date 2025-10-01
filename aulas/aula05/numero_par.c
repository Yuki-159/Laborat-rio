#include <stdio.h>
#include <locale.h>

int main()
{
    int numero;

    printf("Entre com um número inteiro: ");
    scanf("%i", &numero);

    int resto_da_divisao_por_2 = numero % 2;

    if (resto_da_divisao_por_2 == 0)
    {
        printf("o numero %i eh par!\n", numero);
    }

    else
    {
        printf("O numnero %i e impar!", numero);
    }
return 0;
}
#include<stdio.h>
#include<locale.h>

int main(){
    int numero;
    printf("Digite um número: ");
    scanf("%i", &numero);
    int decremento = numero;
    int incremento = numero;
    printf("O número pré-incremento do número %i é %i\n", numero, ++incremento);
    printf("O numero pré-incremento do número %i é %i\n", numero, --decremento);
    printf("O pós-incremento do número %i é %i\n", numero, incremento++);
printf("O pós-decremento do número %i é %i\n", numero, decremento--);



    return 0;
}
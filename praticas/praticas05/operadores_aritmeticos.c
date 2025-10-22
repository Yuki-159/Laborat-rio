#include<stdio.h>

int main (){
    int numero1;
    int numero2;
    float numero3;
    printf("Digite um nùmero inteiro: ");
    scanf("%i", &numero1);
    printf("Digite um numero inteiro: ");
    scanf("%i", &numero2);
    printf("Digite um numero decimal: ");
    scanf("%f", &numero3);
    int soma = numero1 + numero2;
    int subtracao = numero1 - numero2;
    int multiplica = numero1 * numero2;
    int divisao = numero1 / numero2;
    int resto = numero1 % numero2;
    float divisao_fracionada = numero1 / numero3;
    printf("A soma de %i e %i é igual a %i\n", numero1, numero2, soma);
    printf("A subtração de %i e %i é igual a %i\n", numero1, numero2, subtracao);
    printf("A multiplicação de %i com %i é igual a %i\n", numero1, numero2, multiplica);
    printf("A divisão de %i e %i é igual a %i\n", numero1, numero2, divisao);
    printf("O modulo de %i com %i é igual a %i\n", numero1, numero2, resto);
    printf("A divisão fracionada de %i ocm %f é igual a %f\n", numero1, numero3, divisao_fracionada);
    return 0;
}
#include<stdio.h>
#include<locale.h>
int main() {

    float preco;
    float fracao;
    printf("Digite um preço: ");
    scanf("%f", &preco);
    printf("VOcê digfitou %.2f\n", preco);
    printf("Digite uma fração: ");
    scanf("%f", &fracao);
    printf("Você digitou %.10f\n", fracao);

    return 0;
}
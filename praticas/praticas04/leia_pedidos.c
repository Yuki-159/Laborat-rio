#include<stdio.h>

int main(){
    char produto [21];
    int quantidade;
    float valor;
    printf("Qual o produto: ");
    scanf("%s", &produto);
    getchar();
    printf("Qual a quantidade: ");
    scanf("%i", &quantidade);
    getchar();
    printf("Qual o valor: ");
    scanf("%f", &valor);
    printf("=================\n");
    printf("      PEDIDO     \n");
    printf("=================\n");
    printf("Produto\tQuantidade\tValor\n");
    printf("%s\t%i\t%f\n", produto, quantidade, valor);

    return 0;
}
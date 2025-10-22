#include<stdio.h>
#include<locale.h>

int main() {
    
    int opcao;
    printf("----------------\n");
    printf(" MENU PRINCIPAL \n");
    printf("----------------\n");
    printf("1 -Consultar saldo\n");
    printf("2 -Fazer recarga\n");
    printf("3 -Ouvir recados\n");
    printf("4 -Ultima chamda\n");
    printf("5 -encerrar chamada\n");
    printf("----------------\n");

    printf("Escolha uma opção: ");
    scanf("%i", &opcao);
    switch(opcao){
        case 1: printf(" Seu saldo é de R$ 10,00\n"); break; 
        case 2: printf(" Escolha um valor de recarga\n"); break;
        case 3: printf("Voce tem 4 recados\n"); break;
        case 4: printf("A ultima chamada foi 900909090"); break;
        case 5: printf("Obrigado pelo seu contato\n"); break;
        default: printf("Opcao invalida. Tente novamente\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int opcao = 0;

    while (opcao != 3)
    {
        system("clear");
        printf("----------------------\n");
        printf("  M E U      J O G O  \n");
        printf("----------------------\n");
        printf("     1 - Novo Jogo    \n");
        printf("     2 - ver ranking  \n");
        printf("     3 - sair         \n");
        printf("----------------------\n");
        printf("Escolha uma opção:    \n");
        scanf("%i", &opcao);
        while (getchar() != '\n')
            ; // limpar buffer

        switch (opcao)
        {
        case 1:
        {
            
            system("clear");
            char nome[30];
            printf("Entre com seu nome: ");
            fgets(nome, sizeof(nome), stdin);
            printf("Ola %s\n!", nome);
            printf("Pressione ENTER para começar o jogoo.\n");
            getchar();
            //...

        }
        case 2:
        {
        }
        case 3:
            printf("Até logo!\n");
            break;
        default:
            printf("Opcao invalida! Pressione enter.\n");
            getchar();
        }
    }
}
#include<stdio.h>
#include<locale.h>
int main () { 
    
    char nome [31];
    char tecla;
    printf("DIgite uma tecla: ");
    scanf("%c", &tecla);
    getchar();
    printf("Você digitou: %c\n", tecla);
    printf("Digite seu nome: ");
    scanf( "%[^\n]s", nome);
    printf("Seu nome é %s\n");

}
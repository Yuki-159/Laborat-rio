#include<stdio.h>

int main(){
    int nota;
    printf("Digite a nota: ");
    scanf("%i", &nota);
    switch (nota){
       case 1:printf("Voce ganhou *\n"); break;
       case 2:printf("voce ganhou **\n"); break;
       case 3:printf("voce ganhou ***\n"); break;
       case 4:printf("voce ganhou ****\n"); break;
       case 5:printf("voce ganhou *****\n"); break;
       default :printf("Nota invalida, tente nnovamente!\n"); break;


    }


    return 0;
}
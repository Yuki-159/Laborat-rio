#include<stdio.h>

int main(){
    int ano;
    printf("Digite um ano: ");
    scanf("%i", &ano);
    int ano_multiplo_4 = ano % 4 == 0;
    int ano_nao_multiplo_100 = ano % 100 != 0;
    int ano_multiplo_400 = ano % 400 == 0;
    if (ano_multiplo_4 && ano_nao_multiplo_100 || ano_multiplo_400){

        printf("O ano %d é bissexto!\n", ano);
    }else {

        printf("O ano nao e bissexto!\n", ano);
    }



    return 0;
}
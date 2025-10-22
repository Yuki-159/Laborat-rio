#include<stdio.h>

int main(){
    float nota_1;
    float nota_2;
    printf("Digite a nota 1: ");
    scanf("%f", &nota_1);
    printf("Digite a nota 2: ");
    scanf("%f", &nota_2);
    float media_iesb = nota_1 * 0.4 + nota_2 * 0.6;
    printf("Sua média é %.2f", media_iesb);


    return 0;
}
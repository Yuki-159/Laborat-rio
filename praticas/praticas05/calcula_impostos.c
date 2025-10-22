#include<stdio.h>

int main(){
    const float ICMS = 0.17;
    const float CONFIS = 7.6;
    const float PIS_PASEP = 1.65;
    float preco_inicial;
    int linha;
    printf("Diga o preço inicial: ");
    scanf("%f", &preco_inicial);
    float valor_icms = preco_inicial * ICMS;
    float valor_confis = preco_inicial * CONFIS;
    float valor_pis_pasep = preco_inicial * PIS_PASEP;
    float preco_final = preco_inicial + valor_icms + valor_confis + valor_pis_pasep;
    printf("%s\t%3.f\n", "Preço Incial...........: R$ ", preco_inicial);
    printf("%s\t%3.f\n", "Valor ICMS (17%).......: R$ ", valor_icms);
    printf("%s\t%3.f\n", "Valor CONFIS (7,6%)....: R$ ", valor_confis);
    printf("%s\t%3.f\n", "Valor PIS/PASEP (1,65%): R$ ", valor_pis_pasep);



    return 0;
}
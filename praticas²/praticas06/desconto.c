#include<stdio.h>

int main()
{
    float valor_bruto;
    float valor_desconto;
    printf("Digite o valor da compra: ");
    scanf("%f", &valor_bruto);
    if (valor_bruto <= 100)
    {
        valor_desconto = valor_bruto * 0.01;
    }
    else if (valor_bruto <= 500)
    {
        valor_desconto = valor_bruto * 0.05;
    }
    else{
        valor_desconto = valor_bruto * 0.1;
    }
    printf("O valor original é %2.f, e o desconto é %2.f\n", valor_bruto, valor_desconto);
    return 0;
}
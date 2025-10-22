#include<stdio.h> 
#include<locale.h>
int main(){
    int codigo;
    char nome [31];
    float salario;
    printf("Qual o codigo: \n");
    scanf("%i", &codigo);
    getchar();
    printf("QUal o nome: \n");
    scanf("%c", &nome);
    getchar();
    printf("Qual o salario: \n");
    scanf("%f", &salario); 
    printf("%s\t%s\t%s\n", "Código", "NOme", "Salário");
    printf("%i\t%c\t%f", codigo, nome, salario);

    return 0;
}
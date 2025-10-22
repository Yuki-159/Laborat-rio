#include<stdio.h>
#include<locale.h>

int main(){
    int numero1;
    int numero2;
    printf("Digite um número 1\n");
    scanf("%i", &numero1);
    printf("Digite um número 2\n");
    scanf("%i", &numero2);
    printf("%i é igual %i? %i\n", numero1, numero2, numero1 == numero2);
    printf("%i é menor que %i? %i\n", numero1, numero2, numero1 < numero2);
    printf("%i é maior que %i? %i\n", numero1, numero2, numero1 > numero2);
    printf("%i é maior ou igual%i? %i\n", numero1, numero2, numero1 >= numero2);



    return 0;
}
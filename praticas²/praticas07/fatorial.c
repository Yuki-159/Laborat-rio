#include<stdio.h>

int main(){
    int numero;
    int fatorial = 1;
    printf("Diga um numero: ");
    scanf("%i", &numero);
    for(int i = numero; i > 0; i--){

        fatorial = fatorial*i;
    }
    printf("Os numeros foi %i e %i", numero, fatorial);


    return 0; 
}
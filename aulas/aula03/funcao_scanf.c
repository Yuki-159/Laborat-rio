#include<stdio.h>
int main(){
    // 1)tipos de dados:
    // char - caracter
    // int - inteiro
    // float - flutuante até 6 casas
    // double - flutuante até 12 casas
    // void - sem tipo
    
    // 2) variaveis e constantes:
    int idade = 16;
    char tecla = 's'; 
    float nota = 8.5f;
    const double pi = 3.1415169226;

    printf("Os valores das variavéis:\n");
    printf("Idade = %i\n", idade);
    printf("Tecla = %c\n", tecla);
    printf("Nota = %.2f\n", nota);
    printf("Pi = %.12f\n", pi);

    return 0;
}
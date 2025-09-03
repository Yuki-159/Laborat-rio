#include <stdio.h>
int main () {
    int matricula = 12345678;
    int idade = 20;
    float altura = 1.80f;
    float peso = 80.0f;
    char sexo = 'M';
    printf("Matrícula: %i\n", matricula);
    printf("Idade: %i\n", idade);
    printf("Altura: %3.2f\n", altura);
    printf("Peso: %3.1fKg\n", peso);
    printf("Sexo: %c\n", sexo);
    return 0;
}
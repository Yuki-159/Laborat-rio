#include <stdio.h>
int main(){
    char caractere = 127;
    int inteiro = caractere;
    float flutuante = inteiro;
    double duplo = 256.1234567;
    flutuante = (float) duplo;
    inteiro = (int) flutuante;
    caractere = (char) inteiro;
    printf("Caractere = %i\n", caractere);
    printf("Inteiro = %i\n", inteiro);
    printf("Flutuante = %.7f\n", flutuante);
    printf("Duplo = %.7f\n", duplo);
    return 0;
}
#include <stdio.h>
#include <locale.h> //biblioteca de idiomas
int main () {
    setlocale(LC_ALL, ""); //Usa o idioma portugues
    printf("- - - - - - - - - - -\n\n");
    printf("  Olá, boa tarde!\n\n");
    printf("- - - - - - - - - - -\n\n");
    printf("- - - - - - - - - - -\n");
    printf(" N O T A    L E G A L\n");
    printf("- - - - - - - - - - - \n");
    printf("Caderno      1   10.00\n");
    printf("Lápis        2    5.00\n");
    printf("Borracha     3    7.50\n");
    printf("- - - - - - - - - - - \n");
    printf("Total. . . . . . 22.50\n");
    
    // Especificador dwe formato
    // %c - imprime um caracter
    // %s - imprime uma string
    // %i - imprime um inteiro
    // %F - imprime um flutuante (fracionario)
    printf("Caderno      1   10.00\n");
    printf("%-10s %02i %7.2f\n", "Caderno", 1, 10.0);
    printf("%-10s %02i %7.2f\n", "nhame", 2, 8.0);    
    
    return 0;
}
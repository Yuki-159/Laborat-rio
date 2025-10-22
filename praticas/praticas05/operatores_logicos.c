#include<stdio.h>

int main(){
    int x;
    int y;
    printf("Digite o valor de de X: ");
    scanf("%i", &x);
    printf("digite o valor de Y: ");
    scanf("%i", &y);
    printf("%i && %i = %i\n", x, y, x && y);
    printf("%i !! %i = %i\n", x, y, x || y);
    printf("!%i = %i\n", x, !x);
    printf("!%i = %i\n", y, !y);


    return 0;
}
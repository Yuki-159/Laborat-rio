#include <stdio.h>
int main(){
    const short int HORA_EM_SEGUNDOS = 3600;
    long int populacao_mundial = 780000000L;
    long double precisao_extrema = 3.14159265358979323846L;
    printf("População mundial: %li\n", populacao_mundial);
    printf("Uma hora corresponde a %i segundos.\n", HORA_EM_SEGUNDOS);
    printf("Precisão Extrema = %.20lf\n", precisao_extrema);
    return 0;
}
#include<stdio.h>
#include<locale.h>

int main(){
    int matricula = 1051;
    float a1 = 10;
    float a2 = 5;
    float media = (a1+a2)/2;
    printf("%s\t%s\t%s\t%s\n", "Matricula", "A1", "A2", "Media");
    printf("%i\t%f\t%f\t%f\n", matricula, a1, a2, media);


    return 0;
}
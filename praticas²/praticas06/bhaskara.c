#include<stdio.h>
#include<math.h>

int main(){
    int a;
    int b;
    int c;
    printf("Dite os valor de a, b e c: ");
    scanf("%i", &a);
    scanf("%i", &b);
    scanf("%i", &c);
    float delta = b * b -4*a*c;
    if (delta < 0){

        printf("a equaçao nao tem raiz real");
    }else{
       float x1 = (-b + sqrt(delta)) / 2*a;
       float x2 = (-b - sqrt(delta)) / 2*a;
    }
    printf("O valo de x1 é %2.f e o de x2 é %2.f", x1, x2)



    return 0;
}
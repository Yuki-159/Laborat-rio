#include<stdio.h>

int main(){
    float temperatura;
    printf("Diga a temperatura: ");
    scanf("%f", &temperatura);
    if(temperatura >= 40){

        printf("Esta muito quente!!");
    }else if (temperatura > 30 && temperatura < 40){

        printf("Esta quente!!");
    }else if (temperatura > 20 && temperatura < 30){
        printf("Esta agradevel!!!!");
    }else {

        printf("frio");
    }

    return 0;
}
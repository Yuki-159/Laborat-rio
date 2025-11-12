#include<stdio.H>

int main (){
    // int numero1;
    // int numero2;
    // int numero3;
    // int numero4;
    // int numero5;
    // int numero6;
    // int numero7;
    // int numero8;
    // int numero9;
    // int numero10;

    int numeros[10]; // uma dimensão: vetor

    // numeros[0] = 1; começa sempre do zero
    // numeros[1] = 2;
    // numeros[2] = 3;
    // numeros[3] = 4;
    // numeros[4] = 5;
    // numeros[5] = 6;
    // numeros[6] = 7;
    // numeros[7] = 8;
    // numeros[8] = 9;
    // numeros[9] = 10;

    for(int i=0; i<10; i++){
        numeros [i] = i + 1;
    }

    for(int i = 0; i < 10; i++){
        printf("Entre com o %io do numero: ", i + 1);
        scanf("%i", &numeros[i]);
    }

    printf("Os numeros digitados foram: ");
    for(int i = 0;i < 10; i++){
        if (i < 9) {
        printf("%i, ", numeros[i]); 
    } else {
        printf("%i", numeros[i]);
    }
    }
    printf("\n");

    // printf("Entre com o primeiro numero: ");
    // scanf("%i", &numero1);
    // printf("Entre com o segundo numero: ");
    // scanf("%i", &numero2);
    // printf("Entre com o terceiro numero: ");
    // scanf("%i", &numero3);
    // printf("Entre com o quarto numero: ");
    // scanf("%i", &numero4);
    // printf("Entre com o quinto numero: ");
    // scanf("%i", &numero5);
    // printf("Entre com o sexto numero: ");
    // scanf("%i", &numero6);
    // printf("Entre com o setimo numero: ");
    // scanf("%i", &numero7);
    // printf("Entre com o oitavo numero: ");
    // scanf("%i", &numero8);
    // printf("Entre com o nono numero: ");
    // scanf("%i", &numero9);
    // printf("Entre com o decimo numero: ");
    // scanf("%i", &numero10);





    return 0;
}





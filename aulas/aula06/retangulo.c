#include<stdio.h>

int main(){
    int lado_a;
    int lado_b;

    printf("Entre com o valor do lado A: ");
    scanf("%i", &lado_a);
    printf("Entre com o valor do lado B: ");
    scanf("%i", &lado_b);
    
    for(int i = 1; i <= lado_a; i++)
    {
        for(int j = 1; j <= lado_b; j++)
        {
            if(i == 1 || i == lado_a)
            {
                printf("-");
            }
            else if (j == 1 || j == lado_b)
            {
                printf("|");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

 return 0;
}
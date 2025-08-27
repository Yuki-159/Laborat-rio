#include<stdio.h>
#include<limits.h>
#include<float.h>
int main(){
    printf("O tipo 'char' aceita valores entre %i e %i.\n", CHAR_MIN, CHAR_MAX);
    printf("O corpo 'int' aceita valores entre %i e %i.\n", INT_MIN, INT_MAX);
    printf("O corpo 'float' aceita valores entre %i e %i.\n", FLT_MIN, FLT_MAX);
    printf("O corpo 'double' aceita valores entre %i e %i.\n", DBL_MIN, DBL_MAX);
    return 0;
}
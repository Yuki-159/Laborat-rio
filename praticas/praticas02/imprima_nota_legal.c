#include<stdio.h>
int main () {
   printf("%s", "=============================\n");
   printf("%12s   %s\n", "N O T A", "L E G A L"); 
   printf("%s", "=============================\n");
   printf ("%s\t%9s  %s\n", "Produto", "Qtd", "Valor Unit");  
   printf("%s      %03i %11.2f\n", "Camiseta", 002, 39.99);
   printf("%s         %03i %11.2f\n", "Calça", 001, 89.90);
   printf("%s   %03i %11.2f\n", "Meia Social", 003, 19.99);
   printf("%s", "=============================\n");
   printf("%s%23.2f", "Total:", 229.85);
   return 0;
}
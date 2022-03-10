#include <stdio.h>
#include <stdlib.h>

int main () {
float x; //valor do produto
float y; //porcentagem do desconto
float z; //valor do desconto
float h; // valor do produto final
float p; // valor pago pelo usuario 
float t; // troco

printf ("insira o valor do produto \t \n");
scanf ("%f" , &x);
printf ("insira a porcentagem do desconto \t \n");
scanf ("%f" , &y);
printf ("o valor do produto e = %.2f \n" , x);
z = x * ( y / 100);
printf ("o valor do desconto e = %.2f \n" , z);
h = x - z;
printf ("o valor final do produto com desconto e = %.2f \n \n" , h);
printf ("insira o valor pago pelo cliente: \n ");
scanf ("%f" , &p);
t = p - h;
printf ("\no valor do troco e = %.2f \n" , t);
printf ("\npressione enter para fechar... \n");
getchar();
scanf ("pause");
}





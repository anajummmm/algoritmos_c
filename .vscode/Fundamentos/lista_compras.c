
#include <stdio.h>

/* Algoritmo que calcula o total da lista de compras 
- Declarar 3 produtos da sua lista de compras 
- Calcular o total da lista
- Exibir o valor ao final*/

int main()
{
    char cocacola[] = "Coca Cola";
    char doritos[] = "Doritos";
    char charge[] = "Charge";

float valorCocaCola = 9.99;
float valorDoritos = 13.99;
float valorCharge = 2.99;

float totalista = valorCocaCola + valorCharge + valorDoritos;

printf("O valor total da lista e: %.2f", totalista);

    return 0;
}


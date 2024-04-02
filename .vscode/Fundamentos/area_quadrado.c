
#include <stdio.h>

int main()
{
 printf ("---Calcular area do quadrado---");

float valorLado = 0;

printf("\nDigite o valor da medida do lado do quadrado: ");
scanf("%f", &valorLado);

float areaQuadrado =  valorLado * valorLado;

printf("O valor da area do quadrado e: %.2f", areaQuadrado);
    return 0;
}

#include <stdio.h>

int main()
{
 printf ("---Calcular area do circulo---");

float valorRaio = 0;
const float PI = 3.14;

printf("\nDigite o valor da medida do raio do circulo: ");
scanf("%f", &valorRaio);

float diametro =  valorRaio * valorRaio;
float areaCirculo = diametro * PI;

printf("O valor da area do circulo e: %.2f", areaCirculo);
    return 0;
}
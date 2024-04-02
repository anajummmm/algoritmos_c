#include <stdio.h>

int main()
{
    printf("---Converter reais em dolares---");

    int reais = 0;

    printf("\n Digite quantos reais você quer converter: ");
    scanf("%d", &reais);

    float soma = reais / 5;
  
    printf("Esse valor em dolares e: %.2f", soma);

    return 0;
}
#include <stdio.h>

int main()
{
    printf("---Converter temperatura em em graus Celsius (C) para graus Fahrenheit (F)---");

// Declaração de variáveis
    int grausCelsius = 0;

// O usuário digita a temperatura
    printf("\n Digite a temperatura em graus Celsius: ");
    scanf("%d", &grausCelsius);

//Processamento, os cálculos
    float soma = grausCelsius * 1.8 + 32;
  

// Saída mensagem
    printf("A temperatura em Fahrenheit e: %.2f", soma);

    return 0;
}
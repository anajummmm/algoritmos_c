#include <stdio.h>

int main()
{
    printf("---Calcular a nota do aluno---");

// Declaração de variáveis
    int prova1 = 0;
    int prova2 = 0; 

// O usuário digita as notas
    printf("\n Digite a nota da prova 1: ");
    scanf("%d", &prova1);

    printf("\n Digite a nota da prova 2: ");
    scanf("%d", &prova2);

//Processamento, os cálculos
    float soma = prova1 + prova2;
    float media = soma / 2;

// Saída mensagem
    printf("A media e: %.2f", media);

    return 0;
}

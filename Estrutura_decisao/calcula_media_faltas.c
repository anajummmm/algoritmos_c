/* Algoritmo que calcule a media do aluno combase em 2 notas, considere as seguintes condições:
Se media >= 6.0 e até 4 faltas está aprovado
Se faltas > 4 está reprovado por faltas*/

#include <stdio.h>

int main()
{
   float nota1 = 0;
   float nota2 = 0;
   int faltas = 0; 

   printf("Digite a primeira nota: ");
   scanf("%f", &nota1);

   printf("Digite a segunda nota: ");
   scanf("%f", &nota2);

   printf("Digite a quantidade de faltas: ");
   scanf("%d", &faltas);


   float media = (nota1 + nota2) / 2;

   if (media >= 6.0 && faltas <= 4)
   {
    printf("Aprovado com media %.2f", media);
   } else if (media < 6.0 && faltas <= 4)
   {

    printf("Esta de recuperacao com media %.2f", media);
   }
   else if (faltas > 4)
   {
    printf("Reprovado, teve %d faltas", faltas);
   }

    return 0;
}

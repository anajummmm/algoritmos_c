#include <stdio.h>

/*Algoritmo para calcular média de duas notas do aluno
se média >= 6.0 aprovado
se média < 6.0 reprovado */

int main()
{
  float nota1 = 0;
  float nota2 = 0;

  printf("Digite a primeira nota:  ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota:  ");
  scanf("%f", &nota2);

  float media = (nota1 + nota2) / 2;

  if (media >= 6.0){
    printf("Aluno esta aprovado com media: %.2f", media);
  } else {
    printf("Aluno esta reprovado com media %.2f", media);
  }


    return 0;
}

#include <stdio.h>

int main()
{
 int idade = 0;

  printf("Digite sua idade:  ");
  scanf("%d", &idade);

  if (idade >= 18){
    printf("Voce e maior de idade com %d anos", idade);
  } else {
    printf("Voce e menor de idade com %d anos ", idade);
  }


    return 0;
}
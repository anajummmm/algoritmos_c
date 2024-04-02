/*
Exemplo de algoritmo com declaração de variáveis em C
*/

#include<stdio.h>

int main()
{
   int idade =  15;
   float altura =  1.63;
   char *letra = " A";
   char nome[] = " Ana";

   printf("---Meus dados pessoais---");
   printf("\n Meu nome:%s", nome);
   printf("\n Minha letra inicial:%s", letra);
   printf("\n Minha idade:%d", idade);
   printf("\n Minha altura:%.2f", altura);

   return 0;
}

/*Logradouro em linguagem C*/

#include<stdio.h>

int main()
{
   int numero = 2020;
   int cep = 13425380;
   char bairro[] = "Pompeia";
   char cidade[] = "Piracicaba";
   char complemento[] = "Las Rocas Bloco A Apto 51";
   char estado[] = "Sao Paulo";

   printf("---Logradouro---");
   printf("\n Meu numero:%d", numero);
   printf("\n Meu cep:%d",cep);
   printf("\n Meu bairro:%s", bairro);
   printf("\n Minha cidade:%s", cidade);
   printf("\n Meu complemento:%s", complemento);
   printf("\n Meu estado:%s", estado);

    return 0;
}
#include <stdio.h>

int main()
{
 
  int distanciapercorrida = 350;
  int medialitrosgasolina = 10;
  int medialitrosetanol = 8;
  float valorgasolina = 4.90;
  float valoretanol = 3.90;

  int qtdeLitrosGasolina = distanciapercorrida / medialitrosgasolina;
  int qtdeLitrosEtanol = distanciapercorrida / medialitrosetanol;
  float valorGastoGasolina = qtdeLitrosGasolina * valorgasolina;
  float valorGastoEtanol = qtdeLitrosEtanol * valoretanol;

  printf("\nValor gasto com Gasolina: %.2f", valorGastoGasolina);
  printf("\nValor gasto com Etanol: %.2f", valorGastoEtanol);
  


    return 0;
}

#include <stdio.h>

 int main()
 {
    int parcelas= 0;
    float valorimovel = 0;
    
    printf("\n Em quantas parcelas voce quer pagar seu imovel? ");
    scanf("%d", &parcelas);

    printf("Qual o valor do seu imovel? ");
    scanf("%f", &valorimovel);

    float valorParcelas = valorimovel / parcelas;


    printf("Esse e o valor da sua parcela: %.2f", valorParcelas);

    return 0;

    }
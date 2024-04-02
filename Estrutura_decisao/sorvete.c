#include <stdio.h>

int main() {
   float valorDinheiro = 4.99;
    int vaiChoverFDS = 0;

    if (valorDinheiro > 0 && vaiChoverFDS == 0) 
    {
        printf("A pessoa vai a sorveteria no fim de semana!\n");
    } 
    else if (valorDinheiro == 0 || vaiChoverFDS == 1) {
        printf("A pessoa nao vai a sorveteria no fim de semana.\n");
    }
    

    return 0;
}
  
 #include <stdio.h>

 int main()
 {
    float peso = 0;
    float altura = 0;
    
    printf("Digite o peso em quilogramas: ");
    scanf("%f", &peso);

    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    float imc = peso / (altura * altura);

    printf("O IMC e: %.2f", imc);

    return 0;

    }
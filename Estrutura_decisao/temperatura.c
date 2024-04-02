#include <stdio.h>

int main()
{
   int temperatura = 0;
   printf("Qual a temperatura ataual: ");
   scanf("%i", &temperatura);

 if (temperatura > 0 && temperatura <= 13)  {
    printf("Esta muito frio hoje. \n");

} else if (temperatura > 13 && temperatura <= 25) {
    printf("Esta agradavel!.\n");

} else if (temperatura > 25 && temperatura <= 32) {
    printf("Esta calor hoje.\n");

} else if (temperatura > 32 && temperatura <= 60) {
    printf("Esta muito calor hoje! \n");
    }

return 0;
}
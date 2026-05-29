#include <stdio.h>
#include <stdlib.h>

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-17 -  O Sensor do Parque Temático                               * ");
printf("\n******************************************************************************** ");

float altura;

printf("\n\nAltura da criança em centímetros: ");
scanf("%f", &altura);

    if(altura >= 140) {
        printf("\nLuz verde...");
    } else {
        printf("\nLuz vermelha...");
    }

    

return 0;

}
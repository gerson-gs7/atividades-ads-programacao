#include <stdio.h>
#include <stdlib.h>

int main() {
float m;
    
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-25 - Notas e aprovação                                          * ");
printf("\n******************************************************************************** ");

    
    printf("\nDigite a média do aluno: ");
    scanf("%f", &m);
    
    if(m < 6) {
        printf("Reprovado");
    } else if (m >= 6 && m < 8) {
        printf("Recuperação");
    } else {
        printf("Aprovado");
    }
    
return 0;

}
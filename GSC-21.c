#include <stdio.h>
#include <stdlib.h>

int main() {
int n;
    
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-21 - Número positivo, negativo ou zero                          * ");
printf("\n******************************************************************************** ");

    
    printf("\nDigite um número: ");
    scanf("%d", &n);
    
    if(n == 0) {
        printf("Zero");
    } else if(n < 0){
        printf("Número negativo");
    } else {
        printf("Número positivo");
    }
    
return 0;

}
#include <stdio.h>
#include <stdlib.h>

int main() {
int n1, n2;
    
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-23 - Maior de dois números                                      * ");
printf("\n******************************************************************************** ");

    
    printf("\nDigite a nota do atleta 1: ");
    scanf("%d", &n1);
    printf("\nDigite a nota do atleta 2: ");
    scanf("%d", &n2);
    
    if(n1 > n2) {
        printf("O atleta 1 teve maior nota.");
    } else if(n2 > n1){
        printf("O atleta 2 teve maior nota.");
    } else {
        printf("Empate");
    }
    
return 0;

}
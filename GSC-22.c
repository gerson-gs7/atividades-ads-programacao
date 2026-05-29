#include <stdio.h>
#include <stdlib.h>

int main() {
int n;
    
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-22 - Par ou ímpar                                               * ");
printf("\n******************************************************************************** ");

    
    printf("\nDigite um número: ");
    scanf("%d", &n);
    
    if(n%2 == 0) {
        printf("Par");
    } else {
        printf("Ímpar");
    }
    
return 0;

}
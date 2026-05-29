#include <stdio.h>
#include <stdlib.h>

int main() {
int ano;
    
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-20 - Ano bissexto                                               * ");
printf("\n******************************************************************************** ");

    
    printf("\nDigite um ano: ");
    scanf("%d", &ano);
    
    if (ano % 400 == 0) {
        printf("\nAno bissexto");
    } else if (ano % 100 == 0) {
        printf("\nAno não bissexto");
    } else if (ano % 4 == 0) {
        printf("\nAno bissexto");
    } else {
        printf("\nAno não bissexto");
    }
return 0;

}
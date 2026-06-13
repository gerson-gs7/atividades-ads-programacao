#include <stdio.h>

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-33 - Multiplos de 3 entre 1 e 30                                * ");
printf("\n******************************************************************************** ");
printf("\n\n");

    int multiplo = 0;
    int cont = 1;
    
    do{
        multiplo = 3 * cont;
        printf("%d\t",multiplo);
        cont++;
    }
    while( multiplo < 30 );
    
    
    
return 0;

}
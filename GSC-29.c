#include <stdio.h>
#include <stdlib.h>

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-29 - Números pares de 0 a 50                                    * ");
printf("\n******************************************************************************** ");

    for (int i = 0; i <= 50; i++) {
        if(i%2 == 0){
            printf("\n%.0d  ", i);
        }
    }

return 0;

}
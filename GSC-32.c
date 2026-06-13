#include <stdio.h>

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-32 - Quadrado dos números de 1 a 10                             * ");
printf("\n******************************************************************************** ");
printf("\n");

    for (int i=1; i <=10; i++) {
        int quadrado = i * i;
        printf("%d² = %d\n",i, quadrado);
    }
    
return 0;

}
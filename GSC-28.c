#include <stdio.h>
#include <stdlib.h>

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-28 - Soma dos 100 primeiros números naturais                    * ");
printf("\n******************************************************************************** ");

int soma = 0;


    for (int i = 1; i <= 100; i++) {
        soma += i;
    }
printf("\nA soma dos numeros de 1 a 100 é: %.0d", soma);
    
return 0;

}
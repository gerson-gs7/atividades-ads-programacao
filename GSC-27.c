#include <stdio.h>
#include <stdlib.h>

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-27 - Tabuada de um número                                       * ");
printf("\n******************************************************************************** ");

int n,r;

printf("\nDigite um numero: ");
scanf("%d", &n);
printf("\nA tabuada de %.0d é:\n", n);

    for(int i = 1; i<=10; i++) {
       r = n * i;
        printf("\n%d x %d = %d",n,i,r);
        
    }
    
return 0;

}
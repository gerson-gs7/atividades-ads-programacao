#include <stdio.h>
#include <stdlib.h>

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-30 - Fatorial de um número                                      * ");
printf("\n******************************************************************************** ");
int n,r;
    printf("\nDigite um número: ");
    scanf("%d", &n);
    r=n;
    for (int i = n-1; i > 1; i--) {
       r = r*i;  
    }
       printf("\n%d! = %d",n,r);

return 0;

}
#include <stdio.h>

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-47 - Tabuada de um número                                       * ");
printf("\n******************************************************************************** ");

int num,result,cont = 1;

printf("\nDigite um numero: ");
scanf("%d", &num);
printf("\nA tabuada de %.0d é:\n", num);


    do {
        result = num * cont;
        printf("\n%d x %d = %d",num,cont,result);
        cont ++;
    } while(cont <= 10);
    
return 0;

}
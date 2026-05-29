#include <stdio.h>
#include <stdlib.h>

int main() {
int idade;
    
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-24 - Pode votar?                                                * ");
printf("\n******************************************************************************** ");

    
    printf("\nQual a sua idade? ");
    scanf("%d", &idade);
    
    if(idade > 15) {
        printf("Pode votar");
    } else {
        printf("Não pode votar");
    }
    
return 0;

}
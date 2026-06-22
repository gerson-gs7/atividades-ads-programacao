#include <stdio.h>
#include <stdbool.h>

bool isPar(int n){
    if(n % 2 == 0){
    return true;
    }
    return false;
}

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-43 -  Soma dos pares entre 1 e 100                              * ");
printf("\n******************************************************************************** ");
printf("\n\n");

    int soma = 0;
    int cont = 0;
    while(cont <= 100) {
        if(isPar(cont)){
        soma = soma + cont;
        }
        cont ++;
    }
    printf("A soma dos números pares entre 1 e 100 é: %d", soma);
    
    
return 0;

}
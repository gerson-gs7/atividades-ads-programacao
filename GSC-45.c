#include <stdio.h>

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-45 -  Menu até escolher sair                                    * ");
printf("\n******************************************************************************** ");
printf("\n\n");

    int op;
    
    do {
        printf("Escolha uma opção do menu");
        printf("\n------------------------");
        printf("\n Conta corrente -> 1");
        printf("\n Conta poupança -> 2");
        printf("\n Extrato        -> 3");
        printf("\n Pix            -> 4");
        printf("\n sair           -> 0");
        printf("\n> ");
        scanf("%d", &op);
    
    }
    while(op != 0);
    
    return 0;
}
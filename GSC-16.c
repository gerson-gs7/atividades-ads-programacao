#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-16 -  Múltiplo de 3 e/ou 5                                          * ");
printf("\n******************************************************************************** ");

setlocale(LC_ALL, "portuguese");
int numPedido;

printf("\n\nDigite o número do pedido: ");
scanf("%d", &numPedido);

    if(numPedido % 3 == 0 && numPedido % 5 == 0) {
        printf("Parabéns, você ganhou um refrigerante e uma sobremesa!");
    } else if (numPedido % 3 == 0) {
        printf("Parabéns, você ganhou um refrigerante!");
    } else if (numPedido % 5 == 0 ) {
        printf("Parabéns, você ganhou uma sobremesa!");
    } else {
        printf("Não foi dessa vez :( ");
    }

return 0;

}
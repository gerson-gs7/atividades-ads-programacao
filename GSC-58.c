#include <stdio.h>

int main() {
	printf("\n******************************************************************************** ");
	printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
	printf("\n* Programa GSC-58 - A Calculadora de Bolso de 4 Operações                      * ");
	printf("\n******************************************************************************** ");
    
     float n1,n2,result;
     int opcao;
    
    printf("\nDigite os números para calcular");
    printf("\n1º número: ");
    scanf("%f", &n1);
    printf("2º número: ");
    scanf("%f", &n2);
    
    printf("\nEscolha a operação");
    printf("\n-----------------");
    printf("\nSoma          -> 1");
    printf("\nSubtração     -> 2");
    printf("\nMultiplicação -> 3");
    printf("\nDivisão       -> 4");
    printf("\n>");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            result = n1 + n2;
            printf("\n%.0f + %.0f = %.0f", n1,n2,result);
            break;
        case 2:
            result = n1 - n2;
            printf("\n%.0f - %.0f = %.0f", n1,n2,result);
            break;
        case 3:
            result = n1 * n2;
            printf("\n%.0f * %.0f = %.0f", n1,n2,result);
            break;
        case 4:
            result = n1 / n2;
            printf("\n%.0f / %.0f = %.0f", n1,n2,result);
            break;
        default:
         printf("\nOperação matemática não reconhecida.\n");
    }
    
    return 0;
}

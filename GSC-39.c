
#include <stdio.h>

int main()
{
    printf("\n******************************************************************************** ");
    printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
    printf("\n* Programa GSC-39 - Verificar se um número é positivo                          * ");
    printf("\n******************************************************************************** ");
    printf("\n\n");

    int n;
    
    do {
        printf("Digite um número positivo: ");
        scanf("%d", &n);
    }while(n <= 0);
    printf("\nOk, você digitou um número positivo!");
    

    return 0;
}
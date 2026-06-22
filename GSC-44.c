#include <stdio.h>
#include <string.h>

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-44 -  Contar dígitos de um número                               * ");
printf("\n******************************************************************************** ");
printf("\n\n");

    int n;
    char str[50];

    printf("Digite um número: ");
    scanf("%d", &n);

    sprintf(str, "%d", n);
    int digitos = strlen(str);

    if (n < 0) digitos--;

    printf("O número tem %d dígitos.\n", digitos);

    return 0;
}
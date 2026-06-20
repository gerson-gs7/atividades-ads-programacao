/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    printf("\n******************************************************************************** ");
    printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
    printf("\n* Programa GSC-37 -  Soma de números até digitar zero                          * ");
    printf("\n******************************************************************************** ");
    printf("\n\n");

    float v;
    float soma=0;
    
    printf("Digite o valor do produto ou 0 para finalizar.\n");
    int cont = 1;
    do {
        printf("%d : R$ ", cont);
        scanf("%f", &v);
        soma = soma + v;
        cont ++;
    }while(v != 0);
    printf("\n-------------\n");
    printf("Total: R$ %.2f", soma);

    return 0;
}
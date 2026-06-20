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
    printf("\n* Programa GSC-35 - Números de Fibonacci (n termos)                            * ");
    printf("\n******************************************************************************** ");
    printf("\n\n");

    int n, anterior, atual=1, proximo=1;
    
    printf("Digite o numero de termos: ");
    scanf("%d", &n);
    printf("\n");
    printf("---------------------------------\n");
    printf("------ Sequência Fibonnaci ------\n");
    printf("---------------------------------\n");
    for(int i = 1 ; i <= n ; i++) {
        anterior = atual;
        
        printf("%d\t", proximo);
        atual=proximo;
        proximo = atual+anterior;
    }

    return 0;
}
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
    printf("\n* Programa GSC-38 -  Senha correta                                             * ");
    printf("\n******************************************************************************** ");
    printf("\n\n");

    int senha;
    
    while(senha != 0000) {
        printf("Digite a senha: ");
        scanf("%d", &senha);
    };
    printf("\nAcesso granted!");
    

    return 0;
}
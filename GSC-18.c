#include <stdio.h>
#include <string.h>

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-18 - Login simples                                              * ");
printf("\n******************************************************************************** ");

int matricula;
int senha;

printf("\n\nDigite sua matricula: (12345678): ");
scanf("%d", &matricula);
printf("\n\nDigite sua senha: (1234): ");
scanf("%d", &senha);

if(matricula == 12345678 && senha == 1234){
    printf("\nAcesso permitido.");
} else {
    printf("\nMatrícula ou senha incorretos.");
}

return 0;

}
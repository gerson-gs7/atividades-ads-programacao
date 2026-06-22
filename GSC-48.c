#include <stdio.h>

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-48 - Menu com opção de sair                                     * ");
printf("\n******************************************************************************** ");

    int opcao;


    do {
        printf("\n\n");
        if(opcao == 1) printf("Você escolheu a mensagem.");
        printf("\nEscolha uma opção no menu\n");
        printf("---------------------------");
        printf("\nMensagem -> 1");
        printf("\nSair     -> 2");
        printf("\n>");
        scanf("%d", &opcao);
    } while(opcao != 2);
    
return 0;

}
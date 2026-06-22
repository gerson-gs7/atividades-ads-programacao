#include <stdio.h>
#include <string.h>

int main() {
	printf("\n******************************************************************************** ");
	printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
	printf("\n* Programa GSC-57 - A Central do Brinquedo Eletrônico                          * ");
	printf("\n******************************************************************************** ");
    
    char cor[20];
    int opcao;
    printf("\nDigite a cor que acendeu: ");
    scanf("%s", cor);

               
    if (strcmp(cor, "verde") == 0) {
        opcao = 1;        
    } else if (strcmp(cor, "amarelo") == 0) {
        opcao = 2;
    } else if (strcmp(cor, "vermelho") == 0) {
        opcao = 3;
    }
    
    switch(opcao) {
        case 1:
            printf("Vamos brincar lá fora!\n");
            break;
        case 2:
            printf("Estou ficando com soninho...\n");
            break;
        case 3:
            printf("Estou com fome, hora do lanche!\n");
            break;
        default:
         printf("O urso apenas pisca as luzes.\n");
    }
    
    return 0;
}

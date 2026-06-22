#include <stdio.h>

int main() {
	printf("\n******************************************************************************** ");
	printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
	printf("\n* Programa GSC-56 -  O Menu do Fast-Food Digital                               * ");
	printf("\n******************************************************************************** ");

	int opcao;


	printf("\nDigite o número do pedido: ");
	scanf("%d", &opcao);

	switch(opcao) {
	case 1:
		printf("Combo Hambúrguer + Batata + Refri - R$ 30,00");
		break;
	case 2:
		printf("Combo Pizza Brotinho + Refri - R$ 25,00");
		break;
	case 3:
		printf("Combo Salada + Suco Natural - R$ 22,00");
		break;
	case 4:
		printf("Combo Balde de Frango + Molho - R$ 35,00");
		break;
	default :
		printf("Opção inválida! Escolha de 1 a 4.");

	}
	
	return 0;

}
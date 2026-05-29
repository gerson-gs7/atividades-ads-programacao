#include <stdio.h>
#include <stdlib.h>

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-15 - Quantas caixas cabem dentro do caminhão                    * ");
printf("\n******************************************************************************** ");
float acx,lcx,ccx,acm,lcm,ccm,vcx,vcm, qtd;

printf("\nVamos calcular o volume do caminhão\n\n");

printf("Digite a altura do caminhão em centímetros: ");
scanf("%f", &acm);

printf("Digite a largura do caminhão em centímetros: ");
scanf("%f", &lcm);

printf("Digite o comprimento do caminhão em centímetros: ");
scanf("%f", &ccm);

printf("\n\nAgora vamos calcular o volume da caixa\n\n");

printf("Digite a altura da caixa em centímetros: ");
scanf("%f", &acx);

printf("Digite a largura da caixa em centímetros: ");
scanf("%f", &lcx);

printf("Digite o comprimento da caixa em centímetros: ");
scanf("%f", &ccx);

vcm = acm * lcm * ccm;
vcx = acx * lcx *ccx;

qtd = vcm / vcx;

printf("\n\nCabem %.2f caixa(s) dentro do caminhão.", qtd);





return 0;

}
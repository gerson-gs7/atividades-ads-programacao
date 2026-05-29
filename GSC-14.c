#include <stdio.h>
#include <stdlib.h>

int main() {
    
int l1,l2,l3;

printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-14 - Tipo de triângulo                                          * ");
printf("\n******************************************************************************** ");


printf("\nDigite lado 1: ");
scanf("%d", &l1);
printf("Digite lado 2: ");
scanf("%d", &l2);
printf("Digite lado 3: ");
scanf("%d", &l3);

   if(l1<1 || l2<1 || l3<1){
       printf("Deve digitar um número maior que 0");
       return 0;
   }
       
       
       if(l1==l2 && l2==l3) {
    	printf("\nEquilátero");
       } else if(l1==l2 || l2==l3 || l1==l3) {
    	printf("\nIsósceles");
       } else {
    	printf("\nEscaleno");
       }
       
   

return 0;

}
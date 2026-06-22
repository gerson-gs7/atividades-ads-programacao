#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isImpar(int n){
    if(n % 2 != 0){
    return true;
    }
    return false;
}

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-42 -  Quantidade de números ímpares digitados                   * ");
printf("\n******************************************************************************** ");
printf("\n\n");

    int numeros[10];
    int impares[10];
    int quantidade = 0;
    int cont = 1;
    printf("Você deve digitar 10 números:\n");
    
    while(cont <= 10) {
        printf("Digite o %dº número: ",cont);
        scanf("%d", &numeros[cont-1]);
        cont ++;
    }
    printf("\n");
    
     
    for(int i=0 ; i<10 ; i++) {
        if(isImpar(numeros[i])){
            quantidade++;
            printf("%d\t", numeros[i]);
        }
    }
    if(quantidade<1){
        printf("\nVocê não digitou nenhum número impar.");
    } else {
        printf("\nVocê digitou %d números impares.",quantidade);
    }
    
return 0;

}
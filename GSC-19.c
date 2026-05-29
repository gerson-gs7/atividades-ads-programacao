#include <stdio.h>
#include <stdlib.h>

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-19: Ordem crescente (três números)                              * ");
printf("\n******************************************************************************** ");

int a,b,c, temp;

    printf("\n\nDigite a pontuação do aluno 1: ");
    scanf("%d", &a);
    printf("\n\nDigite a pontuação do aluno 2: ");
    scanf("%d", &b);
    printf("\n\nDigite a pontuação do aluno 3: ");
    scanf("%d", &c);
                        
    if(a > b) {         
        temp = a;         
        a = b;
        b = temp;
    }
    if(a > c) {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
         temp = b;
         b = c;
         c = temp;
    }
printf("As pontuações em ordem crescente: %d, %d, %d\n", a, b, c);
return 0;

}
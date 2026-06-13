#include <stdio.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrimo(int p){
    if(p <= 1) return false;
    if(p <= 3) return true;
    if(p % 2 == 0 || p%3 == 0) return false;
    
    for (int i = 5; i * i <= p; i += 6) {
        if (p % i == 0 || p % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
printf("\n******************************************************************************** ");
printf("\n* Aluno: Gerson Silva Costa - RA 0025821                                       * ");
printf("\n* Programa GSC-34 - Verificar se um número é primo                             * ");
printf("\n******************************************************************************** ");
printf("\n\n");

    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    
    if(isPrimo(n)){
        printf("%d é primo.", n);
    } else {
        printf("%d não é primo.", n);
    }
    
    
    
    
    
    
return 0;

}
#include <stdio.h>
#include <stdlib.h>
#include "generic.h"




void Inicializacao(){
    TYPED(meu_complexo_t) *z1, *z2, *result;
    TYPE a, b;
    int op;
    z1 = Cria_Z(1.0, 2);
    z2 = Cria_Z(3, 4);
    result = Cria_Z(0, 0);
    printf("\n1. Soma\n2. Subtracao\n3. Multiplicacao\n4. Divisao\n");
    scanf("%d", &op);

    switch(op){
        case 1:
            Soma(z1, z2, result);
            break;
        case 2:
            Subtracao(z1, z2, result);
            break;
        case 3:
            result = Multiplicacao(z1, z2);
            break;
        case 4:
            Divisao(z1, z2, result);
            break;

    }
    PrintaResult(result);
    free(z1);
    free(z2);
    free(result);
}





int main(){
    Inicializacao();
    return 0;
}
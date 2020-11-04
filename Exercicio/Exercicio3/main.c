#include <stdio.h>
#include <stdlib.h>
#include "bibli.h"




void Inicializacao(){
    Complex *z1, *z2, *result;
    int op;
    z1 = IniciaCompl();
    z2 = IniciaCompl();
    result = IniciaCompl();
    z1 = Cria_Z();
    z2 = Cria_Z();
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
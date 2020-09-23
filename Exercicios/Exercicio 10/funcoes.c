#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"


void Soma(int *primos, int tamanho, int *soma){
    for(int i = 0; i < tamanho; i++){
        *soma += primos[i];
    }
}



void CriaVetorPrimos(int *primos, int tamanho){
    int cont, pri = 0;


    for (int i = 0; i < 2000000; i++){
        cont = 0;
        for(int j = 1; j <= i ; j++){
            if(i % j == 0){
                cont++;
            }
        }

        if (cont == 2){
            primos[pri] = i;
            pri++;
        }

        if(pri >= tamanho){
            break;
        }

    }

}


void Inicializacao(){
    int tamanho, soma = 0, *primos;
    printf("Quantos numeros primos vc deseja somar: ");
    scanf("%d", &tamanho);
    primos = (int *)malloc(tamanho * sizeof(int));
    CriaVetorPrimos(primos, tamanho);
    Soma(primos, tamanho, &soma);
    printf("A soma dos %d primeiros numeros primos antes de 2 milhoes eh: %d", tamanho, soma);
    free(primos);
}



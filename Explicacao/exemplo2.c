#include <stdio.h>
#define tam 100

/*
2)Escreva uma função mm que receba um vetor inteiro
v[0..n-1] e os endereços de duas variáveis inteiras, digamos
min e max, e deposite nessas variáveis o valor de um
elemento mínimo e o valor de um elemento máximo do
vetor. Escreva também uma função main que use a função
mm.
*/


void Deposita(int *v, int *min, int *max, int n){
    int maior = 0, menor = 999999;

    for(int i = 0; i < n; i++){
        if(v[i] > maior){
            maior = v[i];
        }

        if(v[i] < menor){
            menor = v[i];
        }
    }

    *min = menor;
    *max = maior;
}


void Inicializacao(){
    int v[tam], min, max, n;
    printf("Informe o numero de elementos q deseja ter no vetor: ");
    scanf("%d", &n);
    printf("Informe os numeros que deseja no vetor:\n");
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }
    Deposita(v, &min, &max, n);
    printf("Maximo: %d    Minimo: %d\n", max, min);

}



int main(){
    Inicializacao();
    return 0;
}

#include <stdio.h>
#define tam 100

//Recebe o vetor como valor (recebe com o *)
void InicializaVetor(int *vet, int n){
    for(int i = 0; i < n; i++){
        vet[i] = i; //O valor eh alterado sem precisar do *
    }
}


int main(){

    int i, n, vet[tam] = {0};

    printf("Escolha um valor de n <= 100: ");
    scanf("%d", &n);
    //Manda o vetor como variavel, nao como localizacao na memoria
    InicializaVetor(vet, n);
    printf("Vetor vet: ");
    for(i = 0; i < n; i++){
        printf("%d\n", vet[i]);
    }

    return 0;
}

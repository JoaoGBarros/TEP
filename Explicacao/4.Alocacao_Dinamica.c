#include <stdio.h>
#include <stdlib.h>
#define tam 100



int main(){
    //Alocacao Estatica -> Desse modo o compilador ja separa um espaco de tamanho indicado (no caso tam = 100) na memoria para aquele vetor
    //A alocacao eh feita em tempo de compilacao, o que pode acarretar, as vezes, espacos alocados grandes ou pequenos demais para a utilizacao
    int vetor[tam];
    int x = sizeof(vetor);

    printf("%d\n", x); //Imprime 400, pois 4 bytes para cada int no vetor de tamanho 100 -> 4x100 = 400

    //Alocacao Dinamica -> A alocacao dinamica eh feita em tempo de execucao, ou seja, nao existe um tanho pre definido para o vetor,
    //podendo conter inifinitos elementos, pois so sera alocada quando necessario: necessario #include <stdlib.h>


    int *vet, n;

    printf("Indique o numero de elementos que deseja ter no vetor: ");
    scanf("%d", &n);
    vet = (int *) malloc(n * sizeof(int)); //O comando basico eh || (tipo *) malloc (tamanho) -> pode ser usando no tamanho tanto numeros
                                           //Como funcoes, no caso sizeof(), desse modo vai alocar um espaco de n numeros inteiros na memoria
    printf("Complete o vetor: \n");

    for(int i = 0; i < n; i++){
        scanf("%d", &vet[i]);
    }

    for(int i = 0; i < n; i++){
        printf("%d\n", vet[i]);
    }



    free(vet); //Deve se dar free(varivael) antes de terminar o programa para desalocar o espaco da memoria

    return 0;
}

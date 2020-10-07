#include <stdio.h>
#include <stdlib.h>

struct matriz{
    int linha;
    int coluna;
    float* vet;
};

typedef struct matriz Matriz; //Cria o tipo matriz




void Libera(Matriz* matrica){
    free(matrica->vet);
    free(matrica);
    //Libera o espaco na memoria do ponteiro vet - a matriz - dentro da struct e depois do proprio ponteiro da struct

}

float PrintaValorEspecifico(Matriz* matrica){
    int i, j, k;
    printf("Qual posicao i vc deseja acessar? ");
    scanf("%d", &i);
    printf("Qual posicao j vc deseja acessar? ");
    scanf("%d", &j);

    if(i < 0 || i >= matrica->linha || j < 0 || j >= matrica->coluna){
        printf("Nao foi possivel recuperar esse valor");
        exit(1);
    } // Caso tente acessar um valor inxistente o programa fecha

    k = i * matrica->coluna + j;
    return matrica->vet[k];

}



void PrintaMatrizInteira(Matriz* matrica){
    int k;
    for(int i = 0; i < matrica->linha; i++){
        for(int j = 0; j < matrica->coluna; j++){
            k = i * matrica->coluna + j; //Mesma coisa que no atribuir valor
            printf("%.1f ", matrica->vet[k]); //Printa o valor naquela posicao k da matriz
        }
        printf("\n");
    }
}


void AtribuiValor(Matriz* matrica){
    float a;
    int k; //Indice desejado
    for(int i = 0; i < matrica->linha; i++){
        for(int j = 0; j < matrica->coluna; j++){
            scanf("%f", &a); //Le  valor que sera atribuido
            k = i * matrica->coluna + j;

            /* Informa o indice. Ex: i = 0, j = 3 matriz->coluna = 3; k = 0 * 3 + 3 = 3;
             * a variavel vai ser armazenada no indice [0][3]*/

            matrica->vet[k] = a; //Armazena o valor atribuido a variavel 'a'
        }
    }
}

Matriz* Cria(int m, int n){
    Matriz* mat = (Matriz*)malloc(sizeof(Matriz));
    mat->linha = m;
    mat->coluna = n;
    mat->vet = (float*)malloc(m*n*sizeof(float)); //Cria uma matriz de alocacao dinamica de tamanho m linhas e n colunas
    return mat;
}


int main() {
    int n, m;
    Matriz *matrica;

    printf("Informe o numero de linhas: ");
    scanf("%d", &m);
    printf("Informe o numero de colunas: ");
    scanf("%d", &n);
    matrica = Cria(m, n);
    AtribuiValor(matrica);
    PrintaMatrizInteira(matrica);
    printf("%f", PrintaValorEspecifico(matrica));
    Libera(matrica);

}

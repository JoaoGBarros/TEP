#include <stdio.h>
#include <stdlib.h>

struct matriz{
    int linha;
    int coluna;
    float** vet;
};

typedef struct matriz Matriz;

void Libera(Matriz* matruca){
    for(int i = 0; i < matruca->linha; i++){
        free(matruca->vet[i]);
    }
    free(matruca->vet);
    free(matruca);
}

float PrintaValorEspecifico(Matriz* matruca){
    int i, j;
    printf("Qual posicao i vc deseja acessar? ");
    scanf("%d", &i);
    printf("Qual posicao j vc deseja acessar? ");
    scanf("%d", &j);

    if(i < 0 || i >= matruca->linha || j < 0 || j >= matruca->coluna){
        exit(1);
    }

    return matruca->vet[i][j];
}

void PrintaMatrizInteira(Matriz* matruca){
    for(int i = 0; i < matruca->linha; i++) {
        for (int j = 0; j < matruca->coluna; j++) {
            printf("%.1f ", matruca->vet[i][j]);
        }
        printf("\n");
    }
}

void AtribuiValor(Matriz* matruca){
    float a;

    for(int i = 0; i < matruca->linha; i++) {
        for (int j = 0; j < matruca->coluna; j++) {
            scanf("%f", &a);
            matruca->vet[i][j] = a;
        }
    }
}

Matriz* CriaMatriz(int m, int n){
    Matriz* mat = (Matriz*)malloc(sizeof(Matriz));
    mat->linha = m;
    mat->coluna = n;
    mat->vet = (float**)malloc(m*sizeof(float*));
    for(int i = 0; i < m; i++){
        mat->vet[i] = (float*)malloc(n*sizeof(float));
    }
    return mat;
}


int main(){
    int m, n;
    Matriz *matruca;
    printf("Informe o numero de linhas: ");
    scanf("%d", &m);
    printf("Informe o numero de colunas: ");
    scanf("%d", &n);
    matruca = CriaMatriz(m, n);
    AtribuiValor(matruca);
    PrintaMatrizInteira(matruca);
    printf("%.1f", PrintaValorEspecifico(matruca));
    Libera(matruca);
}

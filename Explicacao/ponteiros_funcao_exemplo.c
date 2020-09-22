#include <stdio.h>

//Funcao que troque o valor de duas variaveis

void Troca(float *a, float *b){
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main(){
    float a, b;
    a = 3.14;
    b = 2.17;

    printf("a = %.2f      b = %.2f\n", a, b);
    Troca(&a, &b);
    printf("a = %.2f      b = %.2f\n", a, b);

    return 0;

}
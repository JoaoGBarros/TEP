#include <stdio.h>

int Soma1(int a, int b){
    return a+b;
}

void Soma2(int x, int y, int *r){
    *r = x + y;
}

int main(){
    int x, y, r;

    //Passagem por copia -> basicamente a variavel dentro da funcao solicitada da um copiar/colar da variavel fora da funcao chamada
    int soma = Soma1(1, 2);
    printf("%d\n", soma);
    // -------------------------------------------------------------------------------------------

    //Passagem por referencia, a variavel r sera modificada dentro da funcao passando o seu local de memoria 
    //como argumento e recebendo a mesma com *
    printf("Digite 2 numeros: ");
    scanf("%d %d", &x, &y);
    Soma2(x, y, &r);
    printf("%d\n", r);



    return 0;
}
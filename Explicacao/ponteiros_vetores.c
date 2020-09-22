#include <stdio.h>



int main(){
    int *pa, x, y, z, a[6] = {1, 20, 10, 49, 17, 23};

    pa = &a[0]; // pa = a; Por definicao o endereco de uma variavel vetor eh o elemento 0
    x = *pa;
    y = (pa + 1); // &pa[1] -> O endereco de pa[1]
    z = *(pa + 1); //a[1] -> O valor de a[1] >>>>>>>> * na frente <<<<<<

    //pa++ e pa = a sao validos; a = pa e a++ sao invalidos;

    return 0;
}
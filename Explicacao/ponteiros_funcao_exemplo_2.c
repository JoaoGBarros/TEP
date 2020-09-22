#include <stdio.h>

//Nao tem main e nem funcoes pq eh apenas teorico, dizer o q acontece e se funciona ou nao.


int *pa, a[6];

pa = a; //pa = &a[0] direciona a localizacao do ponteiro para o primeiro valor do vetor
a = pa; // Nao existe e nao funciona
pa++; //vai direcionar o ponteiro para o proximo valor do vetor, no caso o endereco de a[1] -> &a[1]
a++; // Nao existe e nao funciona



// -----------------------------------------------------------------------------------------


int *pb, b[10];

pb = b //pb = &b[0], direciona o ponteiro para o primeiro valor do vetor
*pb += 2 //o valor de onde o ponteiro esta apontando, no caso b[0], sera adicionado + 2
*pb++ // Adiciona +1 ao valor em que o ponteiro pb esta apontando -> b[0]
#include <stdio.h>
#include <stdlib.h>
#include "generic.h"


TYPED(meu_complexo_t) *TYPED(Cria_Z_Linha) (){
    TYPED(meu_complexo_t) *z;
    z = IniciaCompl();
    printf("Numero Complexo\n");
    printf("Valor Real: ");
    scanf("%f", &z->re);
    printf("Valor de imaginario: ");
    scanf("%f", &z->im);

    return z;
}

TYPED(meu_complexo_t)* TYPED(Cria_Z) (TYPE a, TYPE b){
    TYPED(meu_complexo_t) *z;
    z = IniciaCompl();
    z->re = a;
    z->im = b;
    return z;
}


void Soma(TYPED(meu_complexo_t)* z1, TYPED(meu_complexo_t)* z2, TYPED(meu_complexo_t)* result){
    result->re = z1->re + z2->re;
    result->im = z1->im + z2->im;
}

void Subtracao(TYPED(meu_complexo_t)* z1, TYPED(meu_complexo_t)* z2, TYPED(meu_complexo_t)* result){
    result->re = z1->re - z2->re;
    result->im = z1->im - z2->im;
}

TYPED (meu_complexo_t) *TYPED (Multiplicacao) (TYPED (meu_complexo_t)* z1, TYPED (meu_complexo_t)* z2){
    TYPED(meu_complexo_t) *r;
    r = (TYPED(meu_complexo_t*))malloc(sizeof(meu_complexo_t));
    TYPE a, b, c, d;

    a = z1->re * z2->re;
    b = z1->re * z2->im; //e.g 2i
    c = z1->im * z2->re; //eg 2i
    d = z1->im * z2->im; //eg 2 * i**2   i**2 = -1
    d = d * (-1);
    r->re = a+d;
    r->im = b+c;

    return r;
}

void Divisao(TYPED(meu_complexo_t)* z1, TYPED(meu_complexo_t)* z2, TYPED(meu_complexo_t)* result){
    TYPED(meu_complexo_t) *num, *den;
    num = Multiplicacao(z1, z2);
    den = Multiplicacao(z2, z2);
    result->re = num->re / den->re;
    result->im = num->im / den->im;
}

TYPED (meu_complexo_t) *TYPED (IniciaCompl) (){
    TYPED(meu_complexo_t) *z;

    z = (TYPED(meu_complexo_t*))malloc(sizeof(meu_complexo_t));
    return z;
}

void PrintaResult(TYPED(meu_complexo_t)* result){

    printf("{%d, %d I} %d\n", result->re, result->im, sizeof(TYPE));
}

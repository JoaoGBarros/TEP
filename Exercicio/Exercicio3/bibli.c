#include <stdio.h>
#include <stdlib.h>
#include "bibli.h"

struct meu_complexo_t{
    float re;
    float im;
};


Complex* Cria_Z(){
    float a, b;
    Complex *z;
    z = IniciaCompl();
    printf("Numero Complexo\n");
    printf("Valor Positivo: ");
    scanf("%f", &z->re);
    //z->re = a;
    printf("Valor de i: ");
    scanf("%f", &z->im);
    //z->im = b;

    return z;
}

void Soma(Complex* z1, Complex* z2, Complex* result){
    result->re = z1->re + z2->re;
    result->im = z1->im + z2->im;
}

void Subtracao(Complex* z1, Complex* z2, Complex* result){
    result->re = z1->re - z2->re;
    result->im = z1->im - z2->im;
}

Complex* Multiplicacao(Complex* z1, Complex* z2){
    Complex *r;
    r = (Complex*)malloc(sizeof(Complex));
    float a, b, c, d;

    a = z1->re * z2->re;
    b = z1->re * z2->im; //e.g 2i
    c = z1->im * z2->re; //eg 2i
    d = z1->im * z2->im; //eg 2 * i**2   i**2 = -1
    d = d * (-1);
    r->re = a+d;
    r->im = b+c;

    return r;
}

void Divisao(Complex* z1, Complex* z2, Complex* result){
    Complex *num, *den;
    num = (Complex*)malloc(sizeof(Complex));
    den = (Complex*)malloc(sizeof(Complex));
    num = Multiplicacao(z1, z2);
    den = Multiplicacao(z2, z2);
    result->re = num->re / den->re;
    result->im = num->im / den->im;
}

Complex *IniciaCompl(){
    Complex *z;

    z = (Complex*)malloc(sizeof(Complex));
    return z;
}

void PrintaResult(Complex* result){
    printf("{%.1f , %.1fi}", result->re, result->im);
}
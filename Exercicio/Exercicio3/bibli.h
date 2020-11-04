#ifndef BIBLI_H
#define BIBLI_H

typedef struct meu_complexo_t Complex;

Complex* Cria_Z();
void Divisao(Complex* z1, Complex* z2, Complex* result);
void Soma(Complex* z1, Complex* z2, Complex* result);
void Subtracao(Complex* z1, Complex* z2, Complex* result);
Complex* Multiplicacao(Complex* z1, Complex* z2);
Complex *IniciaCompl();
void PrintaResult(Complex* result);

#endif
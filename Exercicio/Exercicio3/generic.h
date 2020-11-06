#ifndef GENERIC_H
#define GENERIC_H
#define TYPE float
#define TYPED(Complex) Complex



typedef struct {
    TYPE re;
    TYPE im;
}TYPED(meu_complexo_t);


TYPED(meu_complexo_t)* TYPED(Cria_Z) (TYPE a, TYPE b);
TYPED(meu_complexo_t) *TYPED(Cria_Z_Linha) ();
void Divisao(TYPED(meu_complexo_t)* z1, TYPED(meu_complexo_t)* z2, TYPED(meu_complexo_t)* result);
void Soma(TYPED(meu_complexo_t)* z1, TYPED(meu_complexo_t)* z2, TYPED(meu_complexo_t)* result);
void Subtracao(TYPED(meu_complexo_t)* z1, TYPED(meu_complexo_t)* z2, TYPED(meu_complexo_t)* result);
TYPED (meu_complexo_t) *TYPED (Multiplicacao) (TYPED (meu_complexo_t)* z1, TYPED (meu_complexo_t) *z2);
TYPED (meu_complexo_t) *TYPED (IniciaCompl) ();
void PrintaResult(TYPED(meu_complexo_t)* result);

#endif
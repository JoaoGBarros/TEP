#include <stdio.h>



int main(){
    int a = 100;
    int *ponteiroInt;
    int x, y, r;

    //Utilizando o & aponta o local da memoria para o ponteiro
    ponteiroInt = &a;
    
    //Utilizando o * antes da variavel do ponteiro vai ser utilizado o valor para o qual esta apontando na memoria, no caso o a
    printf("%d\n", *ponteiroInt); // print 100

    *ponteiroInt = *ponteiroInt * 2;
    // Por conta do ponteiro estar apontando para a memmoria de a, qualquer mudanca no valor dele(usando o *) acarreta na mudanca do valor de a
    printf("%d\n", a);
    // Sem o * ele mostra o endereco de memoria onde esta alocado
    printf("%p\n", ponteiroInt);

    return 0;
}

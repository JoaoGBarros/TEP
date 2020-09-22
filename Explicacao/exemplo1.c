#include <stdio.h>

/*
1) Um ponteiro pode ser usado para dizer a uma função
onde ela deve depositar o resultado de seus cálculos.
Escreva uma função hm que converta minutos em horas-eminutos. A função recebe um inteiro “mnts” e os endereços
de duas variáveis inteiras, digamos h e m, e atribui valores a
essas variáveis de modo que m seja menor que 60 e que
60*h + m seja igual a “mnts”. Escreva também uma função
main que use a função hm.
*/

void HM(int mnts, int *h, int *m){
    *h = mnts / 60;
    *m = mnts % 60;
}



void Inicializacao(){
    int mnts, h, m;
    printf("Informe o tempo em minutos: ");
    scanf("%d", &mnts);
    HM(mnts, &h, &m);
    printf("Horas: %d     Minutos: %d\n", h, m);
}



int main(){
    Inicializacao();
    return 0;
}
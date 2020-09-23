void Somatoria(int *multiplos, int *soma, int tamanho){
    for (int i = 0; i < tamanho; i++){
        *soma += multiplos[i];
    }
}

void CriaVetor(int *multiplos, int tamanho){
    int aloc = 0;

    for (int i = 1; i < 1000; i++){
        if (i % 3 == 0 || i % 5 == 0){
            multiplos[aloc] = i;
            aloc++;
        }

        if (aloc >= tamanho){
            break;
        }
    }
}


void Inicializacao(){
    int tamanho, soma = 0, *multiplos;
    printf("Quantos numeros multiplos de 3 ou 5 voce deseja somar: ");
    scanf("%d", &tamanho);
    multiplos = (int *)malloc(tamanho * sizeof(int));
    CriaVetor(multiplos, tamanho);
    Somatoria(multiplos, &soma, tamanho);
    printf("A soma eh igual a %d", soma);
}
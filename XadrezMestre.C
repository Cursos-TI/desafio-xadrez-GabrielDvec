#include <stdio.h>

//Função recursiva para mover a Torre
//Cada chamada imprime “Direita” e chama a si mesma até zerar os passos.
void moverTorreRec(int passos) {
    if (passos <= 0) {
        return;
    }
    printf("Direita\n");
    moverTorreRec(passos - 1);
}

//Função recursiva para mover o Bispo
//Usa loops aninhados (outer: vertical; inner: horizontal) 
//para imprimir “Cima” e “Direita” a cada passo recursivo.
void moverBispoRec(int totalPassos, int atual) {
    if (atual >= totalPassos) {
        return;
    }
    //Loop externo: movimento vertical (1 casa "Cima")
    for (int v = 0; v < 1; v++) {
        printf("Cima\n");
        //Loop interno: movimento horizontal (1 casa "Direita")
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    }
    //Próximo passo do Bispo
    moverBispoRec(totalPassos, atual + 1);
}

//Função recursiva para mover a Rainha
//Cada chamada imprime “Esquerda” e chama a si mesma até zerar os passos.
void moverRainhaRec(int passos) {
    if (passos <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainhaRec(passos - 1);
}

int main() {
    //Definição dos números de casas (entradas fixas no código)
    const int passosTorre       = 5;  //Torre: 5 casas para a direita
    const int passosBispo       = 5;  //Bispo: 5 casas na diagonal cima+direita
    const int passosRainha      = 8;  //Rainha: 8 casas para a esquerda
    const int verticalCavalo    = 2;  //Cavalo: 2 casas para cima
    const int horizontalCavalo  = 1;  //Cavalo: 1 casa para a direita

    //Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorreRec(passosTorre);

    //Movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    moverBispoRec(passosBispo, 0);

    //Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    moverRainhaRec(passosRainha);

    //Movimento do Cavalo
    //Usa loops aninhados, continue e break para simular 2x "Cima" + 1x "Direita"
    printf("\nMovimento do Cavalo:\n");
    int totalCavalo = verticalCavalo + horizontalCavalo;
    for (int step = 0; step < totalCavalo; step++) {
        for (int dir = 0; dir < 2; dir++) {
            //Primeiras duas interações => imprimir "Cima" apenas quando dir==0
            if (step < verticalCavalo && dir == 0) {
                printf("Cima\n");
                break;             //sai do loop interno
            }
            //Na última iteração => imprimir "Direita" quando dir==1
            if (step >= verticalCavalo && dir == 1) {
                printf("Direita\n");
                break;             //sai do loop interno
            }
            //se nenhuma condição acima, continua para próxima dir
            continue;
        }
    }

    return 0;
}

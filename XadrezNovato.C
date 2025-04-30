#include <stdio.h>

//for (Torre): ideal para quando você já sabe exatamente quantas repetições precisa (5 interações para a Torre).
//while (Bispo): Bom para contar até um valor, com condição explicita no início. Aqui usamos while (contador < 5) para o Bispo.
//do-while (Rainha): Ideal para garantir que o bloco de código execute pelo menos uma vez antes de checar a condição. útil para cenários onde você quer executar primeiro e só depois validar

int main() {
    //== Torre: 5 casas para a direita usando FOR ==
    int passosTorre = 5;
    char direcaoTorre[] = "Direita";

    printf("Movimento da Torre:\n");
    for (int i = 0; i < passosTorre; i++) {
        printf("%s\n", direcaoTorre);
    }

    //== Bispo: 5 casas na diagonal (cima + direita) usando WHILE ==
    int passosBispo = 5;
    char direcaoBispo[] = "Cima, Direita";
    int contador = 0;

    printf("\nMovimento do Bispo:\n");
    while (contador < passosBispo) {
        printf("%s\n", direcaoBispo);
        contador++;
    }

    //= Rainha: 8 casas para a esquerda usando DO-WHILE ==
    int passosRainha = 8;
    char direcaoRainha[] = "Esquerda";
    int j = 0;

    printf("\nMovimento da Rainha:\n");
    do {
        printf("%s\n", direcaoRainha);
        j++;
    } while (j < passosRainha);

    return 0;
}

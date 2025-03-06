#include <stdio.h>

// Função recursiva para simular o movimento da Torre (movendo 5 casas para a direita)
void movimentoTorre(int casas) {
    if (casas <= 0) return;  // Condição de término da recursão
    printf("Direita\n");
    movimentoTorre(casas - 1);  // Chamada recursiva para mover uma casa para a direita
}

// Função recursiva para simular o movimento do Bispo (5 casas na diagonal para cima e à direita)
void movimentoBispo(int casasVertical, int casasHorizontal) {
    if (casasVertical <= 0 || casasHorizontal <= 0) return;  // Condição de término da recursão
    printf("Cima, Direita\n");
    movimentoBispo(casasVertical - 1, casasHorizontal - 1);  // Chamada recursiva para mover uma casa para cima e à direita
}

// Função recursiva para simular o movimento da Rainha (movendo 8 casas para a esquerda)
void movimentoRainha(int casas) {
    if (casas <= 0) return;  // Condição de término da recursão
    printf("Esquerda\n");
    movimentoRainha(casas - 1);  // Chamada recursiva para mover uma casa para a esquerda
}

// Função para simular o movimento do Cavalo (duas casas para cima e uma para a direita)
void movimentoCavalo() {
    printf("\nMovimento do Cavalo:\n");

    // Loop complexo com múltiplas variáveis e condições para o movimento em "L"
    for (int i = 1; i <= 2; i++) {
        printf("Cima\n");  // Movendo para cima
    }

    // Loop aninhado para mover o Cavalo para a direita
    for (int j = 1; j <= 1; j++) {
        printf("Direita\n");  // Movendo para a direita
    }
}

int main() {
    // Simulando o movimento de cada peça com recursividade e loops complexos
    printf("Movimento da Torre:\n");
    movimentoTorre(5);  // Movimento da Torre (5 casas para a direita)

    printf("\nMovimento do Bispo:\n");
    movimentoBispo(5, 5);  // Movimento do Bispo (5 casas na diagonal para cima e à direita)

    printf("\nMovimento da Rainha:\n");
    movimentoRainha(8);  // Movimento da Rainha (8 casas para a esquerda)

    movimentoCavalo();  // Movimento do Cavalo (duas casas para cima e uma para a direita)

    return 0;
}

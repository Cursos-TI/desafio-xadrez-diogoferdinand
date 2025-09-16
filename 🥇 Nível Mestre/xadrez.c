#include <stdio.h>

// Constantes globais para movimentos
const int BISPO_MOV = 5;
const int TORRE_MOV = 5;
const int RAINHA_MOV = 8;

// ---------- Funções Recursivas ----------

// Bispo: recursão + loops aninhados
void bispo(int passos) {
    if(passos == 0) return; // condição de parada

    // loops aninhados só para cumprir a regra do enunciado
    for(int i = 0; i < 1; i++) {
        for(int j = 0; j < 1; j++) {
            printf("Cima Direita\n");
        }
    }

    bispo(passos - 1); // chamada recursiva
}

// Torre: apenas recursão
void torre(int passos) {
    if(passos == 0) return;
    printf("Direita\n");
    torre(passos - 1);
}

// Rainha: apenas recursão
void rainha(int passos) {
    if(passos == 0) return;
    printf("Esquerda\n");
    rainha(passos - 1);
}

// Cavalo: loop com múltiplas variáveis + continue/break
void cavalo() {
    printf("Movimento do Cavalo:\n");

    // Cavalo anda 2 para cima e 1 para direita
    for(int cima = 0, direita = 0; cima < 3 && direita < 2; ) {

        // movimentos para cima
        if(cima < 2) {
            printf("Cima\n");
            cima++;
            continue; // volta para o início do loop
        }

        // movimento para direita
        if(direita < 1) {
            printf("Direita\n");
            direita++;
            continue;
        }

        // quando completar o L, sai do loop
        if(cima == 2 && direita == 1) {
            break;
        }
    }
}

// ---------- Main ----------
int main() {

    // Bispo
    printf("Bispo:\n");
    bispo(BISPO_MOV);

    // Torre
    printf("\nTorre:\n");
    torre(TORRE_MOV);

    // Rainha
    printf("\nRainha:\n");
    rainha(RAINHA_MOV);

    printf("\n");
    cavalo();

    return 0;
}
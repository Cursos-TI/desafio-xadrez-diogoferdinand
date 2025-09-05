
#include <stdio.h>



int main() {
    // Constantes para definir o número de movimentos
    const int BISPO_MOV = 5;
    const int TORRE_MOV = 5;
    const int RAINHA_MOV = 8;

    int i; // variável de controle para os loops

    // ---------------- Bispo ----------------
    printf("Bispo:\n");
    for(i = 0; i < BISPO_MOV; i++) {
        printf("Cima Direita\n");
    }

    // ---------------- Torre ----------------
    printf("\nTorre:\n");
    for(i = 0; i < TORRE_MOV; i++) {
        printf("Direita\n");
    }

    // ---------------- Rainha ----------------
    printf("\nRainha:\n");
    for(i = 0; i < RAINHA_MOV; i++) {
        printf("Esquerda\n");
    }

    return 0;
}
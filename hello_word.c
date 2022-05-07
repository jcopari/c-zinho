#include <stdio.h>

int main() {
    //Imprime o cabeçalho do nosso jogo
    printf("*************************************\n");
    printf("Bem-vindo ao nosso jogo de advinhacao\n");
    printf("*************************************\n");

    int numero = 42;
    //printf("\n%d", numero);
    int chute;

    printf("\n Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Chute foi %d", chute);

}
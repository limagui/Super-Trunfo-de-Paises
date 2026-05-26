#include <stdio.h>

int main() {
    
    char codigo[5];
    char estado;
    char cidade[20];
    float area;
    float pib;
    int populacao, turistas;

    //Mensagem de boas vinda ao jogo
    printf("Seja bem-vindo ao jogo Super Trunfo de Países\n");

    //Inico do código

    printf("Olá, vamos começar o jogo cadrastando as cartas!\n");

    printf("Escolha uma letra de A à H para representar um estado: ");
    scanf("%c", &estado);

    printf("Agora escolha um número de 01 à 04: ");
    scanf("%s", codigo);

    return 0;

}
#include <stdio.h>
#include <unistd.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
void moverbispo() {
    char bispo[30] = "Cima";
    char bispo2[30] = "Direita";
    int contador = 1;
    printf("\n");
    printf("Você escolheu o Bispo!\n");
    printf("\n");
    for (contador = 1; contador < 5; contador++) {
        do {
            switch(contador) {
                case 1:
                    printf("Movendo o bispo para %s\n", bispo); // imprime a ação de mover o bispo para cima
                    sleep(1);
                    contador = 1;
                case 2:
                    printf("Movendo o bispo para %s\n", bispo2); // imprime uma ação de mover o bispo para direita
                    sleep(1);
                    contador = 2;
                case 3:
                    printf("Movendo o bispo para %s\n", bispo);
                    sleep(1);
                    contador = 3; 
                case 4:
                    printf("Movendo o bispo para %s\n", bispo2); 
                    sleep(1);
                    contador = 4;
                case 5:
                    printf("Movendo o bispo para %s\n", bispo);
                    sleep(1);
                    contador = 5;
                    break; } }
        while (contador < 5); {}    } }
void movertorre() {
    char torre[30] = "Direita"; 
    int contador = 0;
    printf("\n");
    printf("Você escolheu a Torre!\n");
    printf("\n");
    for (contador = 0; contador < 5; contador++) {
        printf("Movendo a Torre para a %s\n", torre); // imprime a ação de mover a torre
        sleep(1); } }
void moverainha() {
    char rainha[30] = "Esquerda";  
    int contador = 0;
    printf("\n");
    printf("Você escolheu a Rainha!\n");
    printf("\n");
    do{
        printf("Movendo a Rainha para a %s\n", rainha); // imprime a ação de mover a rainha
        sleep(1);
        contador++;
    } while (contador < 8); }
int main() {
    // criando as variaveis das peças                 
    char cavalo[30] = "Cima";
    char cavalo2[30] = "Direita";
    int escolhaswitch = 0;
    int sairdojogo = 0;

    // imprime o menu de escolha
    printf("Escolha uma peça para mover:\n");
    printf("1 - Torre\n");
    printf("2 - Bispo\n");
    printf("3 - Rainha\n");
    printf("4 - Cavalo\n");
    printf("Digite o número da peça escolhida: ");
    do  {
        scanf("%d", &escolhaswitch); // coleta a escolha do usuário
        limparBuffer(); // limpa o buffer do teclado para evitar loops infinitos
        switch (escolhaswitch) {
            case 1: 
                movertorre();
                printf ("\n");
                printf("Obrigado por jogar!\n");
                printf ("\n");
                sairdojogo = 1; // adiciona 1 a variavel sairdojogo para sair do loop
                break; 
            case 2:
                moverbispo();
                printf ("\n");
                printf("Obrigado por jogar!\n");
                printf ("\n");
                sairdojogo = 1;
                break; 
            case 3:
                moverainha();
                printf ("\n");
                printf("Obrigado por jogar!\n");
                printf ("\n");
                sairdojogo = 1;
                break;
            case 4:
                printf("\n");
                printf("Você escolheu o cavalo!\n");
                printf("\n");
                int contador = 1;
                for (contador = 1; contador < 4; contador)
                    do
                        switch (contador) {
                            case 1:
                                printf("Movendo o cavalo para %s\n", cavalo);
                                sleep(1);
                                contador = 2;
                            case 2:
                                printf("Movendo o cavalo para %s\n", cavalo);
                                sleep(1);
                                contador = 3;
                            case 3:
                                printf("Movendo o cavalo para %s\n", cavalo2);
                                sleep(1);
                                contador = 4;
                                printf ("\n");
                                printf("Obrigado por jogar!\n");
                                printf ("\n"); }
                    while (contador < 4); {}
                sairdojogo = 1;
            break;      
            default:
                printf("Opção inválida! Tente novamente.\n"); // imprime mensagem de erro para opção inválida
                printf("Escolha uma peça para mover: ");
                break; }
    } while (sairdojogo != 1); { // enquanto a variavel sairdojogo for igual a 0, o loop continua
        sairdojogo = 0; }
    return 0; } 

/*
                          ░░░░░███████ ]▄▄▄▄▄▄▄▄
                          ▂▄▅█████████▅▄▃▂   ☻
                        Il███████████████████]. /▌\╦─
                           @@@@@@@@@@@@@@@@@    / \
*/

#include <stdio.h>

int main() {
    // Tamanho fixo do tabuleiro 10x10 com valor inicial 0.
    int tabuleiro[10][10] = {0};

    // Tamanho fixo dos navios: 3 posições
    int tamanhoNavio = 3;

    // Coordenadas iniciais do navio Horizontal (linha, coluna)
    int linhaNavioHorizontal = 2;
    int colunaNavioHorizontal = 4;
    // Coordenadas iniciais do navio Vertical (linha, coluna)
    int linhaNavioVertical = 5;
    int colunaNavioVertical = 7;

    // Validação: Garantir que os navios estejam dentro dos limites do tabuleiro.
    if (colunaNavioHorizontal + tamanhoNavio <= 10 && linhaNavioVertical + tamanhoNavio <= 10) {

        // Posicionar navio horizontalmente
        for (int i = 0; i < tamanhoNavio; i++) {
            tabuleiro[linhaNavioHorizontal][colunaNavioHorizontal + i] = 3;
        }

        // Posicionar navio verticalmente (verificando sobreposição)
        for (int i = 0; i < tamanhoNavio; i++) {
            int linhaAtual = linhaNavioVertical + i;
            int colunaAtual = colunaNavioVertical;

            if (tabuleiro[linhaAtual][colunaAtual] == 0) {
                tabuleiro[linhaAtual][colunaAtual] = 3;
            } else {
                printf("Erro: Sobreposição de navios detectada na posição (%d, %d).\n", linhaAtual, colunaAtual);
                return 1;
            }
        }

        // Exibir o tabuleiro
        printf("TABULEIRO DE BATALHA NAVAL:\n");
        printf("*********************************\n");
        printf(" A  B  C  D  E  F  G  H  I  J\n");
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                printf(" %d ", tabuleiro[i][j]);
            }
            printf("\n");
        }

    } else {
        printf("Erro: As coordenadas dos navios ultrapassam os limites do tabuleiro.\n");
        return 1;
    }

    return 0;
}


    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    

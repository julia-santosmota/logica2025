#include <stdio.h> //bliblioteca c
#include <stdlib.h> //para usar o system pause, que faz o exe não fechar quando der vitoria

int tabuleiro[9][9]; //tamanho da matriz do sudoku

void mostrar_tabuleiro() { //função que mostra o tabuleiro
    printf("\n   1 2 3 4 5 6 7 8 9\n"); //cabeçalho das colunas
    for (int i = 0; i < 9; i++) { //estrutura básica de matriz para linha
        printf("%d  ", i + 1); //mostra o número da linha
        for (int j = 0; j < 9; j++) { //estrutura básica de matriz para coluna
            printf("%d ", tabuleiro[i][j]); //de fato o que faz mostrar a matriz, no caso o tabuleiro
        }
        printf("\n"); //deixa uma linha vazia para ficar mais limpo
    }
}
int verificar_jogada(int linha, int coluna, int palpite) { //função que verifica a jogada
    for (int j = 0; j < 9; j++) { //para cada coluna
        if (tabuleiro[linha][j] == palpite) { //se o palpite já existir na linha
            return 0; //retorna falso
        }
    }
    for (int i = 0; i < 9; i++) { //para cada
        if (tabuleiro[i][coluna] == palpite) { //se o palpite já existir na coluna
            return 0;
        }
    }
    int inicio_linha = (linha / 3) * 3; //agrupa as linhas de 3 em 3
    int inicio_coluna = (coluna / 3) * 3; //mesma coisa mas para coluna
    for (int i = inicio_linha; i < inicio_linha + 3; i++)  {  //faz verificação na linha
        for (int j = inicio_coluna; j < inicio_coluna + 3; j++) { //faz verificação na coluna
            if (tabuleiro[i][j] == palpite) { //se algum dos números já estiver preenchido no bloco
                return 0;
            }
        }
    }
    return 1;
}
int verifica_vitoria() { //funcao que verifica vitoria
    for (int i = 0; i < 9; i++) { //estrutura básica de linha em uma matriz
        for (int j = 0; j < 9; j++) { //estrutura básica de coluna em uma matriz
            if (tabuleiro[i][j] == 0) { //verifica se há células vazias
                return 0; //retorna falso para se tiver
            }
        }
    }
    return 1; //verdadeiro se não tiver ->vitória
}
int main() { //função principal
    FILE *arquivo = fopen("sudoku.txt", "r"); //abre o arquivo
    if (arquivo == NULL) { //se o arquivo for nulo
        printf("Erro: arquivo sudoku.txt não encontrado\n"); //mostra erro
        return 1; //retorna verdadeiro
    }
    for (int i = 0; i < 9; i++) { //se tiver uma matriz no arquivo ele pega as linhas
        for (int j = 0; j < 9; j++) { //e usa as colunas
            fscanf(arquivo, "%d", &tabuleiro[i][j]); //os valores que estiverem no arquivo são colocados no tabuleiro
        }
    }
    fclose(arquivo); //fecha arquivo
    printf("\n      ==SUDOKU==\n"); //cabeçalho escrito sudoku
    int linha, coluna, palpite; //declara as variaveis linha, coluna e palpite
    while (1) { //enquanto verdadeiro, loop infinito enquanto verdadeiro
        mostrar_tabuleiro();// função de mostrar tabuleiro
        printf("\nDigite linha, coluna e palpite (1-9): ");// mostra na tela para o usuário digitar
        scanf("%d %d %d", &linha, &coluna, &palpite);//onde colocam as entradas
        linha--;//tira 1 da linha para ajuste já que a matriz vai de 0-8, não 1-9 como vai ser colocado
        coluna--;//tira 1 da coluna
        if (linha < 0 || linha > 8 || coluna < 0 || coluna > 8 || palpite < 1 || palpite > 9) {//se a entrada for menor que 0, maior que 8 (linha), menor que 0, maior que 8 (coluna), e o palpite não estiver entre 1-9
            printf("Jogada inválida! Tente outra posição.\n");//mostra para a pessoa tentar outra posição
            continue;//continua o loop mesmo com essa condição        
        }
        if (tabuleiro[linha][coluna] != 0) { //se a posição que a pessoa quer colocar de entrada for diferente 0
            printf("Jogada inválida! Posição já ocupada.\n"); // mostra que a posição já é ocupada
            continue;//continua loop mesmo com essa condição
        }
        if (verificar_jogada(linha, coluna, palpite)) { //se a jogada for verificada
            tabuleiro[linha][coluna] = palpite; //vai ser colocada no tabuleiro
            printf("Jogada Aceita!\n"); //mostra que a jogada foi aceita
            if (verifica_vitoria()) { //se o verificar vitória for verdadeiro
                mostrar_tabuleiro(); //
                printf("\nParabéns! Você ganhou!\n"); //mostra escrito a vitória
                break; //quebra o loop caso vitória
            }
        } else { //se não for essas condições
            printf("Jogada inválida! Número já existe na linha, coluna ou quadrante.\n"); //mostra que já existe esse número
        }
    }
    system("pause"); //para não fechar o exe no vscode
    return 0;
}

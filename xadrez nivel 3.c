
#include <stdio.h>

// Função recursiva para o movimento da Torre
void mover_torre(int casas)
{
    if (casas <= 0)
    {
        return; // Condição de parada
    }
    printf("Direita\n");
    mover_torre(casas - 1); // Chamada recursiva com uma casa a menos
}

// Função recursiva para o movimento da Rainha
void mover_rainha(int casas)
{
    if (casas <= 0)
    {
        return; // Condição de parada
    }
    printf("Esquerda\n");
    mover_rainha(casas - 1); // Chamada recursiva com uma casa a menos
}

// Função recursiva para movimento do Bispo com loops aninhados
void mover_bispo(int casas_vertical, int casas_horizontal)
{
    if (casas_vertical <= 0)
    {
        return; // Condição de parada
    }

    // Loop externo para cada casa vertical
    for (int i = 0; i < casas_vertical; i++)
    {
        // Loop interno para cada casa horizontal
        for (int j = 0; j < casas_horizontal; j++)
        {
            printf("Cima, Direita\n");
        }
    }
    mover_bispo(casas_vertical - 1, casas_horizontal); // Chamada recursiva
}

// Função para o movimento do Cavalo usando loops aninhados
void mover_cavalo()
{
    for (int i = 0; i < 2; i++)
    { // Para cima
        for (int j = 0; j < 1; j++)
        { // Para a direita
            if (i == 2 && j == 1)
            {
                break; // Condição para parar, caso atinja a posição
            }
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}

int main()
{
    // Definindo o número de casas para cada peça
    const int casas_torre = 5;
    const int casas_bispo_vertical = 5;
    const int casas_bispo_horizontal = 5;
    const int casas_rainha = 8;

    // Movimentação da Torre
    printf("Movimento da Torre:\n");
    mover_torre(casas_torre);

    // Movimentação do Bispo
    printf("\nMovimento do Bispo:\n");
    mover_bispo(casas_bispo_vertical, casas_bispo_horizontal);

    // Movimentação da Rainha
    printf("\nMovimento da Rainha:\n");
    mover_rainha(casas_rainha);

    // Movimentação do Cavalo
    printf("\nMovimento do Cavalo:\n");
    mover_cavalo();

    return 0;
}

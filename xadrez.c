#include <stdio.h>

//recursivo da torre
void movesetTorre(int n)
{
    if (n >= 1)
    {
        printf("Torre moveu-se para a direita!\n");
        movesetTorre(n - 1);
    }
}

//recursivo da bispo
void movesetBispo(int nBispo)
{
    for (int i = 1; i <= nBispo; i++)
    {
        for (int j = 1; j < 2; j++)
        {
            printf("Bispo moveu-se para cima!\n");
        }
        printf("Bispo moveu-se para direita!\n");
    }
}

//recursivo da rainha
void movesetRainha(int nRainha)
{
    if (nRainha >= 1)
    {
        printf("Rainha moveu-se para a esquerda!\n");
        movesetRainha(nRainha - 1);
    }
}

// Desafio de Xadrez - MateCheck
int main()
{
    //declaracao de variaveis
    int torre = 5, bispo = 5, rainha = 8, cavaloX, cavaloY;

    //chamado das funções recursivas
    movesetTorre(torre);
    printf("\n");

    movesetBispo(bispo);
    printf("\n");

    movesetRainha(rainha);
    printf("\n");

    //loop aninhado com multiplas variaveis para o cavalo
    for (cavaloY = 0; cavaloY < 1 ; cavaloY++)
    {
        for (cavaloX = 0; cavaloX < 2; cavaloX++)
        {
            printf("Cavalo andou: cima \n");
        }
        printf("Cavalo andou: direita \n");
    }

    return 0;
}

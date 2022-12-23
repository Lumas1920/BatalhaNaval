#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
void logo()
{
    system("color 3");
    printf("\n\n\n\n\n\n");
    printf("\t\t\t\t     ________   ________  ___      ___ ________  ___            \n");
    printf("\t\t\t\t    |\\   ___  \\|\\   __  \\|\\  \\    /  /|\\   __  \\|\\  \           \n");
    printf("\t\t\t\t    \\ \\  \\\\ \\  \\ \\  \\|\\  \\ \\  \\  /  / | \\  \\|\\  \\ \\  \\          \n");
    printf("\t\t\t\t     \\ \\  \\\\ \\  \\ \\   __  \\ \\  \\/  / / \\ \\   __  \\ \\  \\         \n");
    printf("\t\t\t\t      \\ \\  \\\\ \\  \\ \\  \\ \\  \\ \\    / /   \\ \\  \\ \\  \\ \\  \\____    \n");
    printf("\t\t\t\t       \\ \\__\\\\ \\__\\ \\__\\ \\__\\ \\__/ /     \\ \\__\\ \\__\\ \\_______\\  \n");
    printf("\t\t\t\t        \\|__| \\|__|\\|__|\\|__|\\|__|/       \\|__|\\|__|\\|_______|  \n");
    printf("\t\t\t\t  \n");
    printf("\t\t\t\t\t\t\t    Carregando.... \n");
    Sleep(3000);
    system("cls");
    system("color 7");
}

void Dev()
{
    printf("\n\n\t\t+--------------------------------+\n");
    printf("\t\t|      Desenvolvidor por:        |\n");
    printf("\t\t+--------------------------------+\n");
    Sleep(1000);
    printf("\t\t|      Luma Fernanda de Sousa    |\n");
    Sleep(1000);
    printf("\t\t|      Fabio Eloy Passos         |\n");
    Sleep(1000);
    printf("\t\t+--------------------------------+\n");

}
int main()
{
    logo();
    int Tabuleiro[8][8]= {0}, lin, col, qtdT=10,acerto=0, L,C,b=0;
    //Imprimindo o tabuleiro
    printf(" 0   1   2   3   4   5   6   7\n");
    for(int i=0; i<8; i++)
    {
        for(int j= 0; j<8; j++)
        {
            printf("[ ] ");
        }
        printf("%d\n",i);
    }
    for(int i=0; i<5; i++)
    {
        printf("\n\n Digite a %d posicao do navio\n ", i+1);
        printf("Linha: ");
        scanf("%d", &lin);
        printf(" Coluna: ");
        scanf("%d", &col);
        Tabuleiro[lin][col]=1;
    }
    printf("\n");
    for(int i=0; i<8; i++)
    {
        for(int j= 0; j<8; j++)
        {
            printf("[ %d ] ",Tabuleiro[i][j]);
        }
        printf("%d\n",i);
    }

    Sleep(4000);
    system("cls");
    printf("\n------- Encontre os Navios -------\n");
    do
    {
        b++;

        printf("\n\n+---------------------------------------+\n");
        printf("  Quantidade de tentativas restantes: %d \n", qtdT);
        printf("+---------------------------------------+\n");
        printf("\n\n Digite a %d tentativa\n ",b);


        printf("Linha: ");
        scanf("%d", &L);
        printf(" Coluna: ");
        scanf("%d", &C);
        qtdT--;

        if(Tabuleiro[L][C]==1)
        {
            acerto+=1;
            printf("\n       Voce acertouuuuu!!!!!       \n");
            if(acerto==5)
            {
                printf("\nVoce achou todos os navios!");
                break;
            }
        }
        else
        {
            printf("\n         voce errou! Losserr");
        }

    }
    while(qtdT!=0);
    printf("\n\nQuantidade de navios encontrados: %d",acerto);
    printf("\nQuantidade de tentativas restantes: %d\n\n", qtdT);
    Dev();



    return 0;
}

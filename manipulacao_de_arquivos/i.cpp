/*Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensões com sete linhas e sete colunas. 
Construir a matriz B de mesma dimensão, em que cada elemento seja o somatório de 1 até o valor armazenado na 
posição da matriz A, com exceção dos valores situados nos índices ímpares da diagonal principal 
(B[1,1], B[3,3], B[5,5] e B[7,7]), os quais devem ser o fatorial de cada elemento correspondente da matriz A. 
Apresentar ao final a matriz B.*/

#include <iostream>
using namespace std;
int main()
{
    int linhas = 7, colunas = 7, matriza[linhas][colunas], matrizb[linhas][colunas], f = 1;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Digite um valor para a " << i << "° linha da " << j << "° coluna " << endl;
            cin >> matriza[i][j];
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        i % 2 != 0;
        for (int j = 0; j < colunas; j++)
        {
            if (i == j)
            {
                for (int j = 1; j <= matriza[i][j]; j++)
                {
                    f *= j;
                    matrizb[i][j] = f;
                }
            }
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << " | " << ;
        }
    }
}
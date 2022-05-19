/*Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensões com cinco linhas e cinco colunas. 
Construir uma matriz B de mesma dimensão, em que cada elemento seja o dobro de cada elemento correspondente da 
matriz A, com exceção dos valores situados na diagonal principal (posições B[1,1], B[2,2], B[3,3], B[4,4] e B[5,5]),
os quais devem ser o triplo de cada elemento correspondente da matriz A. Apresentar ao final a matriz B.*/

#include <iostream>
using namespace std;
int main()
{
    int linhas = 5, colunas = 5, matriza[linhas][colunas], matrizb[linhas][colunas];

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
        for (int j = 0; j < colunas; j++)
        {
            if (i == j)
            {
                matrizb[i][j] = matriza[i][j] * 3;
            }
            else
            {
                matrizb[i][j] = matriza[i][j] * 2;
            }
        }
    }

    for (int i = 0; i < linhas; i++)
    {

        for (int j = 0; j < colunas; j++)
        {
            cout << " | b" << matrizb[i][j];
        }
        cout << endl;
    }
}
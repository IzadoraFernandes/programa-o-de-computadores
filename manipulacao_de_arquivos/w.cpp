/*Elaborar um programa que leia uma matriz A do tipo inteira de duas dimensões com cinco
linhas e cinco colunas. Construir uma matriz B de mesma dimensão, em que cada elemento
seja o dobro de cada elemento correspondente da matriz A, com exceção dos valores
situados na diagonal inversa (posições B[1,5], B[2,4], B[3,3], B[4,2] e B[5,1]), os quais devem
ser o triplo de cada elemento correspondente da matriz A. Apresentar ao final a matriz B.*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int linhas = 5, colunas = 5, matriza[linhas][colunas], matrizb[linhas][colunas], aux = 4;

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
            matrizb[i][j] = pow(matriza[i][j], 2);

            if (aux == j)
            {

                matrizb[i][j] = (matrizb[i][j] * 0) + pow(matriza[i][j], 3);
            }
        }
        aux--;
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << " | " << matrizb[i][j] ;
        }
        cout << endl;
    }
}

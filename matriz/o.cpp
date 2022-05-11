/*Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com oito linhas
e seis colunas. Construir a matriz B de uma dimensão que seja formada pela soma de cada
linha da matriz A. Ao final, apresentar o somatório dos elementos da matriz B.*/

#include <iostream>
using namespace std;
int main()
{

    int linhas = 2, colunas = 2, matriza[linhas][colunas], matrizb[0][colunas], contador = 0;

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
        matrizb[0][i] *= 0;
        for (int j = 0; j < colunas; j++)
        {
            matrizb[0][i] += matriza[i][j];
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        cout << " | " << matrizb[0][i];
    }
}
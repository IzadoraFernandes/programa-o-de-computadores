/*Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões com cinco linhas e três
colunas para valores inteiros. Construir uma matriz C de mesma dimensão, que seja formada pela soma dos 
elementos da matriz A com os elementos da matriz B. Apresentar os elementos da matriz C.*/

#include <iostream>
using namespace std;
int main()
{
    int linhas = 5, colunas = 3, matriza[linhas][colunas], matrizb[linhas][colunas], matrizc[linhas][colunas];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Digite um valor para linha " << i << "° da coluna " << j << "° matriz A: " << endl;
            cin >> matriza[i][j];
            cout << "Digite um valor para linha " << i << "° da coluna " << j << "° matriz B: " << endl;
            cin >> matrizb[i][j];
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matrizc[i][j]= matriza[i][j] + matrizb[i][j];
            cout << " | " <<matrizc[i][j];
        }
        cout << endl;
    }
}
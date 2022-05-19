/*Elaborar um programa que leia uma matriz A de duas dimensões com cinco linhas e quatro colunas. Construir 
uma matriz B de mesma dimensão, em que cada elemento seja o fatorial de cada elemento correspondente armazenado 
na matriz A. Apresentar ao final as matrizes A e B.*/

#include <iostream>
using namespace std;
int main()
{
    int linhas = 5, colunas = 4, matriz[linhas][colunas], matrizb[linhas][colunas], f = 1;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Digite um valor para o " << i << "° elemento da matriz A colunas " << j << endl;
            cin >> matriz[i][j];
        }

        for (int j = 1; j <= matriz[i][j]; j++)
        {
            f *= j;
            matrizb[i][j] = f;
        }
    }
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << " | " << matriz[i][j];
        }
        cout << endl;
        for (int j = 0; j < colunas; j++)
        {
            cout << " | " << matrizb[i][j];
        }
         cout << endl;
    }
}
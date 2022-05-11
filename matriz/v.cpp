/*Elaborar um programa que faça a leitura de duas matrizes A e B de duas dimensões com cinco linhas e cinco colunas. 
A matriz A deve ser formada por valores que não sejam divisíveis por 3, enquanto a matriz B deve ser formada por 
valores que não sejam divisíveis por 6. As entradas dos valores nas matrizes devem ser validadas pelo programa, e não pelo
usuário. Construir e apresentar uma matriz C de mesma dimensão e número de elementos que contenha a soma dos elementos das matrizes A e B.*/

#include <iostream>
using namespace std;
int main()
{
    int linhas = 5, colunas = 5, matriza[linhas][colunas], matrizb[linhas][colunas], matrizc[linhas][colunas], valora, valorb;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            do
            {
                cout << "Digite um valor para a " << i << "° linha da " << j << "° coluna da matriz A:" << endl;
                cin >> matriza[i][j];

            } while (matriza[i][j] % 3 == 0);

            do
            {
                cout << "Digite um valor para a " << i << "° linha da " << j << "° coluna da matriz B:" << endl;
                cin >> matrizb[i][j];

            } while (matrizb[i][j] % 6 == 0);

            matrizc[i][j] = (matrizc[i][j] * 0) + (matriza[i][j] + matrizb[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {

            cout << " | " << matrizc[i][j];
        }
        cout << endl;
    }
}
/*Elaborar um programa que leia duas matrizes A e B, cada uma de duas dimensões com
cinco linhas e seis colunas. A matriz A deve aceitar a entrada de valores pares, enquanto a
matriz B deve aceitar a entrada de valores ímpares. As entradas dos valores nas matrizes A
e B devem ser validadas pelo programa, e não pelo usuário. Construir a matriz C de mesma
dimensão, que seja formada pela soma dos elementos da matriz A com os elementos da
matriz B. Apresentar os elementos da matriz C.*/

#include <iostream>
using namespace std;
int main ()
{
 int linhas = 5, colunas = 5, matriza[linhas][colunas], matrizb[linhas][colunas];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {

            cout << "Digite um valor para MATRIZ A [" << i << "] [" << j << "] " << endl;
            cin >> matriza[i][j];
            cout << "Digite um valor para MATRIZ B [" << i << "] [" << j << "] " << endl;
            cin >> matrizb[i][j];
        }
    }














    
}
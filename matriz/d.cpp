/*Elaborar um programa que leia uma matriz A de uma dimensão com dez elementos inteiros. Construir uma 
matriz C de duas dimensões com três colunas, sendo a primeira coluna da matriz C formada pelos elementos 
da matriz A somados com 5, a segunda coluna formada pelo valor do cálculo da fatorial de cada elemento 
correspondente da matriz A e a terceira e última coluna pelos quadrados dos elementos correspondentes da matriz A.
Apresentar a matriz C.*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int linhas = 10, colunas = 3, matriza[linhas], matrizc[linhas][colunas];

    for (int i = 0; i < 10; i++)
    {
        cout << "Digite um valor para matriz A linha " << i << ":" << endl;
        cin >> matriza[i];
        matrizc[i][0] = matriza[i] + 5;
        matrizc[i][2] = matriza[i] * matriza[i];

        int f = 1;

        for (int j = 1; j <= matriza[i]; j++)
        {
            f *= j;
            matrizc[i][1] = f;
        }
    }
    for (int x = 0; x < linhas; x++)
    {
        for (int y = 0; y < colunas; y++)
        {

            cout << " | " << matrizc[x][y];
        }
        cout << endl;
    }
}


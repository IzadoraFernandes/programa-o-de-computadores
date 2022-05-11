/*Elaborar um programa que leia quatro matrizes A, B, C e D de uma dimensão com quatro
elementos. Construir uma matriz E de duas dimensões do tipo 4 × 4, sendo a primeira linha
formada pelo dobro dos valores dos elementos da matriz A, a segunda linha formada pelo
triplo dos valores dos elementos da matriz B, a terceira linha formada pelo quádruplo dos
valores dos elementos da matriz C e a quarta linha formada pelo fatorial dos valores dos
elementos da matriz D. Apresentar a matriz E.*/

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int linhas = 4, colunas = 1, matriza[linhas][0], matrizb[linhas][0], matrizc[linhas][0], matrizd[linhas][0], matrize[4][4], f = 1;

    for (int i = 0; i < linhas; i++)
    {

        for (int j = 0; j < colunas; j++)
        {
            cout << "Digite um valor para MATRIZ A [" << i << "] [" << j << "] " << endl;
            cin >> matriza[i][0];
            cout << "Digite um valor para MATRIZ B [" << i << "] [" << j << "] " << endl;
            cin >> matrizb[i][0];
            cout << "Digite um valor para MATRIZ C [" << i << "] [" << j << "] " << endl;
            cin >> matrizc[i][0];
            cout << "Digite um valor para MATRIZ D [" << i << "] [" << j << "] " << endl;
            cin >> matrizd[i][0];
        }
    }
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << " | " << pow(matriza[i][0], 2);
        }
    }
    cout << endl;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << " | " << pow(matrizb[i][0], 3);
        }
    }
    cout << endl;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << " | " << pow(matrizc[i][0], 4);
        }
    }
    cout << endl;

    for (int i = 1; i <= matrizd[i][0]; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            f *= i;
            matrizb[i][0] = f;
        }
    }
}
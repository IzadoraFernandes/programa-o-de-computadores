/*Elaborar um programa que leia uma matriz A de duas dimensões com seis linhas e cinco
colunas. Construir a matriz B de mesma dimensão, que deve ser formada do seguinte modo:
para cada elemento par da matriz A deve ser somado 5 e de cada elemento ímpar da matriz
A deve ser subtraído 4. Apresentar ao final as matrizes A e B.*/

#include <iostream>
using namespace std;
int main()
{
    int linhas = 6, colunas = 5, matriza[linhas][colunas];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Digite um valor para a " << linhas << "° linha da " << colunas << "° coluna " << endl;
            cin >> matriza[i][j];
        }
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (matriza[i][j] % 2 == 0)
            {
                cout << " | " << matriza[i][j] + 5;
            }
            
            if (matriza[i][j] % 2 != 0)
            {
                cout <<" | " << matriza[i][j] - 4;
            }
            
        }
      cout << endl; 
    }

} 
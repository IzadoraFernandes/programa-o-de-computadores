/*Elaborar um programa que leia uma matriz A de duas dimensões com sete linhas e sete
colunas. Ao final, apresentar o total de elementos pares existentes na matriz.*/

#include <iostream>
using namespace std;
int main()
{
    int linhas = 7, colunas = 7, matriza[linhas][colunas], contador = 0;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Digite um valor para a " << linhas << "° linha da " << colunas << "° coluna " << endl;
            cin >> matriza[linhas][colunas];
            if (matriza[linhas][colunas] % 2 == 0)
            {
                contador = contador + 1;
            }
        }
    }
    cout << " Existe " << contador << " números pares nesta matriz " << endl;
    
}
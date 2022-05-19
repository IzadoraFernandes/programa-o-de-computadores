/*Elaborar um programa que leia uma matriz A do tipo real de duas dimensões com cinco
linhas e cinco colunas. Apresentar o somatório dos elementos situados nas posições de linha
e coluna ímpares da diagonal principal (A[1,1], A[3,3], A[5,5]) da referida matriz.*/

#include <iostream>
using namespace std;
int main ()
{
int linhas =5, colunas=5, matriza[linhas][colunas], soma=0;

for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < colunas; j++)
    {
        cout << "Digite um valor para a " << i << "° linha da " << j<< "° coluna "<<endl;
        cin >> matriza[i][j];

    }
}
for (int i = 0; i < linhas; i++)
{
    
    for (int j = 0; j < colunas; j++)
    {
        if (i==j)
        {
            i && j % 2 != 0;
            soma += matriza[i][j];
        }

    }
}
cout << " | " <<soma <<endl;


    
}
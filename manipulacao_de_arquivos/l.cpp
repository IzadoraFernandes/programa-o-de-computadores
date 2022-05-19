/*Elaborar um programa que leia uma matriz A de duas dimensões com 15 linhas e 15
colunas. Apresentar o somatório dos elementos pares situados na diagonal principal da referida matriz.*/

#include <iostream>
using namespace std;
int main ()
{
int linhas =15, colunas=15, matriza[linhas][colunas], soma=0;

for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < colunas; j++)
    {
        cout << "Digite um valor para a " << i << "° linha da " << j << "° coluna "<<endl;
        cin >> matriza[i][j];

    }
}
for (int i = 0; i < linhas; i++)
{
    
    for (int j = 0; j < colunas; j++)
    {
        if (i==j)
        {
            i && j % 2 == 0;
            soma += matriza[i][j];


        }

    }
}

cout << " | " <<soma <<endl;



    
}
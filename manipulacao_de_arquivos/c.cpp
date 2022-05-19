/*Elaborar um programa que leia 20 elementos para uma matriz qualquer, considerando que essa matriz tenha 
o tamanho de quatro linhas por cinco colunas. Em, seguida, apresentar a matriz.*/
#include <iostream>
using namespace std;
int main ()
{
int linhas=4, colunas=5, matriz[linhas][colunas];

for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < colunas; j++)
    {
        cout << " Digite um valor númerico: " <<endl;
        cin >> matriz[i][j];
    }
}

for (int i = 0; i < linhas; i++)
{
    for (int j = 0; j < colunas; j++)
    {
        
        cout << " | " <<matriz[i][j];
    }
    cout <<endl;
}











    
}
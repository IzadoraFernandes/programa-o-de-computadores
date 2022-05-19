/*Elaborar um programa que leia uma matriz A de duas dimensões com quatro linhas e cinco colunas, 
armazenando nessa matriz os valores das temperaturas em graus Celsius. Construir a matriz B de mesma dimensão, 
em que cada elemento seja o valor da temperatura em graus Fahrenheit de cada elemento correspondente da matriz A. 
Apresentar ao final as matrizes A e B.*/

#include <iostream>
using namespace std;
int main()
{
    int linhas = 4, colunas = 5, matriz[linhas][colunas];

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Digite a " << linhas << "° temperatura em Graus CELSIUS da " << colunas << "° coluna" << endl;
            cin >> matriz[i][j];
        }
    }
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << " | " << matriz[i][j] << " CELSIUS ";
        }
        cout << endl;
        for (int j = 0; j < colunas; j++)
        {
            cout << " | " << ((matriz[i][j] * 9) / 5) + 32 << " FAHRENHEIT ";
        }
        cout << endl;
    }
}
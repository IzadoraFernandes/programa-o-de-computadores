/*Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão para 12 elementos reais. 
Construir uma matriz C de duas dimensões, sendo a primeira coluna da matriz C formada pelos elementos da 
matriz A multiplicados por 2 e a segunda coluna formada pelos elementos da matriz B subtraídos de 5. 
Apresentar separadamente as matrizes.*/

#include <iostream>
using namespace std;
int main()
{
    int linhas = 12, colunas = 2, matriza[linhas], matrizb[linhas];

    for (int i = 0; i < linhas; i++)
    {
        cout << "Digite um valor para o " << linhas << "°elemento da matriz A :" << endl;
        cin >> matriza[i];
        cout << "Digite um valor para  o " << linhas << "°elemento da matriz B :" << endl;
        cin >> matrizb[i];
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << " | " << matriza[i] * 2;
            cout << " | " << matrizb[i] - 5 << endl;
        }
    }
}
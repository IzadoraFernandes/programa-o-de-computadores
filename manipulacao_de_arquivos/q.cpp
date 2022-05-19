/*Elaborar um programa que faça a leitura de 20 valores inteiros em uma matriz A de duas
dimensões com quatro linhas e cinco colunas. Construir a matriz B de uma dimensão para
quatro elementos que seja formada pelo somatório dos elementos correspondentes de cada
linha da matriz A. Construir também a matriz C de uma dimensão para cinco elementos que
seja formada pelo somatório dos elementos correspondentes de cada coluna da matriz A. Ao
final, o programa deve apresentar o somatório dos elementos da matriz B com o somatório
dos elementos da matriz C.*/

#include <iostream>
using namespace std;
int main()
{
    int linhas = 4, colunas = 5, matriza[linhas][colunas], matrizb[linhas][0], matrizc[5][0], somalinha;

    for (int i = 0; i < linhas; i++)
    {
        somalinha = 0;
        for (int j = 0; j < colunas; j++)
        {
            cout << "Digite um valor para a " << i << "° linha da " << j << "° coluna " << endl;
            cin >> matriza[i][j];
            somalinha += matriza[i][j];
        }
        matrizb[i][0] = somalinha;
    }
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << " | a" << matriza[i][j];
        }
        cout << endl;
    }
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << " | b" << matrizb[i][0];
        }
        cout << endl;
    }
}

/*Elaborar um programa que leia uma matriz A de duas dimensões com dez linhas e sete
colunas. Ao final, apresentar o total de elementos pares e ímpares existentes na matriz.
Apresentar também o percentual de elementos pares e ímpares em relação ao total de
elementos da matriz. Supondo a existência de 20 elementos pares e 50 elementos ímpares,
haveria 28,6% de elementos pares e 71,4% de elementos ímpares.*/

#include <iostream>
using namespace std;
int main()
{
    int linhas = 10, colunas = 7, matriz[linhas][colunas], contadorpar = 0, contadorimpar = 0;
    float porcentagempar = 0, porcentagemimpar = 0;

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            cout << "Digite um valor para a " << i << "° linha da " << j << "° coluna " << endl;
            cin >> matriz[i][j];

            if (matriz[i][j] % 2 == 0)
            {
                contadorpar += 1;
            }
            if (matriz[i][j] % 2 !=0 )
            {
                contadorimpar += 1;
            }
        }
    }

    porcentagempar = (contadorpar * 100) / 70;
    porcentagemimpar = (contadorimpar * 100) / 70;

    cout << " | Quantidade de elementos PARES = " << contadorpar << " Representa " << porcentagempar << "%" << endl;
    cout << " | Quantidade de elementos IMPARES = " << contadorimpar << " Representa " << porcentagemimpar << "%" << endl;
}
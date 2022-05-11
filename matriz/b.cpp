/*Elaborar um programa que leia duas matrizes A e B, cada uma com uma dimensão para sete elementos inteiros. 
Construir uma matriz C de duas dimensões, cuja primeira coluna deve ser formada pelos elementos da matriz A 
e a segunda coluna pelos elementos da matriz B. Apresentar a matriz C.*/
#include <iostream>
using namespace std;
int main ()
{
int linhas =7, colunas=2, matriza[linhas], matrizb[linhas];

for (int i = 0; i < linhas; i++)
{
    cout << "Digite um valor para matriz A: "<<endl;
    cin >> matriza[i];
    cout << "Digite um valor para matriz B: "<<endl;
    cin >> matrizb[i];
}

for (int i = 0; i < linhas; i++)
{
    for (int c=0; c<1; c++)
{
    cout << " | " <<matriza[i] ;
    cout << " | " <<matrizb[i]<< endl;
}

}







    
}
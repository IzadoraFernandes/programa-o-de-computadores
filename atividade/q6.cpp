//Faça um programa que leia 5 números e informe a soma e a média dos números.
#include <iostream>
using namespace std;
 
int main ()
{
    float n1, n2, n3, n4, n5, media, result;
    
     cout <<"informe o primeiro numero:" <<endl;
     cin >> n1;
     cout <<"informe o segundo numero:" <<endl;
     cin >> n2;
      cout <<"informe o terceiro numero:" <<endl;
     cin >> n3;
      cout <<"informe o quarto numero:" <<endl;
     cin >> n4;
      cout <<"informe o quinto numero:" <<endl;
     cin >> n5;
     
     
     media = n1 + n2 + n3 + n4 + n5;
     result= media/5;
     
     cout<< "soma dos numeros =" <<media <<endl;
     cout << "a media da soma dos 5 numeros=" <<result <<endl;
     

      return 0;
}
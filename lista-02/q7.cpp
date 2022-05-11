//7.Escreva um algoritmo para ler 2 valores e se o segundo valor informado for ZERO, deve ser lido um novo valor.
#include <iostream>

using namespace std;


  int main()
{ 
  int x1=0, x2=0;
  float resultado;
  
  cout <<"valor do primeiro número: " << endl;
  cin >>x1;
  cout << "digite o segundo número: " <<endl;
  cin >> x2;
  
  if (x2==0)
  {
      cout<< x2;
      for (int i=0; i<99999; i++)
      {
          cout << "valor do segundo número novamente: " <<endl;
          cin>> x2;
          if (x2 !=0)
          break;
      }
  }
  
  resultado = x1 / x2;
  cout<< "resultado da divisão: " << resultado <<endl;
    
   return 0;
}

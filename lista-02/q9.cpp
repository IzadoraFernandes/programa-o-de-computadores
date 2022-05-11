//9.Acrescentar uma mensagem de 'VALOR INVÁLIDO' no exercício 1 caso o segundo valor informado seja ZERO.

#include <iostream>

using namespace std;

 

  int main()
{
  int x1=0, x2=0;
  float resultado;

  cout <<"valor do primeiro número: " <<endl;
  cin >>x1;
  cout << "digite o segundo número: " <<endl;
  cin >> x2;

  if (x2==0)
  {
      cout<< x2 <<endl;
      for (int i=0; i<99999; i++)
      {
          cout << "VALOR INVALIDO" <<endl;
          cout << "informe um novo valor:  " <<endl;
          cin>> x2;
          if (x2 !=0)
          break;
      }
  }

  resultado = x1 / x2;
  cout<< "resultado da divisão: " << resultado <<endl;

   return 0;
}
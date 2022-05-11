//18. Escreva um algoritmo para ler 10 números. Todos os números lidos com valor inferior a 40 devem
//ser somados. Escreva o valor final da soma efetuada.
#include <iostream>

using namespace std;

int main()
{
    int n1, v, soma=0;
    for (v=1; v <=10; v++){
    
     cout<< "digite um número: " <<endl;
    cin>> n1;
       
      if (n1 < 40)
      {
          soma = n1 + soma;
      }  
    }
     
    
    cout << "o resultado da soma dos números apresentado é: " <<soma <<endl;
  return  0;  
}
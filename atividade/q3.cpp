//Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual operação ele deseja
//realizar. O resultado da operação deve ser acompanhado de uma frase que diga se o número é:
//1. par ou ímpar;
//2. positivo ou negativo;
//3. inteiro ou decimal.
#include <iostream>

using namespace std;

int main()
{
  float n1, n2, soma, divisao, subtracao, multiplicacao;
  cout << "digite um número: " <<endl;
  cin >> n1;
  cout << "digite outro número: " <<endl;
  cin >> n2;
  
  cout<< "qual a operação matematica que deseja realizar? (obs: soma, subtracao, divisao ou multiplicacao)" <<endl;
   cin >> soma; subtracao, divisao, multiplicacao;
   
   while (soma){
       soma= n1 + n2;
       
       cout << "resultado da sua soma é: "<< soma <<endl;
       break;
   }
  
  if (subtracao){
      subtracao= n1 - n2;
      cout << "resultado da sua subtracao é: "<< subtracao <<endl;
      
  }
      
  if (multiplicacao){
      multiplicacao = n1 * n2;
      cout << "o resultado da multiplicacao e: " << multiplicacao <<endl;
  }
  if (divisao){
      divisao= n1 / n2;
      cout<< "o resultado da sua divisao e: " <<divisao <<endl;
  }
    return 0;
}

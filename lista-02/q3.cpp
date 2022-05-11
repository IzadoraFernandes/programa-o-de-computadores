//3. Faça um algoritmo que leia 10 números e retorne a soma e a média desses valores.

#include <iostream>

using namespace std;

int main()
{ 
  int valor;
  int contador= 0;
  int soma=0;
   while (contador <10)
   {
       cout << "digite um valor: " <<endl;
       cin>> valor;
       contador= contador + 1;
       soma = soma + valor/10; 
       
   }
   cout << "soma total é: "<< soma <<endl;
   return 0;
}
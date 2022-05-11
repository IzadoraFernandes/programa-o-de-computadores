//4. Faça um algoritmo que calcule a soma dos números ímpares entre 1 e 100.

#include <iostream>

using namespace std;

int main()
{ 
  int contador=0;
  int soma=0;
   while (contador <100)
   {
       
       contador= contador + 1;
       if  (contador%2!=0) {
           cout << " é impar : " << contador <<endl;
            soma= contador+ soma;

       }
   
   }
    cout << "resultado da soma de todos os números ímpares é: " <<soma <<endl;
   
   
   return 0;
}
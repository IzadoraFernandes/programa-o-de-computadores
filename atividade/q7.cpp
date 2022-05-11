// Faça um algoritmo que calcule a soma dos números ímpares entre 1 ate o numero que o usuario informar.

#include <iostream>

using namespace std;

int main()
{ 
  int contador=0;
  int soma=0;
  int num=0;
  cout<< "digite um numero:" <<endl;
  cin>>num;
   while (contador <num)
   {
       
       contador= contador + 1;
       if  (contador%2!=0) {
           cout << " é impar : " << contador <<endl;
            

       }
   
   
    
   
   }
   return 0;
}
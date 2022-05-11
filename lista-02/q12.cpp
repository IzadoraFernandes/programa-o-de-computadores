//12.Some todos os números pares de 0 a 1000.

#include <iostream>

using namespace std;

int main()
{
   int contador=0;
   int soma=0;
   
   while (contador <1000)
   { 
       contador= contador +1;
       if (contador %2==0)
       {
        soma= contador + soma; 
       }
   
   }
   cout<< "resultado: "  <<soma <<endl; 
   
  
    return 0;
}
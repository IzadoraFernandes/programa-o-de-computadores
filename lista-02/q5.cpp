//5.Faça um algoritmo que calcule a soma dos números primos entre 1 e 50.
#include <iostream>

using namespace std;
int main()
{
 int numero, controle=0, soma=0;
 
 for ( int numero=1; numero <=50; numero++)
 {
     controle=0;
     for (int i=2; i < numero; i ++ )
     {
         if (numero%i==0)
         { 
         controle=1;
         break;
             
         }
     }
 
    if (controle==0 && numero !=1) // é primo
    {
        soma= soma + numero;
    }
 }
    cout << "A soma foi: " <<soma;
    return 0;
}

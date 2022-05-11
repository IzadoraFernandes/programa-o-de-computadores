//2. Fazer um algoritmo que some todos os números de 1 a 900.

#include <iostream>

using namespace std;

int main()
{
    int soma = 0, contador = 1;
   
    while (contador  <= 900)
  
    {
        
        soma  += contador++;
        cout << soma <<endl;
    
    }
    
    cout<< "o resultado da operação é: " << soma <<endl;
    return  0;
}
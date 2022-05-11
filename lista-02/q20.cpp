//20. Faça um algoritmo que calcule e escreva a média aritmética dos números inteiros entre 15 (inclusive) e 100 (inclusive).
#include <iostream>

using namespace std;

int main()
{
    int soma=0;
    float result;
  
for (int i=15; i<=100; i++){
    soma= soma + i;
    
}
result = soma / 86;
cout << "resultado da media aritmŕtica entre os números de 15 a 100 é: " <<result <<endl;


return 0;
}
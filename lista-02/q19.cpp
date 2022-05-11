//19. Ler 2 valores, calcular e escrever a soma dos inteiros existentes entre os 2 valores lidos (incluindo
//os valores lidos na soma). Considere que o segundo valor lido será sempre maior que o primeiro valor lido.
#include <iostream>

using namespace std;

int main()
{
    int v1, v2, soma;
   cout << "digite um valor: " <<endl;
   cin >> v1;
   cout << "digite outro valor: " <<endl;
   cin >> v2;
 
 for (int i=v1; i<=v2; i++ ){
     soma += i;
 }

cout << "o resultado dos valores lidos são de: " << soma <<endl;

return 0;
}

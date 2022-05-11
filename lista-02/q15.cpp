//15. Ler um valor N e imprimir todos os valores inteiros entre 1 (inclusive) e N (inclusive). Considere
//que o N será sempre maior que ZERO.
#include <iostream>

using namespace std;

int main(){
    int n;

   cout << "digite um valor maior que 0: " <<endl;
   cin>> n;

for (int i=1; i<=n; i++)
{
    cout << "- " << i <<endl;
}


return 0;
}
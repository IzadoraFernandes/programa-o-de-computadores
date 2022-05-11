//16-Modifique o exercício anterior para aceitar somente valores maiores que 0 para N. Caso o valor
//informado (para N) não seja maior que 0, deverá ser lido um novo valor para N.
#include <iostream>

using namespace std;

int main(){
    int n;

  do
  { cout << "digite um valor maior que 0: " <<endl;
   cin>> n;
   
   } while (n <= 0);
      
  

for (int i=1; i<=n; i++)
{
    cout << "- " << i <<endl;
}


return 0;
}
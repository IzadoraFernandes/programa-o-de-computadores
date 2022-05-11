//1. Faça um Programa que verifique se uma letra digitada é vogal ou consoante.
#include <iostream>
using namespace std;
 
int main ()
{
    char v, lt;
    int letra;
    
    cout<< "digite uma letra: " <<endl;
    cin >>letra;
    
    lt = (v=='a' || v=='e'|| v=='i' || v=='0' || v=='u'); 
    
    if (letra==v){
        cout << "é uma vogal:" <<v <<endl;
    }
    
    else (letra !=v);
    {
        cout<< " a letra informada não é uma vogal." <<endl;
    }
    
      return 0;
}
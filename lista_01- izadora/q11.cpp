
#include <iostream>

using namespace std ;

int main()

{
    int fabrica;
    int imposto;
    int distribuidor;
    int resul1;
    int resul2;
    int total;
    int final;
  
    cout<< "valor de fabrica" <<endl;
    cin >> fabrica;
    
    
    resul1 = (fabrica * 28) /100;
    resul2 = (fabrica * 45) /100;
    total = resul1 + resul2;
    final = total + fabrica;
    
    
   cout << "o custo de fabrica + imposto + renda:" <<total <<endl; 
    cout <<"total do carro de:=" << total + final <<endl;
    
    return 0;
}
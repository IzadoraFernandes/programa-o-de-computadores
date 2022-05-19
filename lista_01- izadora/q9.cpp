
#include <iostream>

using namespace std ;

int main()

{
    int nulo;
    int branco;
    int valido;
    int total;
    float porcentagem1;
    float porcentagem2;
    float porcentagem3;
    
  
    cout<< "informe o total de votos nulo" <<endl;
    cin >> nulo;
    cout<< "informe o total de votos branco" <<endl;
    cin >> branco;
    cout<< "informe o total de votos valido" <<endl;
    cin >> valido;
    
    total = nulo + branco + valido ;
    porcentagem1 = (nulo*100) / total;
    porcentagem2 = (branco*100) / total;
    porcentagem3 = (valido*100) / total;
    
     cout << "porcentagem de votos nulo é =" <<porcentagem1 <<endl; 
     cout << "porcentagem de votos branco é=" <<porcentagem2 <<endl;
     cout << "porcentagem de votos validos é=" <<porcentagem3 <<endl;
    cout << "total de votantes=" <<total <<endl;
    return 0;
}
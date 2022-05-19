
#include <iostream>

using namespace std ;

int main()

{
    int salario;
    int reajuste;
    int total;
    
  
    cout<< "informe o seu salário" <<endl;
    cin >> salario;
    cout<< "digite a porcentagem do seu reajuste salarial" <<endl;
    cin >> reajuste;
    
    
    total = (salario*reajuste) /100 ;
    
    
    
    cout << "total do reajuste salarial será de=" <<total <<endl;
    cout <<"o seu novo salario será de=" << total + salario <<endl;
    
    return 0;
}
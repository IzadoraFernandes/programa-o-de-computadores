#include <iostream>

using namespace std ;

int main()

{
    //mudar para float
    int salario;
    int carros;
    int vendas;
    int salariofixo;
    int comissao;
    int resul1;
    int resul2;
    
    cout<< "informe o numero de carros vendido:" <<endl;
    cin >> carros;
    cout<< "informe  o valor total de suas venda:" <<endl;
    cin >> vendas;
    cout<< "informe o salario fixo:" <<endl;
    cin >> salariofixo;
    cout << "informe o valor da comissão por cada carro vendido:" <<endl;
    cin>> comissao;
    
    resul1 = salariofixo + (comissao * carros); 
    resul2 = vendas * 0.05 ;
    salario = resul1 + resul2;

    cout << "salario fixo mais valor pelas vendas realizadas:" <<resul1 <<endl; 
    cout <<"porcentagem pelas vendas:=" << resul2 <<endl;
    cout <<"seu valor final de salario é de:" << salario <<endl;
    
    return 0;
}



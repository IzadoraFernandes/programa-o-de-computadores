
#include <iostream>

using namespace std ;

int main()

{
    int comprimento;
    int largura;
    int altura;
    int volume;
 
    
    cout << "descobrindo o vslor de uma caixa retangular:" <<endl;
    cout << "informe o comprimento da caixa retangular:" <<endl;
    cin >> comprimento;
    cout << "informe a largura da caixa retangular" <<endl;
    cin>> largura;
    cout<< "informe a altura da caixa retangular" <<endl;
    cin>> altura;

    
    
    volume = comprimento * largura * altura;
    

    
    cout << "o volume da caixa retangular é:" <<volume <<endl;

    return 0;
}

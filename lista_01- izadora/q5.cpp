
#include <iostream>

using namespace std ;

int main()

{
    int diametro;
    int raio;
    int volume;
 
    
    cout << "calculando o volume de uma esfera:" <<endl;
    cout << "informe o diâmetro:" <<endl;
    cin >> diametro;
    
    raio = diametro /2;
    int potenciaRaio = raio * raio * raio
    volume = (4 * 3.14159 * potenciaRaio) / 3;
    
    
    
    cout << "o volume da esfera é:" << volume <<endl;

    return 0;
}

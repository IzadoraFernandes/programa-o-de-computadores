#include<iostream>
using namespace std;

int main()
{
    float distancia, tempo, velocidade;

    cout << "Distancia em km: " << endl;
    cin >> distancia;

    cout << "tempo em minutos: " << endl;
    cin >> tempo;

    velocidade = (distancia * 1000) / (tempo*60);

    cout << "A velocidade em m/s e: " << velocidade << endl;

    
    return 0;
}
#include <iostream>
#include <math.h>

using namespace std;

int main()

{
    int x1;
    int x2;
    int y1;
    int y2;
    float distancia;
   
    
    cout << "informe as cordenadas para o primeiro ponto" <<endl;
    cin>> x1;
    cin>> y1;
    cout<< "informe as coordenadas para o segundo ponto" <<endl;
    cin>> x2;
    cin>> y2;

    distancia= sqrt ( pow (x2-x1,2) + pow (y2-y1,2) );

    cout << "o resultado da distancia informada entre os dois pontos são:" << distancia <<endl;
    return 0;
}
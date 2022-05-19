#include <iostream>
#include <math.h>
#define PI 3.14159

using namespace std;

int main()

{
    float graus, converter;
   
    cout << "convertendo graus em radianos." << endl;
    cout << "insira o número em graus para converter em radianos:" <<endl;
    cin >> graus;
    
    converter = (graus * PI / 180);

    cout << "resultado da sua conversão de graus para radianos é de:" << converter << "rad" <<endl;
    
    return 0;
}
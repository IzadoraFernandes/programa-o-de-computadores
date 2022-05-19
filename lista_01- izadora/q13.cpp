#include <iostream>

using namespace std ;

int main()

{
    int nota1;
    int nota2;
    int nota3;
    int media;

    cout<< "informe a primeira nota obtida:" <<endl;
    cin >> nota1;
    cout << "informe a segunda nota obtida:" <<endl;
    cin >> nota2;
    cout<< "informe a terceira nota obtida:" <<endl;
    cin >> nota3;

    media = ((nota1*2) + (nota2*3) + (nota3*5)) /10;

    cout<< "a media geral e final deste aluno é:" << media <<endl;

    
    return 0;
}
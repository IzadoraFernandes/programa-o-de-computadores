
#include <iostream>

using namespace std ;

int main()

{
    int dia;
    int mes;
    int ano;
    int multi;
 
    
    cout << "informe sue dia de nascimento" <<endl;
    cin >> dia;
    cout<< "informe o mes do seu nascimento" <<endl;
    cin >> mes;
    cout<< "informe o ano do seu nascimento" <<endl;
    cin >> ano;
    
    multi = (mes * 30) + (ano * 365) + dia ;
    
     cout << "total de dias é =" <<multi <<endl;

    return 0;
}

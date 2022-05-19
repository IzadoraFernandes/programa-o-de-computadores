
#include <iostream>

using namespace std ;

int main()

{
    int celsius;
    int fahrenheit;
    
    
 
    
    cout << "convertendo graus fahrenheit em celsius:" <<endl;
    cout << "digite o grau fahrenheit:" <<endl;
    cin >> fahrenheit;
    
    
   int sub =  fahrenheit - 32;
    int multi = (sub * 5)/9;
    
    cout << "a conversão de fahrenheit para celsius é:" <<multi <<endl;

    return 0;
}

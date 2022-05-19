
#include <iostream>

using namespace std ;

int main()

{
    int celsius;
    int fahrenheit;
 
    
    cout << "convertendo graus celsius em fahrenheit:" <<endl;
    cout << "digite o grau celsius:" <<endl;
    cin >> celsius;
    
    
   int multi = celsius * 9/5 + 32;
    
    cout << "a conversão de celsius para fahrenheit é:" <<multi <<endl;

    return 0;
}

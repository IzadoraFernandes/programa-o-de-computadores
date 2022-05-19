#include <iostream>

using namespace std;

int main()

{
    int num1;
    int num2;
    int soma;
    int sub;
    int multi;
    int divi;

    cout << "resolvendo operações basicas de matemática" <<endl;
    cout << "digite o primeiro valor" <<endl;
    cin >> num1;
    cout << "digite o segundo numero" << endl;
    cin >> num2;
    
    soma = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;

    cout << "a soma dos números é: " << soma << endl;
    cout << "a subitraçao da operaçao é: " << sub << endl;
    cout << "a multiplicaçao o valor é: " << multi << endl;
    if(num2 == 0)
    {
        cout << "Divisao zero" << endl;
        return 0;
    }
    divi = num1 / num2;
    cout << "a divisao é: " << divi << endl;
    
    return 0;
//21. Uma loja está levantando o valor total de todas as mercadorias em estoque. Escreva um algoritmo que permita a entrada 
//das seguintes informações: a) o número total de mercadorias no estoque; b) o valor de cada mercadoria. 
//Ao final imprimir o valor total em estoque e a média de valor das mercadorias.
#include <iostream>

using namespace std;

int main() {
    float q1, v1, media, soma=0;
    int i;
    
   cout << "qual a quantidade de mercadorias tem em seu estoque? " <<endl;
   cin >> q1;
   
     for (i=0; i < q1; i++ ){
       cout << "qual o valor da mercadoria? " <<endl;
       cin >> v1;
       soma = soma + v1; 
     }
       media = soma / q1;
     
cout << "valor total de  mercadorias em estoque é de : " << soma <<endl;
cout << "a media dos valores das mercadorias é de : " <<media <<endl;

    return 0;
}

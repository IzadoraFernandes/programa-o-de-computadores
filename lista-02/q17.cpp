//17. Ler 10 valores e escrever quantos desses valores lidos estão no intervalo [10,20] (incluindo os
//valores 10 e 20 no intervalo) e quantos deles estão fora deste intervalo.
#include <iostream>

using namespace std;

int main(){
   int v, vl, n=0;
   for ( v=1 ; v <=10; v++)
   {

    cout << "digite um valor: " <<endl;
    cin >>vl;
   
   if (vl>= 10 && vl <=20)
   {
       n = n + 1;
       
   }
   }
   
   cout << "valores dentro do intervalo de 10 a 20: " << n << endl;
   cout << "quantos valores estão fora deste intervalo: " << 10 - n <<endl;
return 0;
    
}
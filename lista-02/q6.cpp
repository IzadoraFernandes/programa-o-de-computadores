//6. Faça um algoritmo que calcule a soma dos números ímpares entre 1 e um limite superior definido pelo usuario.

#include <iostream>

using namespace std;


  
  int main()
{ 
  int contador=1;
  int soma=0;
  int limite;
  
  
    cout<< "defina um valor" <<endl;
       cin>> limite;
   while (contador <= limite)
      
      {
        
       if  (contador%2!=0) {
           cout << " é impar : " << contador <<endl;
            soma= contador+ soma;

       }
          contador= contador + 1;
   
    }
    
    cout << "resultado" <<soma <<endl;
   return 0;
}
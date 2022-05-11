//10.Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcule e imprima a\n//média (simples) desse aluno. Só devem ser aceitos valores válidos durante a leitura (0 a 10) para cada nota.\n\n#include <iostream>\n\nusing namespace std;\n\n \n\n  int main()\n{\n ndl;\n cin>> nt2
//Escreva um algoritmo para ler as notas da 1a. e 2a. avaliações de um aluno, calcule e imprima a
//média (simples) desse aluno. Só devem ser aceitos valores válidos durante a leitura (0 a 10) para cada nota.

#include <iostream>
using namespace std;

 int main()
{
 float nt1, nt2, media;
 
 cout<< "informe o valor da sua primeira nota: " <<endl;
 cin>> nt1;
 
   while (nt1 > 10 || nt1 < 0)
   {
   
   cout<< "informe um valor de 0 a 10: " <<endl;
   cin>> nt1;
   }
   
cout<< "informe o valor da segunda nota: " <<endl;
cin>> nt2;
  
while (nt2 > 10 || nt2 <0) {
   cout<< "informe um valor de 0 a 10: " <<endl;
   cin>> nt2;
}

 media = (nt1 + nt2)/2;

cout<< "o resultado da sua media é: " <<media <<endl;
   return 0;
}

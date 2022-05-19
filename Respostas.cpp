#include <iostream>
#include <ctime>
using namespace std;

void Questao01()
{
  char letra;
  cout << "Digite uma letra \n";
  cin >> letra;
  if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
  {
    cout << "É VOGAL";
  }
  else
  {
    cout << "É CONSOANTE";
  }
}

void Questao02()
{
    int num1, num2, num3;
    cin >> num1;
    cin >> num2;
    cin >> num3;

    if(num1 > num2 && num1 > num3)
    {
      cout << "O maior é: " << num1;
    }
    if(num2 > num3 && num2 > num1)
    {
      cout << "O maior é: " << num2;
    }
    if(num3 > num2 && num3 > num1)
    {
      cout << "O maior é: " << num3;
    }

    cout << endl;

    if(num1 < num2 && num1 < num3)
    {
      cout << "O menor é: " << num1;
    }
    if(num2 < num3 && num2 < num1)
    {
      cout << "O menor é: " << num2;
    }
    if(num3 < num2 && num3 < num1)
    {
      cout << "O menor é: " << num3;
    }
}

void Questao03()
{
  float n1, n2, resultado = 0;
    int opcao;
    string s = "inteiro";

    cout << "Digite 2 numeros: \n";
    cin >> n1;
    cin >> n2;

    cout << "Qual operacao deseja realizar? \n1 - soma \n2 - subtracao \n3 - multiplicacao \n4 - divisao\n";
    cin >> opcao;

    if (opcao == 1)
        resultado = n1 + n2;
    else if (opcao == 2)
        resultado = n1 - n2;
    else if (opcao == 3)
        resultado = n1 * n2;
    else if (opcao == 4)
    {
        if (n2 == 0)
            cout << "Divisao por 0" << endl;
        else
            resultado = n1 / n2;
    }

    else
        cout << "Opcao invalida!" << endl;

    cout << endl;

    cout << resultado << endl;
    if (resultado != 0)
    {
        if ((int)resultado % 2 == 0)
            cout << "par" << endl;
        else
            cout << "impar" << endl;
        if (resultado > 0)
            cout << "positivo" << endl;
        else
            cout << "negativo" << endl;
        if ((int)resultado == resultado)
            cout << "inteiro" << endl;
        else
            cout << "decimal" << endl;
    }
    else   
        cout << "Resultado = 0" << endl;
}

void Questao04()
{
    string nome = " ";
    string senha = " ";
    string conclusao;

    while(nome==senha)
    {
        cout <<"Digite o seu nome: ";
        cin >> nome;

        cout <<"Digite a senha: ";
        cin >> senha;

        if(nome==senha)
        {
          cout << "Erro" << endl;
        }        
        
    }
    
    cout <<"NOME: " << nome << endl << "SENHA: " << senha << endl;   
}

void Questao05()
{
  float soma=0;
  int aleatorio;
  float resultado;
  int i=1;
  //srand((unsigned)time(0));  
  
    while(i<=5000)
    {               
        int maior = 100;
        int menor = 0;
        int aleatorio = rand()%(maior-menor+1) + menor;
        cout << "Iteração: " <<i << ":  "  << "Numero Aleatorio = " << aleatorio << std::endl; 
        soma = soma+aleatorio;  
        i++;
    
    }
        cout << soma << endl;

        resultado=soma/5000;


       cout <<"Media: " << resultado << endl;
}
void Questao06()
{
 float num, media, soma=0;
   for(int x=1; x<=5;x++)
   {
       cout << "Informe o " << x << "° numero: ";
       cin >> num;
       soma=soma+num;
   }
   media=soma/5;
   cout << media;
}

void Questao07()
{
  int n, numDivisor, somaPrimos = 0;

    cout << "Digite um valor: \n";
    cin >> n;
    cout << "Os numeros primos entre 1 e " << n << "sao: \n";
    for (int i = 2; i <= n; i++)
    {
        numDivisor = 0;
        for (int j = 1; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                numDivisor++;
                if (numDivisor > 1)
                    break;
            }
        }
        if (numDivisor < 2)
            cout << i << endl;
    }
}

void Questao07_Forma2()
{
  int numero;
  int soma=0;
  int controle=0;
  int n;
  cout << "Digite um valor: \n";
  cin >> n;
  cout << "Os numeros primos entre 1 e " << n << "sao: \n";

  for(int numero=1;numero<=n;numero++){
      controle=0;
    for(int i=2;i<numero;i++){
        if((numero%i)==0){
            controle=1;
            break;
        }
    }
    if(controle==0 && numero != 1)
    { 
      cout << numero << endl;
    }
}
   
}

void Questao08()
{
    float quantidade;
    float cont=0;
    float resultado;
    cout << "Informe o preço do pão \n";
    cin >> resultado;    
        
    for (int i = 1; i <= 50; i++)
    {
      cont=i*resultado;
      cout << i << "- " << "R$ " << cont << endl;      
    }
    
}



int main() {
  /*
  cout << "Questao 01 \n";
  Questao01();
  cout << endl;
  cout << "Questao 02 \n";
  Questao02();
  Questao03();
  Questao04();
  Questao05();
  Questao06();
  */
  //Questao07();
  //Questao07_Forma2();
  Questao08();
  
}
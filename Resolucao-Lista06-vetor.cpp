#include <iostream>
using namespace std;

void questao05_Joel()
{
  int tam = 10, mediaMaior7 = 0;
    float media[tam];

    for (int i = 0; i < tam; i++) // i Aluno
    {
        media[i] = 0;
        int nota;
        for (int j = 0; j < 1000; j++) // j Nota
        {
            cout << "Digite a nota " << j + 1 << " do aluno " << i + 1 << ": " << endl;
            cin >> nota;
            media[i] += nota;
        }

        media[i] /= 4;
        if (media[i] >= 7)
        {
            mediaMaior7++;
            cout << media[i]; 
        }
    }
    cout << mediaMaior7 << " alunos ficaram com media 7 ou maior." << endl;

}

void Questao05_Talismar()
{
   float aluno[10];
   float nota = 0;
   float vetor[4];
   int cont = 0;
   for (int i = 0; i < 10; i++)
   {
       cout << "Digite a nota 1 do aluno: " << i << ": ";
       cin >> vetor[0];
       cout << "Digite a nota 2 do aluno: " << i << ": ";
       cin >> vetor[1];
       cout << "Digite a nota 3 do aluno: " << i << ": ";
       cin >> vetor[2];
       cout << "Digite a nota 4 do aluno: " << i << ": ";
       cin >> vetor[3];
       nota = (vetor[0] + vetor[1] + vetor[2] + vetor[3]) / 4;
       aluno[i] = nota;
       cout << endl;
 
       if (aluno[i] >= 7)
       {
           cont++;
       }
 
   }
 
 
   cout << "O numero de aluno com media maior ou igual a 7.0 é: " << cont << endl;

}

void questao06_Talismar()
{
   int vetor01[10];
   int vetor02[10];
   int vetor03[20];
 
   for (int i = 0; i < 10; i++)
   {
       cout << "Digite um valor (vetor1): " << endl;
       cin >> vetor01[i];
 
	     cout << "Digite um valor (vetor2): " << endl;
       cin >> vetor02[i];
 
   }
 
   for (int i= 0, j=0, t=1; i < 10; j=j+2,  i++, t=t+2)
   {
       vetor03[j]=vetor01[i];
       vetor03[t]=vetor02[i];
   }
   for (int i = 0; i <20; i++)
   {
       cout <<" "<< vetor03[i] << endl;
   }
   
}

void Questao06_Carlos()
{
  float vet1[10], vet2[10], vet3[20];
	
	//Primeiro e Segundo vetor
	for(int i=0;i<10;i++)
	{
		cout<<"Digite o "<<i+1<<"o valor do vetor 1: ";
		cin>>vet1[i];
		cout<<"Digite o "<<i+1<<"o valor do vetor 2: ";
		cin>>vet2[i];
	}
	//Terceiro vetor 
	for(int i=0;i<10;i++)
	{
		vet3[i*2]=vet1[i]; //posições pares
		vet3[i*2+1]=vet2[i]; //posições ímpares
	}
	//Imprimir o vet3
	for(int i=0;i<20;i++)
	{
		cout<<vet3[i]<<endl;
  } 

}

void Questao07_Breno()
{
    int vetor[10];
    int x,p,r;
    p = 1;
    cout << "Digite um valor para ser encontrado: ";
    cin >> x;
    for(int i=0; i<10;i++ ){
      cout << "Digite um valor para armazenar na array: ";
      cin >> vetor[i];
      if(x == vetor[i]){
        p = 0;       
      }     
    }
    if(p == 0)
    {
      cout << "ACHEI";
    }    
    else
      cout << "Não achei";
}

void Questao08_Ezio()
{
  int VET[15], k = 0;

  for (int i = 0; i < 15; i++)
  {
    cout << "Insira um valor: \n";
    cin >> VET[i];
  }
  for (int i = 0; i < 15; i++)
  {
    for (int j = k; j < 15; j++)
    {
      if (j != i)
      {
        if (VET[j] == VET[i])
        {
          cout << "Os valores da " << j << "ª e " << i << "ª casa, são iguais\n";
        }
      }
    }
    k++;
  }
}

void Questao08_Carlos()
{
  int vet[15], i, j, qtd=0;
	
	for(i=0;i<15;i++)
	{
		cout<<"Digite o "<<i<<"o número: ";
		cin>>vet[i];
	}
	for(i=0;i<15;i++)
	{
		for(j=i+1;j<15;j++)
		{
			if(vet[i]==vet[j])
			{
				cout<<"O número "<<vet[i]<<" foi repetido na posição "<<i<<" e " <<j << endl;
				qtd=qtd+1;
			}
		}
	}
	if(qtd==0)
	{
		cout<<"Não existem números repetidos no vetor";
	}


}

void Questao09_Ezio()
{
  int vet[20], x, y = 0;

  for (int i = 0; i < 20; i++)
  {
    cout << "Insira um valor\n";
    cin >> vet[i];
  }
  cout << "Insira um valor para ser comparado \n";
  cin >> x;

  for (int i = 0; i < 20; i++)
  {
    if (vet[i] == x)
    {
      y = y + 1;
    }
  }

  cout << "O número foi encontrado: " << y << " vezes. \n";
}


void Questao10_Moises_OutraAbordagemDiferente()
{
    int vet[20];
    int j,n;
    cout << "digite valor aleatório: ";
    cin >> j;

    for (int i=0; i<20;i++)
    {
      cout << "digite valor["<<i<<"]: ";
      cin >> vet[i];
      if(vet[i] == j){
        do{
          cout << "digite um novo valor para["<<i<<"]: ";
          cin >> vet[i];
        }
        while(vet[i] == j); 
      }
    }
    for (int i=0; i<20;i++)
    {
      cout << "a posição ["<<i<<"]" <<vet[i]<<endl ;    
    }    

}

void Questao10_Moises()
{
    int vet[20];
    int j,n;
    

    for (int i=0; i<20;i++)
    {
      cout << "digite valor["<<i<<"]: ";
      cin >> vet[i];     
    }

    cout << "digite valor aleatório: ";
    cin >> j;

    for (int i=0; i<20;i++)
    {      
       while(vet[i] == j)  
       {
         cout << "Achei um número repetido!!" << endl;
         cout << "Digite um novo valor: ";
         cin >> vet[i];
       }
    }

    for (int i=0; i<20;i++)
    {
      cout << vet[i] << endl;
    }

}




int main()
{
    //questao05_Joel();
    //Questao05_Talismar();
    //questao06_Talismar();
    //Questao07_Breno();
    //Questao08_Carlos();
    Questao10_Moises();
}
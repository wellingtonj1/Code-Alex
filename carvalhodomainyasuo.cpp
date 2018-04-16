#include "naturals.h"
#include "naturals.cpp"
#include <iostream>

using namespace std;

int main()
{
    int numero,escolha;
    naturals p1;
    cout<<"\nDigite um numero natural :";

    for(int i=1;i<=1;i++)
        {
            cin>>numero;
            if(p1.natural(numero))
            {// o numero é natural
            }
            else
            { // nao e natural
            cout<< "\n o numero digitado nao é natural... Digite novamente : " <<endl;
            i=0;
            }
        }


    cout<< "\n===========================================Qual operação desejas realizar ?=========================================== \n";

    cout<< "\n Digite 1 para Calcular seu fatorial";
    cout<< "\n Digite 2 para Verificar se é um numero perfeito";
    cout<< "\n Digite 3 para Verificar se o numero é capicua";
    cout<< "\n Digite 4 para Verificar se o numero é um quadrado perfeito"<<endl;
    cin>>escolha;

    switch(escolha)
    {

        case 1:
        {
        cout<< "\n O fatorial do numero " << numero << " é == " << p1.fatorialN();
        break;
        }

        case 2:
        {
        if(p1.perfeitoN())
        {
        cout <<"\n o numero " << numero << " é perfeito \n";
        }
        else
        {
        cout <<"\n o numero " << numero << " não é perfeito \n";
        }
        break;
        }

        case 3:
        {
        if(p1.capicuaN())
        {
        cout<<"\n o numero " << numero << " é capicua \n";
        }
        else
        {
        cout<<"\n o numero " << numero << " não é capicua \n";
        }
        break;
        }

        case 4:
        {
        if(p1.quadrapfN())
        {
        cout<<"\n o numero " << numero << " é um quadrado perfeito \n";
        }
        else
        {
        cout<<"\n o numero " << numero << " não é um quadrado perfeito \n";
        }
        break;
        }
    }
}


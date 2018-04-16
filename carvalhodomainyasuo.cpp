#include "naturals.h"
#include "naturals.cpp"
#include <iostream>

using namespace std;

int main()
{
    int numero;
    naturals p1;
    cout<<"\nDigite um numero natural :";
    cin>>numero;

    p1.natural(numero);
    cout<< "\n O fatorial do numero " << numero << " é == " << p1.fatorialN();
    if(p1.perfeitoN())
    {
        cout <<"\n o numero " << numero << " é perfeito \n";
    }
    else
    {
        cout <<"\n o numero " << numero << " não é perfeito \n";
    }

    // Capicua

    if(p1.capicuaN())
    {
        cout<<"\n o numero " << numero << " é capicua \n";
    }
    else
    {
        cout<<"\n o numero " << numero << " não é capicua \n";
    }

    //Quadra perfect

    if(p1.quadrapfN())
    {
        cout<<"\n o numero " << numero << " é um quadrado perfeito \n";
    }
    else
    {
        cout<<"\n o numero " << numero << " não é um quadrado perfeito \n";
    }

    //
}


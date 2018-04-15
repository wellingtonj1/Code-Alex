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
    //cout<< p1.fatorialN();
    if(p1.perfeitoN())
    {
        cout <<"\n é perfeito ";
    }
    else
    {
        cout <<"\n não é perfeito";
    }
}



#include "naturals.h"
#include <iostream>
#include <math.h>


using namespace std;
void naturals::natural(int n)
{
    int conta=1;
	for(int i=0;i<conta;i++)
    {
        if(n<0)
        {
        cout<< "\n\tVoce nao digitou um numero valido \n \t Digite outro numero :";
        cin>> n;
        conta++;
        }
        else
        {
         numN=n;
         break;
        }

    }

}

long long naturals::fatorialN()
{
    long long soma=1;
	for(int i=2;i<=numN;i++)
	{
     soma=soma*i;
	}
	return soma;
}

bool naturals::perfeitoN()
{
	int i,x,soma=1;
	x=sqrt(numN);
	for(int i=2;i<numN;i++)
	{
		if(numN%i==0)
		soma=soma+i+i/numN;
	}
    if(numN==i*i)
    {
        soma+=i;
    }
	return (numN==soma);
}
    bool naturals::capicuaN()
    {

     int aux,resto,numeroinv=0;
     aux=numN;
     while(aux>0)
     {
         resto=aux%10;
         aux=aux/10;
         numeroinv=numeroinv*10+resto;
     }
    return (numeroinv==numN);
    }
    bool naturals::quadrapfN()
    {
        float aux=0;
        int auxint=0;
        aux=sqrt(numN);
        auxint=aux;

        return (aux<=auxint);

    }
    bool naturals::primoN()
    {

	}
    //IN CONSTRUCTION MotherMARE//
    //void mudabaseN();
    //int maxdivN()
    //void mindivN()
    //bool primo2N();

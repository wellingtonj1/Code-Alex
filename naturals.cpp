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
    //void naturals::capicuaN();
    //void naturals::quadrapfN();
    bool naturals::primoN()
    {
        int raiz=0;
        raiz=sqrt(numN);
		for(int i=2; i<=numN; i++)
		{
            // EM TESTES //
            if(numN%i!=0&&numN!=1&&numN!=2)
            {
            return true; //é primo
            }
            else
            {
            return false;
            break;
            }
		}
	}
    //IN CONSTRUCTION MotherMARE//
    //void mudabaseN();
    //int maxdivN()
    //void mindivN()
    //bool primo2N();

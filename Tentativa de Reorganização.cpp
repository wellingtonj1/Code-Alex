#include "naturals.h"
#include <iostream>
#include <math.h>

using namespace std;
void naturals::natural(int n)
{
	if(n<0)
	{
		cout<< "\n você não digitou um numero natural : " << endl;
	}
	else
	{
		numN=n;
	}

}

long long naturals::fatorialN()
{
	for(int i=1;i<numN;i++)
	{
		return i*=i;
	}
}

bool naturals::perfeitoN()
{
	int raizn,soma=0;
	raizn=sqrt(numN);
	for(int i=1;i<raizn;i++)
	{
		if(numN%i==0)
		soma+=i+(numN/i);
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

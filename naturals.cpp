                                //IN CONSTRUCTION MotherMARE//
#include "naturals.h"
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string>

using namespace std;
bool naturals::natural(int n)
{
    if(n>=0)
    {
        numN=n;
        return true;
    }
    else
    {
        return false;
    }
}

int naturals::returns()
{
    return numN;
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
    bool naturals::eprimo()
    {
        int divide=0;
        while(numN<=0);
        for(int i=1; i <=numN; i++)
        {
            if(numN%i==0)
            {
             divide++;
            }
        }
        return (divide==2);
	}
    int naturals::maxdiv(int n2)
    {
       int copnum=numN;
       int resto=0;
       resto=numN;
              while(resto!=0)
              {
                  copnum = n2;
                  n2    = resto;
                  resto = copnum%n2;
              }
        return n2;
    }

    int naturals::mindiv(int n2)
    {
    int mmc, aux;

    for (int i = 2; i <= n2; i++)
    {
    aux = numN * i;

        if ((aux % n2) == 0)
        {
        mmc = aux;
        i = n2 + 1;
        }
    }
    return mmc;
    }
    //naturals::mudabase()

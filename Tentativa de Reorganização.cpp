void natural(int n)
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

long fatorialN()
{
	for(int i=1;i<numN;i++)
	{
		return i*=i;
	}
}

bool perfeitoN()
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
    void capicuaN();
    void quadrapfN();
    bool primoN()
    {
        int raiz=0;
        raiz=sqrt(numN);
		for(int i=2; i<=numN; i++)
		{
            if(numN%!=0)
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
    void mudabaseN();
    void maxdivN();
    void mindivN();
    void primo2N();

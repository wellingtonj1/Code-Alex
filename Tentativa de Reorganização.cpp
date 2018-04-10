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

int fatorialN()
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
		soma+=i+numN/i;
	}
	
	return (numN==soma);
}
    void capicuaN();
    void quadrapfN();
    bool primoN()
    {
		if(numN%numN ==0 && numN/1 ==0) 
	}
    void mudabaseN();
    void maxdivN();
    void mindivN();
    void primo2N();

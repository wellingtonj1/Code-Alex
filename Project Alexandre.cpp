#include <iostream>
#include <stdlib.h>

using namespace std;
void escalar(int* a,int tma,int* b,int tmb)
{
    int multi=0;
    if(tma!=tmb)
    {
        cout<<"\n Os conjuntos não possuem os mesmos tamanhos"<<endl;
    }
    else
    {
    for(int i=0;i<tma;i++)
    {
        multi+=a[i]*b[i];
    }
    }
    cout<< "\nO Produto escalar entre A e B ==" << multi <<endl;
}
int amplitude(int* a,int tma)
{
	int maior=0;
	int menor= a[0];
	for(int i=0; i<tma;i++)
	{

	if( a[i]>maior)
	{
		maior=a[i];
	}
	if( a[i]<menor)
	{
		menor=a[i];
	}

	}

	return maior-menor;
}
void disjunt(int* a,int tma,int* b,int tmb)
{
    int t=0;
    bool dif[t];
    for(int i=0; i<tma;i++)
    {
        for(int j=0;j<tmb;j++)
        {
            if(a[i]!=b[j])
            {
            dif[t]=true;
            t++;
            }
            else
            {
                dif[t]=false;
                t++;
            }
        }
    }

    int conta=0;
    for(int d=0;d<t;d++)
    {
        conta+=dif[d];
    }
    if(conta!=t)
    {
        cout<< "\n não é um conjunto disjunto";
    }
    else
    {
        cout<< "\n é um conjunto disjunto";
    }
}
void identicos(int* a,int tma,int* b,int tmb)
{
    int t=0;
    bool iguais[t];
    for(int i=0; i<tma;i++)
    {
        for(int j=0;j<tmb;j++)
        {
            if(a[i]==b[j])
            {
            iguais[t]=true;
            t++;
            if(i<tma)
            {
            i++;
            j=-1;
            }
            }
            else
            {
                iguais[t]=false;
            }
        }
    }
    int conta=0;
    for(int d=0;d<t;d++)
    {
        conta+=iguais[d];
    }
    if(conta==tma||tma==tmb)
    {
        cout<< "\n é um conjunto identico";
    }
    else
    {
        cout<< "\n nao é um conjunto identico";
    }

}
void subconj(int* a,int tma,int* b,int tmb)
{
    int t=0;
    bool iguais[t];
    for(int i=0; i<tma;i++)
    {
        for(int j=0;j<tmb;j++)
        {
            if(a[i]==b[j])
            {
            iguais[t]=true;
            t++;
            if(i<tma)
            {
            i++;
            j=-1;
            }
            }
            else
            {
                iguais[t]=false;
            }
        }
    }
    int conta=0;
    for(int d=0;d<t;d++)
    {
        conta+=iguais[d];
    }
    if(conta==tma)
    {
        cout<< "\n é um subconjunto";
    }
    else
        cout<< "\n nao é um subconjunto";
}

void menas(int* a,int tma,int* b, int tmb,int* c,int tmc2)
{
   int conta=0;
   bool dife;
   for(int i=0;i<tma ;i++)
    {
        dife=false;
        for(int j=0;j<tmb ; j++)
        {
             dife=false;
             if(a[i]-b[j]==0)
            {
                dife=false;
                if(i<tma)
                {
                i++;
                j=-1;
                }
            }

            else
            {
                if(i<tma)
                {
                dife=true;
                }
            }


        }

        if(dife==true && i<tma)
        {

            for(int p=tmc2;p<tmc2+1;p++)
            {
                c[p]=a[i];
                conta++;
            }
            tmc2++;
        }
    }
    cout<<" Conjunto  Diferença D = ";
    for(int x=0;x<conta; x++)
    {
        cout << c[x] <<"\t";
    }

}
void intersec(int* a,int tma,int* b, int tmb,int* c,int tmc1)
{
    for(int i=0; i<tma; i++)
    {
        for(int j=0;j<tmb; j++)
        {
            if(a[i]==b[j] || b[j]==a[i])
            {
                c[tmc1]=b[j];
                tmc1+=1;
            }
        }
    }
    cout<<" Conjunto das interceções D = ";
    for(int x=0;x<tmc1; x++)
    {
        cout << c[x] << "\t " ;
    }
}

void vetuniao(int* a,int tma,int* b, int tmb, int* c , int tmc)
{
    for(int z=0;z<tma;z++)
    {
	c[z]=a[z];
	}
	tmc=tma;
    for(int i=0; i<tma; i++)
    {
        for(int j=0;j<tmb; j++)
        {
            if(a[i]!=b[j])
            {

                for(int k=tma;k<tma;k++)
                {
				c[k]=b[j];

				}
				tma++;
            }
        }
    }
    cout << "Conjunto das unioes C = ";
    for(int x=0; x<tmc; x++)
    {
        cout << c[x] <<"\t";
    }


}
void vetimp(int* vx, int tx)
{
    for(int i=0;i<tx;i++)
    {
        cout<<"\nValores inserido na " << i <<"º posição = " << vx[i];
    }
}
void vetler(int* x,int tx)
{
    for(int i=0; i<tx;i++)
    {
        cin>>x[i];
    }
}

int main()
{
    int escolha,tma,tmb;
    string continua="s";
    while(continua=="s"||continua=="Sim"||continua=="S")
 {
    cout << "\n Primeiro Defina o tamanho de dois conjunto \n 1 = ler os dois conjuntos inseridos \n 2 = verifica se A e/ou B são vazios \n 3 = Determina o conjunto C = A ∪ B \n 4 = Determine o conjunto D = A ∩ B \n 5 = Determina o conjunto E = A - B \n 6 = Determine o conjunto F = B - A \n 7 = A é subconjunto de B ? \n 8 = B é subconjunto de A ? \n 9 = A e B são conjuntos identicos ? \n 10 = A e B são conjuntos disjuntos ? \n 11 = Calcule a amplitude dos conjuntos A e B \n 12 = Calcule o produto escalar se for possivel \n 13 = Determine o conjunto G, formado pelos membros que compoem a maior subcadeia ordenada de forma crescemte em A \n 14 = Determine o conjunto H, formado pelos membros que  compoem a maior subcadeia ordenada de forma decrescente em B. \n 15 = Determine o conjunto I, formado pelos membros de A e B, intercalados de forma ordenada - os conjuntos A e B não estão ordenados \n\n";

    cout<< "\n Digite o tamanho do conjunto A: ";
        cin>> tma;
        cout<< "\n Digite o tamanho do conjunto B: ";
        cin>>tmb;
        int a[tma],b[tmb];
        if(tma!=0)
        {
        cout<<"\n Insira os elementos do conjunto A = ";
        vetler(a,tma);
        }
        if(tmb!=0)
        {
        cout <<"\n Insira os elementos do conjunto B = ";
        vetler(b,tmb);
        }
        cout<< "\nDigite a operação que você deseja realizar = ";
    cin>>escolha;
    switch(escolha)
    {

        case 1:
        {// ler valores dos conjuntos
            vetimp(a,tma);
            cout<<"\n Do segundo conjunto são : ";
            vetimp(b,tmb);
            cout << "\n deseja continuar ? S/N";
            cin >> continua;
            system("cls");

            break;

        }
        case 2:
        {
        // função A e B são vazios ?
        if(tma==0)
        {
        cout << "\n O conjunto A é vazio ";
        cout << "\n deseja continuar ? S/N";
        cin >> continua;
        system("cls");

        }
        if(tmb==0)
        {
        cout << "\n O conjunto B é vazio ";
        cout << "\n deseja continuar ? S/N";
        cin >> continua;
        system("cls");

        }
        else
        {
        cout <<"\n Não são vazios ";
        cout << "\n deseja continuar ? S/N";
        cin >> continua;
        system("cls");
        }
        break;
        }
        case 3:
        {
        //cout<<"  função uniao ou soma dos conjuntos ";
        int tmc=0;
        int vetc[tmc];
        vetuniao(a,tma,b,tmb,vetc,tmc);
        cout << "\n deseja continuar ? S/N";
        cin >> continua;
        system("cls");

        break;
        }
        case 4:
        {
        //cout<<"função intersecção ou elementos em comum";
        int tmc=0;
        int c[tmc];

        intersec(a,tma,b,tmb,c,tmc);
        cout << "\n deseja continuar ? S/N";
        cin >> continua;
        system("cls");

        break;
        }
        case 5:
        {
        //cout<<"função diferença ouu menos";
        int tmc=0;
        int c[tmc];
        menas(a,tma,b,tmb,c,tmc);

        cout << "\n deseja continuar ? S/N";
        cin >> continua;
        system("cls");
        break;
        }
        case 6:
        {
        //cout<<"função diferença ouu menos no inverso de valores";
        int tmc=0;
        int c[tmc];
        menas(b,tmb,a,tma,c,tmc);
        cout << "\n deseja continuar ? S/N";
        cin >> continua;
        system("cls");
        break;
        }
        case 7:
        {
        //cout<<"descobrir se A é subconjunto de B";
        subconj(a,tma,b,tmb);
        cout << "\n deseja continuar ? S/N";
        cin >> continua;
        system("cls");
        break;
        }
        case 8:
        {
        //cout<<"descobrir se B é subconjunto de A";
        subconj(b,tmb,a,tma);
        cout << "\n deseja continuar ? S/N";
        cin >> continua;
        system("cls");
        break;
        }
        case 9:
        {
        //cout<<"descobrir se A e B são conjuntos identicos";
        identicos(a,tma,b,tmb);
        cout << "\n deseja continuar ? S/N";
        cin >> continua;
        system("cls");
        break;
        }
        case 10:
        {
        //cout<<"descobrir se A e B são conjuntos disjuntos";
        disjunt(a,tma,b,tmb);
        cout << "\n deseja continuar ? S/N";
        cin >> continua;
        system("cls");
        break;
        }

        case 11:
        {
        //cout<< "Calcule a amplitude dos conjuntos A e B.";
		int na,nb;
		na=amplitude(a,tma);
		nb=amplitude(b,tmb);
		cout<< "\nconjunto A= " << na;
        cout<< "\nconjunto B="<< nb <<endl;
        cout << "\n deseja continuar ? S/N";
        cin >> continua;
        system("cls");
        break;
        }
        case 12:
        {
        //cout<< "Calcule o produto escalar entre A e B quando possivel";
        escalar(a,tma,b,tmb);
        cout << "\n deseja continuar ? S/N";
        cin >> continua;
        system("cls");
        break;
        }
        case 13:
        {
        cout<< "Determine o conjunto G, formado pelos membros que compoem a maior subcadeia ordenada de forma cescente em A.";
        cout << "\n deseja continuar ? S/N";
        cin >> continua;
        system("cls");
        break;
        }
        case 14:
        {
        cout<< "Determine o conjunto H, formado pelos membros que  compoem a maior subcadeia ordenada de forma decrescente em B.";

        cout << "\n deseja continuar ? S/N";
        cin >> continua;
        break;
        }
        case 15:
        {
        cout<< "Determinar o conjunto i,formado pelos membros de A e B,intercalados de forma ordenada - os conjuntos A e B não estão ordenados.";

        cout << "\n deseja continuar ? S/N";
        cin >> continua;
        break;
        }

    }

 }

}
